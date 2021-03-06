//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MGProgressEstimator, NSError, NSSet, NSString, NSURL;

@interface MGJob : NSObject
{
    unsigned long long _numberOfUnfinishedOperations;
    unsigned int _cancelled:1;
    double _estimatedTimeRemaining;
    MGProgressEstimator *_progressEstimator;
}

+ (id)keyPathsForValuesAffectingStatusString;
+ (id)keyPathsForValuesAffectingCanReveal;
@property(readonly, nonatomic) double estimatedTimeRemaining; // @synthesize estimatedTimeRemaining=_estimatedTimeRemaining;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)canCancelOperation:(id)arg1;
- (void)cancel;
@property(readonly, nonatomic, getter=isCancelled) BOOL cancelled;
- (void)_decrementNumberOfUnfinishedOperations;
@property(readonly, nonatomic, getter=isFinished) BOOL finished;
- (void)startOnOperationQueue:(id)arg1;
- (void)_beginObservingProgress;
- (void)_periodicUpdateEstimatedTimeRemaining:(id)arg1;
- (void)_updateEstimatedTimeRemaining;
@property(readonly, copy, nonatomic) NSString *statusString;
@property(readonly, nonatomic) BOOL canReveal;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) NSString *finishedStatusString;
@property(readonly, nonatomic) NSString *runningStatusString;
@property(readonly, copy, nonatomic) NSURL *resultURL;
@property(readonly, nonatomic) float progress;
@property(readonly, nonatomic) NSSet *operations;
- (void)dealloc;
- (id)init;
@property(readonly, nonatomic, getter=isProgressIndeterminate) BOOL progressIndeterminate;
- (void)reveal;

@end

