//
//  Photo.m
//  photoville
//
//  Created by Bryce Redd on 4/30/12.
//  Copyright (c) 2012 Itv. All rights reserved.
//

#import "Photo.h"
#import "PhotoList.h"


@implementation Photo

@dynamic photoId;
@dynamic owner;
@dynamic secret;
@dynamic server;
@dynamic farm;
@dynamic title;
@dynamic isPublic;
@dynamic isFriend;
@dynamic isFamily;
@dynamic photolist;

@dynamic isfamily;
@dynamic isfriend;
@dynamic ispublic;
@dynamic id;

@dynamic imageUrl;

- (void) setIsfamily:(NSNumber *)number {
    self.isFamily = number;
}

- (void) setIspublic:(NSNumber *)number {
    self.isPublic = number;
}

- (void) setIsfriend:(NSNumber *)number {
    self.isFriend = number;
}

- (void) setId:(NSNumber *)number {
    self.photoId = number;
}

- (NSURL*) imageUrl {

    // http://farm9.static.flickr.com/8153/7125944593_de1ef12ae4_m.jpg
    
    NSString* string = [NSString stringWithFormat:@"http://farm%@.static.flickr.com/%@/%@_%@_m.jpg", self.farm, self.server, self.photoId, self.secret];
    return [NSURL URLWithString:string];
}

@end
