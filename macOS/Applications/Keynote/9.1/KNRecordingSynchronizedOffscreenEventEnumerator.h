//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface KNRecordingSynchronizedOffscreenEventEnumerator : NSObject
{
    NSArray *_enumerationStates;
}

- (void).cxx_destruct;
- (void)enumerateNextEventsAndPlayersUpToTime:(double)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)initWithOffscreenEventPlayers:(id)arg1;

@end

