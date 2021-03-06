//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock;

@interface CPAction : NSObject
{
    id mObject;
    SEL mSelector;
    NSLock *mLock;
    NSLock *mRunningLock;
    double mProgressPercent;
    BOOL mTerminated;
    id mTitle;
}

+ (void)performActionWithObject:(id)arg1 selector:(SEL)arg2 title:(id)arg3;
+ (void)performActionWithObject:(id)arg1 selector:(SEL)arg2;
+ (void)abort;
+ (void)setTimeDelayBeforeProgressWindowAppears:(double)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)doThreadedProcess:(id)arg1;
- (void)setObject:(id)arg1 selector:(SEL)arg2;
- (BOOL)isTerminatedInTimeInterval:(double)arg1;
- (BOOL)isTerminatedBeforeDate:(id)arg1;
- (BOOL)isTerminated;
- (double)progressPercent;
- (BOOL)shouldAbort;
- (void)terminate;
- (void)stop;
- (void)start;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)setIndeterminateProgress;
- (void)setProgress:(double)arg1;
- (void)dealloc;
- (id)init;

@end

