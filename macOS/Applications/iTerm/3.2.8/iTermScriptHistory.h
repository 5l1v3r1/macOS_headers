//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface iTermScriptHistory : NSObject
{
    NSMutableArray *_entries;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSArray *entries; // @synthesize entries=_entries;
- (void).cxx_destruct;
- (id)entryWithIdentifier:(id)arg1;
- (void)addHistoryEntry:(id)arg1;
@property(readonly, nonatomic) NSArray *runningEntries;
- (id)init;

@end

