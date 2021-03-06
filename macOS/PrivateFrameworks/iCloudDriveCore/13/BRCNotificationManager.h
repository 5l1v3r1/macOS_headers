//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BRCModule.h"

@class BRCAccountSession, BRCClientRanksPersistedState, BRCMaterializedItemsObserver, ICDBRNotificationQueue, NSHashTable, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_source>, NSObject<OS_dispatch_workloop>, NSString;

__attribute__((visibility("hidden")))
@interface BRCNotificationManager : NSObject <BRCModule>
{
    BRCAccountSession *_session;
    BRCClientRanksPersistedState *_state;
    NSHashTable *_pipes;
    NSObject<OS_dispatch_workloop> *_queue;
    NSObject<OS_dispatch_source> *_enqueueUpdatesSource;
    NSMutableArray *_updatesToEnqueue;
    ICDBRNotificationQueue *_notifs;
    NSMutableDictionary *_transferCache;
    NSMutableSet *_additionalUpdatesItemRowID;
    unsigned long long _previousMaxRank;
    NSMutableDictionary *_watchersByFileObjectID;
    NSMapTable *_fileObjectIDByWatcher;
    BOOL _isCancelled;
    BRCMaterializedItemsObserver *_dataScopeObserver;
    BRCMaterializedItemsObserver *_docScopeObserver;
}

@property(readonly, nonatomic) BRCMaterializedItemsObserver *docScopeObserver; // @synthesize docScopeObserver=_docScopeObserver;
@property(readonly, nonatomic) BRCMaterializedItemsObserver *dataScopeObserver; // @synthesize dataScopeObserver=_dataScopeObserver;
@property(readonly, nonatomic) BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
@property(readonly, nonatomic) BRCAccountSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (BOOL)hasWatcherMatchingGlobalItemID:(id)arg1;
- (void)invalidatePipesForRegatheringNSMDQ;
- (void)flushUpdatesWithRank:(unsigned long long)arg1;
- (void)_queueAdditionalUpdates;
- (void)_dispatchUpdatesToPipesWithRank:(unsigned long long)arg1;
- (void)fetchLastFlushedRankWithReply:(CDUnknownBlockType)arg1;
- (void)queueProgressUpdates:(id)arg1;
- (void)queueUpdateForItemAtRowID:(unsigned long long)arg1;
- (void)queueUpdate:(id)arg1;
- (id)pipeWithReceiver:(id)arg1;
- (void)getPipeWithXPCReceiver:(id)arg1 client:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)unregisterPipeAsWatcher:(id)arg1;
- (void)registerPipe:(id)arg1 asWatcherForFileObjectID:(id)arg2;
- (void)unregisterAppLibraries:(id)arg1 forFlags:(unsigned long long)arg2;
- (void)registerAppLibraries:(id)arg1 forFlags:(unsigned long long)arg2;
- (void)cancel;
- (void)resume;
- (void)suspend;
- (void)close;
- (id)initWithAccountSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

