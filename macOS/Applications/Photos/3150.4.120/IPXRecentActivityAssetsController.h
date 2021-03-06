//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXObjectsController.h"

@class PFCoalescer, PFDispatchQueue;

@interface IPXRecentActivityAssetsController : IPXObjectsController
{
    PFCoalescer *_reloadCoalescer;
    PFDispatchQueue *_modelQueue;
}

@property(retain) PFDispatchQueue *modelQueue; // @synthesize modelQueue=_modelQueue;
@property(retain) PFCoalescer *reloadCoalescer; // @synthesize reloadCoalescer=_reloadCoalescer;
- (void).cxx_destruct;
- (id)posterImageWithSize:(struct CGSize)arg1;
- (id)posterImage;
- (id)posterVersion;
- (id)newCollectionWithUUID:(id)arg1 name:(id)arg2 lifetimeSequence:(unsigned long long)arg3 objects:(id)arg4 userInfo:(id)arg5;
- (id)objectsCollectionName;
- (void)uninstallObjectsSourceMonitor;
- (void)installObjectsSourceMonitor;
- (id)init;
- (void)getEarliestDate:(out id *)arg1 latestDate:(out id *)arg2 forContentObjects:(id)arg3 withOriginalEarliestDate:(id)arg4 latestDate:(id)arg5;
- (BOOL)collectionObjectDateRangeIsCalculatedFromArrangedObjects;
- (void)_activityViewEntriesDidChange:(id)arg1;
- (void)_reloadWithEntries:(id)arg1;
- (void)_locked_prefetchVersionsInMediaItems:(id)arg1;

@end

