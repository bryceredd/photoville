//
//  NSManagedObject+JSON.h
//  DailyChallenge
//
//  Created by Bryce Redd on 4/25/12.
//  Copyright (c) 2012 Itv. All rights reserved.
//

#import <CoreData/CoreData.h>
#import <Foundation/NSJSONSerialization.h> 

@interface NSManagedObject (JSON)
+ (id) objectWithDefinition:(NSDictionary*)definition inContext:(NSManagedObjectContext*)context;
+ (id) objectWithJSONString:(NSString*)json inContext:(NSManagedObjectContext*)context;
+ (id) objectWithObject:(id)arrayOrDictionary inContext:(NSManagedObjectContext*)context;
@end
