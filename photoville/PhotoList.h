//
//  PhotoLIst.h
//  photoville
//
//  Created by Bryce Redd on 4/30/12.
//  Copyright (c) 2012 Itv. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface PhotoList : NSManagedObject

@property (nonatomic, retain) NSNumber * perpage;
@property (nonatomic, retain) NSNumber * page;
@property (nonatomic, retain) NSNumber * pages;
@property (nonatomic, retain) NSNumber * total;
@property (nonatomic, retain) NSSet *photo;
@end

@interface PhotoList (CoreDataGeneratedAccessors)

- (void)addPhotoObject:(NSManagedObject *)value;
- (void)removePhotoObject:(NSManagedObject *)value;
- (void)addPhoto:(NSSet *)values;
- (void)removePhoto:(NSSet *)values;

@end
