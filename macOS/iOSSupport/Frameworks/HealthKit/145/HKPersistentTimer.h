//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HKPersistentTimer : NSObject
{
    NSString *_fullTimerKey;
}

+ (id)_prefixedKeyWithTimerKey:(id)arg1;
+ (id)timerWithKey:(id)arg1;
@property(retain, nonatomic) NSString *fullTimerKey; // @synthesize fullTimerKey=_fullTimerKey;
- (void).cxx_destruct;
- (unsigned long long)elapsedNanoseconds;
- (unsigned long long)elapsedSeconds;
- (id)timerValue;
- (void)clear;
- (void)start;

@end

