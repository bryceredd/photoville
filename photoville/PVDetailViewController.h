//
//  PVDetailViewController.h
//  photoville
//
//  Created by Bryce Redd on 4/30/12.
//  Copyright (c) 2012 Itv. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PVDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
