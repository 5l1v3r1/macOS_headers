//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSSet, RMUser, RMUserDevicePairRecord;

@interface RMUsageTime : NSManagedObject
{
}


// Remaining properties
@property(nonatomic) unsigned long long deviceUnlocks; // @dynamic deviceUnlocks;
@property(retain, nonatomic) NSSet *notificationUsages; // @dynamic notificationUsages;
@property(nonatomic) unsigned long long screenWakes; // @dynamic screenWakes;
@property(retain, nonatomic) RMUser *sourceUser; // @dynamic sourceUser;
@property(retain, nonatomic) RMUserDevicePairRecord *sourceUserDevice; // @dynamic sourceUserDevice;
@property(copy, nonatomic) NSDate *usageStartDate; // @dynamic usageStartDate;
@end

