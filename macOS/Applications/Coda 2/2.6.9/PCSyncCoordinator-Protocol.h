//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString, NSURL, PCSyncRepository, SNKObjectCoordinator, SNKService;

@protocol PCSyncCoordinator <NSObject>
- (void)disableSync;
- (BOOL)enableSyncWithOptions:(NSDictionary *)arg1 error:(id *)arg2;
- (BOOL)isSyncEnabled;
- (PCSyncRepository *)repository;
- (NSArray *)supportedRepositories;
- (SNKService *)syncService;

@optional
- (BOOL)isApplicationRegistered;
- (NSString *)registrationDataUserDefaultKey;
- (NSString *)serialNumber;
- (NSString *)serialProductName;
- (NSURL *)accountManagementURL;
- (NSURL *)privacyPolicyURL;
- (NSString *)syncDescriptiveText;
- (NSArray *)applicationIdentifiersToDisplay;
- (SNKObjectCoordinator *)objectCoordinator;
- (NSString *)anonymousClientIdentifier;
- (NSArray *)identityNames;
@end

