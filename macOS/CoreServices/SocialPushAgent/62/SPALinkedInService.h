//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPAService.h"

@interface SPALinkedInService : SPAService
{
}

- (id)notificationCenterBundleID;
- (id)destroyParametersForUUID:(id)arg1;
- (id)destroyURLForUUID:(id)arg1;
- (id)listURL;
- (id)registrationURL;
- (id)acAccountType;
- (unsigned long long)currentPushSettings;
- (id)registrationPlistPath;
- (id)urlForActivateNotification:(id)arg1;
- (void)handleAPSConnectionMessageForTopic:(id)arg1 userInfo:(id)arg2;
- (BOOL)unregisterAccount:(id)arg1 uuid:(id)arg2;
- (id)registeredPushDestinationsFromProviderWithAccount:(id)arg1;
- (void)registerForPushNotificationsAndSaveAccountWithDeviceToken:(id)arg1 UUID:(id)arg2 account:(id)arg3 enabledFor:(unsigned long long)arg4;
- (id)initWithServiceType:(id)arg1 accountStore:(id)arg2;

@end

