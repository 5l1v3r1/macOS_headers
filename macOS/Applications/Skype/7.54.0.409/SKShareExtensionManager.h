//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SKSharingConfiguration;

@interface SKShareExtensionManager : NSObject
{
    SKSharingConfiguration *_configuration;
}

@property(readonly) SKSharingConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (BOOL)isAgentRunning;
- (void)stopAgent;
- (void)fetchAgentTasksInfo;
- (void)writeShareAgentPlistAndSubmit;
- (void)exchangeStatistics;
- (id)asyncMediaConfiguration;
@property(readonly, nonatomic) NSString *shareExtensionPath;
@property(readonly, nonatomic) NSString *shareAgentPath;
- (id)encryptedCredentialsForCurrentlyLoggedInUser;
- (BOOL)storeSharingInfoWithSkypeName:(id)arg1 credentials:(id)arg2;
- (BOOL)storeSharedDecryptionKey:(id)arg1;
- (void)exchangeInformation;
- (void)makeSharingDirectoriesIfNecessary;
- (void)accountManagerLogoutWillBeginNotification:(id)arg1;
- (void)applicationWillBecomeActive:(id)arg1;
- (void)dealloc;
- (id)init;

@end

