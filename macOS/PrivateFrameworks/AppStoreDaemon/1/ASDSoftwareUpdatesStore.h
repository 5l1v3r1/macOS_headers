//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppStoreDaemon/ASDBaseClient.h>

@class ASDServiceBroker;

@interface ASDSoftwareUpdatesStore : ASDBaseClient
{
    ASDServiceBroker *_serviceBroker;
    BOOL _hasUpdatesEntitlement;
    int _storeChangedNotificationToken;
}

+ (id)badgeCount;
+ (id)registerBadgeCountNotificationBlock:(CDUnknownBlockType)arg1;
+ (id)interface;
- (void).cxx_destruct;
- (id)_failedJobResultsForBundleIDs:(id)arg1;
- (void)updateAllWithOrder:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)setAutoUpdateEnabled:(BOOL)arg1;
- (void)reloadManagedUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)reloadFromServerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)refreshUpdatesWithCompletionBlock:(id)arg1 userInitiated:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)refreshUpdateCountWithCompletionBlock:(CDUnknownBlockType)arg1;
- (BOOL)hasEntitlement;
- (void)getUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (BOOL)autoUpdateEnabled;
- (id)_initWithServiceBroker:(id)arg1;
- (id)init;

@end

