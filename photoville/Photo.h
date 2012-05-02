//
//  Photo.h
//  photoville
//
//  Created by Bryce Redd on 4/30/12.
//  Copyright (c) 2012 Itv. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "PhotoList.h"

@interface Photo : NSManagedObject

@property (nonatomic, retain) NSNumber * photoId;
@property (nonatomic, retain) NSString * owner;
@property (nonatomic, retain) NSString * secret;
@property (nonatomic, retain) NSString * server;
@property (nonatomic, retain) NSNumber * farm;
@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSNumber * isPublic;
@property (nonatomic, retain) NSNumber * isFriend;
@property (nonatomic, retain) NSNumber * isFamily;
@property (nonatomic, retain) PhotoList *photolist;

// special properties to compensate for ugly json

@property (nonatomic, strong) NSNumber * id;
@property (nonatomic, strong) NSNumber * ispublic;
@property (nonatomic, strong) NSNumber * isfriend;
@property (nonatomic, strong) NSNumber * isfamily;

@property (nonatomic, readonly, strong) NSURL* imageUrl;

@end
