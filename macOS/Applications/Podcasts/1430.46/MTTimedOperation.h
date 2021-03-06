//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSTimer;

@interface MTTimedOperation : NSOperation
{
    NSTimer *_optimer;
    CDUnknownBlockType _mainBlock;
    BOOL _executing;
    BOOL _finished;
    int _operationType;
    double _timeout;
}

- (void).cxx_destruct;
@property(nonatomic) int operationType; // @synthesize operationType=_operationType;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(readonly, nonatomic) BOOL isFinished; // @synthesize isFinished=_finished;
@property(readonly, nonatomic) BOOL isExecuting; // @synthesize isExecuting=_executing;
- (void)setMainBlock:(CDUnknownBlockType)arg1;
- (void)cancel;
- (void)main;
- (void)scheduleTimer;
- (void)performMain:(id)arg1;
- (void)start;
- (void)finish;
- (BOOL)isConcurrent;
- (id)init;

@end

