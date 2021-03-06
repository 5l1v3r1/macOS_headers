//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DDSAssetProvidingDelegate.h"
#import "DDSAssetTrackingDelegate.h"
#import "DDSManaging.h"
#import "DDSReachabilityObserverDelegate.h"

@class DDSAssetSyncState, DDSReachabilityObserver, DDSScheduledTimer, NSString;

@interface DDSManager : NSObject <DDSAssetProvidingDelegate, DDSReachabilityObserverDelegate, DDSAssetTrackingDelegate, DDSManaging>
{
    id <DDSManagingDelegate> _delegate;
    id <DDSAssetTracking> _tracker;
    id <DDSAssetProviding> _provider;
    DDSScheduledTimer *_timer;
    DDSAssetSyncState *_syncState;
    DDSReachabilityObserver *_reachabilityObserver;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) DDSReachabilityObserver *reachabilityObserver; // @synthesize reachabilityObserver=_reachabilityObserver;
@property(readonly, nonatomic) DDSAssetSyncState *syncState; // @synthesize syncState=_syncState;
@property(readonly, nonatomic) DDSScheduledTimer *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) id <DDSAssetProviding> provider; // @synthesize provider=_provider;
@property(readonly, nonatomic) id <DDSAssetTracking> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) id <DDSManagingDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deleteV1AssetsIfNecessary;
- (void)reachabilityStateDidChange:(BOOL)arg1;
- (void)didUpdateManifestWithError:(id)arg1;
- (void)didCompleteDownloadForAssertions:(id)arg1 error:(id)arg2;
- (void)didCompleteDownloadForAssertion:(id)arg1 error:(id)arg2;
- (void)didChangeDownloadState:(unsigned long long)arg1 forAsset:(id)arg2;
- (void)handleRemovedAssertions:(id)arg1;
- (void)handleNewAssertions:(id)arg1;
- (void)assertionIDsForClientID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)removeAssertionWithID:(id)arg1;
- (void)addAssertionForQuery:(id)arg1 policy:(id)arg2 assertionID:(id)arg3 clientID:(id)arg4;
- (void)beginUpdate;
- (void)setTimer;
- (void)checkSyncState;
- (id)initWithProvider:(id)arg1 tracker:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

