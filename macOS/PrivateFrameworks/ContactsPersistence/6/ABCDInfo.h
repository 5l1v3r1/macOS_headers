//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ContactsPersistence/ABCDRecord.h>

@class CNCDContainer, NSString;

@interface ABCDInfo : ABCDRecord
{
}

+ (id)nts_firstPersistentStoreForUrls:(id)arg1 inCoordinator:(id)arg2;
+ (id)nts_persistentStoreForUrl:(id)arg1 inCoordinator:(id)arg2;
+ (id)nts_createInfoInManagedObjectContext:(id)arg1 inPersistentStoreAtURL:(id)arg2;
+ (id)_table;
+ (id)abEntityName;
+ (BOOL)_isPublicRecord;
- (id)fetchedContainerInManagedObjectContext:(id)arg1 store:(id)arg2;
- (id)parentGroups;
- (void)setReadWriteSharingACL:(id)arg1;
- (id)readWriteSharingACL;
- (void)setReadSharingACL:(id)arg1;
- (id)readSharingACL;
- (void)setRemoteLocations:(id)arg1;
- (id)remoteLocations;
@property(retain, nonatomic) NSString *serialNumber;
@property(retain, nonatomic) NSString *meUniqueId;

// Remaining properties
@property(retain, nonatomic) CNCDContainer *container; // @dynamic container;

@end

