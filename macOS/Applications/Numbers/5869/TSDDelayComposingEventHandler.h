//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSDMouseEventHandler-Protocol.h"

@class NSEvent, NSString;
@protocol TSDMouseEventHandler;

@interface TSDDelayComposingEventHandler : NSObject <TSDMouseEventHandler>
{
    BOOL mShouldUsePrimaryEventHandler;
    BOOL mHaveChosenEventHandler;
    NSObject<TSDMouseEventHandler> *mPrimaryEventHandler;
    NSObject<TSDMouseEventHandler> *mDelayedEventHandler;
    double mDelay;
    NSEvent *mMouseDownEvent;
    struct CGPoint mMouseDownPoint;
}

- (BOOL)mouseHandlingHasCompleted;
- (BOOL)handleKeyDownWithEvent:(id)arg1;
- (BOOL)handleDoubleClickAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)handleSingleClickAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)flagsChangedWithEvent:(id)arg1;
- (void)mouseUpAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)mouseDraggedAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)mouseDownAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)p_mouseEventOccurred;
- (void)p_delayTimeoutPassed;
- (id)p_eventHandler;
- (void)dealloc;
- (id)initWithPrimaryEventHandler:(id)arg1 delayedEventHandler:(id)arg2 withDelay:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

