//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray;

@protocol REMXPCIndexingPerformer
- (void)deleteAllSearchableItemsWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)reindexSearchableItemsWithIdentifiers:(NSArray *)arg1 acknowledgementHandler:(void (^)(void))arg2;
- (void)reindexAllSearchableItemsWithAcknowledgementHandler:(void (^)(void))arg1;
- (void)testIndexDummyItemWithCompletion:(void (^)(NSError *))arg1;
@end

