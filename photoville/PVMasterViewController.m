//
//  PVMasterViewController.m
//  photoville
//
//  Created by Bryce Redd on 4/30/12.
//  Copyright (c) 2012 Itv. All rights reserved.
//

#import "PVMasterViewController.h"
#import "UIImageView+AFNetworking.h"
#import "NSManagedObject+JSON.h"
#import "AFNetworking.h"
#import "PhotoList.h"
#import "Photo.h"


@interface PVMasterViewController ()

@end

@implementation PVMasterViewController

@synthesize managedObjectContext = __managedObjectContext;
@synthesize scrollView = _scrollView;

- (void) viewDidLoad {
    NSURL* url = [NSURL URLWithString:@"http://api.flickr.com/services/rest/?method=flickr.interestingness.getList&api_key=94305b477c98717709127a31d4dfe925&format=json&nojsoncallback=1"];
    
    AFJSONRequestOperation* operation = [AFJSONRequestOperation JSONRequestOperationWithRequest:[NSURLRequest requestWithURL:url] success:^(NSURLRequest* request, NSURLResponse* response, id json) {
        
        PhotoList* list = [PhotoList objectWithObject:[json objectForKey:@"photos"] inContext:self.managedObjectContext];
        
        float height = 0;
        for(Photo* photo in list.photo) {
            UIImageView* imageView = [UIImageView new];
            [imageView setImageWithURL:photo.imageUrl];
            imageView.frame = CGRectMake(60, height, 200, 200);
            
            [self.scrollView addSubview:imageView];
            height += 210;
        }
        
        self.scrollView.contentSize = CGSizeMake(0, height);
    
    } failure:nil];
    
    [operation start];
}

- (void)dealloc {
    [_scrollView release];
    [super dealloc];
}
- (void)viewDidUnload {
    [self setScrollView:nil];
    [super viewDidUnload];
}
@end
