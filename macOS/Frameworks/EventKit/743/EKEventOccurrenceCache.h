//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CalDefaultDictionary, EKBackingStore, NSMutableArray, NSMutableOrderedSet;
@protocol OS_dispatch_queue;

@interface EKEventOccurrenceCache : NSObject
{
    EKBackingStore *_backingStore;
    NSMutableOrderedSet *_binnedDates;
    CalDefaultDictionary *_binnedEvents;
    NSMutableArray *_eventsWithProposedTimes;
    NSObject<OS_dispatch_queue> *_cacheQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue; // @synthesize cacheQueue=_cacheQueue;
@property(retain, nonatomic) NSMutableArray *eventsWithProposedTimes; // @synthesize eventsWithProposedTimes=_eventsWithProposedTimes;
@property(retain, nonatomic) CalDefaultDictionary *binnedEvents; // @synthesize binnedEvents=_binnedEvents;
@property(retain, nonatomic) NSMutableOrderedSet *binnedDates; // @synthesize binnedDates=_binnedDates;
@property(nonatomic) __weak EKBackingStore *backingStore; // @synthesize backingStore=_backingStore;
- (void).cxx_destruct;
- (id)_binnedOccurrences;
- (id)_allOccurrences;
- (id)_cachedRange;
- (unsigned long long)_startIndexForRange:(id)arg1;
- (unsigned long long)_insertIndexForDate:(id)arg1;
- (void)_binDate:(id)arg1;
- (void)pruneWithOccurrencesToKeep:(id)arg1;
- (void)_unbinOccurrencesHelperWithOccurrenceTestBlock:(CDUnknownBlockType)arg1;
- (void)unbinOccurrencesWithObjectIDs:(id)arg1;
- (void)_unbinOccurrences:(id)arg1;
- (id)_nonNilEventOccurrences:(id)arg1;
- (void)unbinOccurrences:(id)arg1;
- (void)_rebinOccurrence:(id)arg1;
- (id)_groupOccurrencesByUID:(id)arg1;
- (void)_rebinOccurrences:(id)arg1;
- (void)rebinOccurrences:(id)arg1;
- (void)rebinAllEvents;
- (id)allEvents;
- (id)_eventsOrCountsInRange:(id)arg1 countsOnly:(BOOL)arg2 withPredicate:(id)arg3;
- (id)countsForEventsInRange:(id)arg1 withPredicate:(id)arg2;
- (id)countsForEventsInRange:(id)arg1;
- (id)eventsInRange:(id)arg1 withPredicate:(id)arg2;
- (id)eventsInRange:(id)arg1;
- (void)_binEvent:(id)arg1 timeZoneString:(id)arg2;
- (void)_binEvents:(id)arg1;
- (void)binEvents:(id)arg1;
- (id)copyForBackingStore:(id)arg1;
- (id)initWithBackingStore:(id)arg1;

@end

