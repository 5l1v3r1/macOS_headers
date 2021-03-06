//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenTimeCore/STUniquedManagedObject.h>

#import "STUniquelySerializableManagedObject.h"

@class NSString, STCoreUser;

@interface STCoreOrganizationSettings : STUniquedManagedObject <STUniquelySerializableManagedObject>
{
}

+ (id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
+ (id)fetchResultsRequestsForChangesToOrganizationSettingsForUserWithDSID:(id)arg1;
- (id)redactedDescription;
@property(readonly, copy) NSString *description;
- (void)_changeAppLimitsFromAskToWarn:(id)arg1;
- (id)dictionaryRepresentation;
- (BOOL)updateWithDictionaryRepresentation:(id)arg1;

// Remaining properties
@property(nonatomic) BOOL allLimitsEnabled; // @dynamic allLimitsEnabled;
@property(nonatomic) long long communicationPolicy; // @dynamic communicationPolicy;
@property(nonatomic) long long communicationWhileLimitedPolicy; // @dynamic communicationWhileLimitedPolicy;
@property(nonatomic) long long contactManagementState; // @dynamic contactManagementState;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(nonatomic) BOOL needsToSetPasscode; // @dynamic needsToSetPasscode;
@property(copy, nonatomic) NSString *passcode; // @dynamic passcode;
@property(readonly) Class superclass;
@property(retain, nonatomic) STCoreUser *user; // @dynamic user;

@end

