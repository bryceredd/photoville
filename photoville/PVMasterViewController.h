//
//  PVMasterViewController.h
//  photoville
//
//  Created by Bryce Redd on 4/30/12.
//  Copyright (c) 2012 Itv. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PVDetailViewController;

#import <CoreData/CoreData.h>

@interface PVMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) PVDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
