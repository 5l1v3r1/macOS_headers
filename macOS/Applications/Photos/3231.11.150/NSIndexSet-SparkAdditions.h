//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSIndexSet.h>

@interface NSIndexSet (SparkAdditions)
+ (id)ipx_itemIndexesFromIndexPaths:(id)arg1;
+ (id)ipx_itemIndexesForFirstSectionInIndexPaths:(id)arg1 firstSectionIndex:(out long long *)arg2;
- (id)indexRangesListDescription;
- (id)indexSetAdjustedForInsertions:(id)arg1;
- (id)indexSetAdjustedForDeletions:(id)arg1;
- (id)_indexSetByUpdatingWithChangedIndexes:(id)arg1 asInserts:(BOOL)arg2;
@end

