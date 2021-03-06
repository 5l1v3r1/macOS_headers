//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNUIDataCollectionSearchSession : NSObject
{
    BOOL _pendingResults;
    BOOL _pendingSuggestionsResults;
}

+ (id)currentSession;
+ (void)end;
+ (void)begin;
@property(nonatomic) BOOL pendingSuggestionsResults; // @synthesize pendingSuggestionsResults=_pendingSuggestionsResults;
@property(nonatomic) BOOL pendingResults; // @synthesize pendingResults=_pendingResults;
- (void)didSelectResult:(id)arg1;
- (void)didFetchResultSuggested:(BOOL)arg1;
- (void)searchStringDidChange;

@end

