//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"
#import "NSObject.h"

@class INImage, NSDate, NSNumber;

@protocol INGetAvailableRestaurantReservationBookingDefaultsIntentResponseExport <NSObject, JSExport>
@property(copy) INImage *providerImage;
@property(copy) NSNumber *minimumPartySize;
@property(copy) NSNumber *maximumPartySize;
@property(readonly, copy) NSDate *defaultBookingDate;
@property(readonly) unsigned long long defaultPartySize;
- (id)init;
@end

