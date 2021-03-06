//
//  Guest+CoreDataProperties.h
//  HotelManager
//
//  Created by Alberto Vega Gonzalez on 11/30/15.
//  Copyright © 2015 Alberto Vega Gonzalez. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Guest.h"

NS_ASSUME_NONNULL_BEGIN

@interface Guest (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSManagedObject *reservation;
@property (nullable, nonatomic, retain) NSString *lastName;

@end

NS_ASSUME_NONNULL_END
