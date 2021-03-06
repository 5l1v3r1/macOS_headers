//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Cocoa/NSWindow.h>

@class NSTrackingArea;

@interface DisappearingWindow : NSWindow
{
    BOOL mTieToMainMenu;
    int mWindowType;
    struct CGRect mOnScreenRect;
    struct CGRect mOffScreenRect;
    BOOL mOnTop;
    BOOL mAnimatingOn;
    id mKeyEventHandler;
    id mDelegate;
    NSTrackingArea *mTrackingArea;
    NSTrackingArea *mAutoKeyTrackingArea;
    BOOL mHaveEntered;
    id _moveTrackingSibling;
    BOOL mChangeWindowLevel;
}

- (void)setMoveTrackingSibling:(id)arg1;
- (id)moveTrackingSibling;
- (void)animationDidStop:(id)arg1;
- (void)animationDidEnd:(id)arg1;
- (void)_animationOver;
- (void)animateOff;
- (void)animateOffWithDuration:(double)arg1 ignoreMouse:(BOOL)arg2;
- (void)animateOnWithDuration:(double)arg1 ignoreMouse:(BOOL)arg2;
- (void)addAnimateOffToAnimation:(id)arg1;
- (void)animateOn;
- (void)addAnimateOnToAnimation:(id)arg1;
- (void)addAnimateOnToAnimationWithOutMakingKey:(id)arg1;
- (void)instantOnIfNecessary;
- (void)instantOffIfNecessary;
- (void)setAlphaValue:(double)arg1;
- (void)displayIfNeeded;
- (BOOL)mouseInsideWindow;
- (BOOL)canBecomeKeyWindow;
- (void)keyDown:(id)arg1;
- (void)setKeyEventHandler:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)siblingMouseMoved:(id)arg1;
- (void)disableAutoHide;
- (void)enableAutoHide;
- (double)animationResizeTime:(struct CGRect)arg1;
- (void)disableAutoKey;
- (void)enableAutoKey;
- (void)hideMenu;
- (void)untieToMainMenu;
- (void)tieToMainMenu;
- (BOOL)isOnScreen;
- (void)animateWindowsOff:(id)arg1;
- (void)flyToFinalRect:(struct CGRect)arg1;
- (void)zoomOntoScreenFromRect:(struct CGRect)arg1 toFinalRect:(struct CGRect)arg2;
- (BOOL)usesProMenuTreatmentForView:(id)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)updateOnAndOffScreenRectsForOnScreenRect:(struct CGRect)arg1;
- (void)setFrameToOnScreenRect:(BOOL)arg1;
- (void)setChangeWindowLevel:(BOOL)arg1;
- (void)setType:(int)arg1;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4 type:(int)arg5;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;

@end

