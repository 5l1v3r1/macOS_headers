//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DisappearingWindow.h"

@class FloatingPickerView, NSTimer;

@interface FloatingPickerWindow : DisappearingWindow
{
    NSTimer *mFadeTimer;
    double mFadePhase;
    double mFadeStep;
    FloatingPickerView *mContentView;
    struct CGRect _screenRectForKeepVisible;
    BOOL _track;
    BOOL _fadesBasedOnMouse;
    BOOL _allowKey;
}

- (void)orderFrontRegardless;
- (void)orderWindow:(long long)arg1 relativeTo:(long long)arg2;
- (void)orderOut:(id)arg1;
- (void)orderBack:(id)arg1;
- (void)orderFront:(id)arg1;
- (void)makeKeyAndOrderFront:(id)arg1;
- (void)resignKeyWindow;
- (void)fadeOutQuickly;
- (void)fadeOut;
- (void)fadeOutWithStep:(double)arg1;
- (void)_fadeCallback;
- (void)showAtRect:(struct CGRect)arg1 makingKey:(BOOL)arg2;
- (BOOL)canBecomeKeyWindow;
- (void)setAllowKey:(BOOL)arg1;
- (BOOL)allowKey;
- (BOOL)canBecomeMainWindow;
- (void)dealloc;
- (void)stopFade;
- (BOOL)makeFirstResponder:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)setFadesBasedOnMouse:(BOOL)arg1;
- (BOOL)fadesBasedOnMouse;
- (void)setScreenRectForKeepVisible:(struct CGRect)arg1;
- (struct CGRect)screenRectForKeepVisible;
- (id)initWithContentRect:(struct CGRect)arg1;
- (void)_updateFadeSettings;

@end

