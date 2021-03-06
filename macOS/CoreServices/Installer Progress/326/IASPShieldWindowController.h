//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IASPShieldWindow, NSMutableArray, NSString, NSTimer;

@interface IASPShieldWindowController : NSObject
{
    unsigned int _windowServerConnection;
    struct __CFArray *_bootWindowList;
    BOOL _watchingForDisplayChanges;
    BOOL _animationCompletionHandlerWasCalled;
    float _lastProgress;
    NSMutableArray *_shieldWindows;
    IASPShieldWindow *_progressWindow;
    NSTimer *_displayChangeTimer;
    NSTimer *_showWindowsTimer;
    NSString *_statusString;
    NSString *_alternateStatusString;
    CDUnknownBlockType _animationCompletionHandler;
}

@property BOOL animationCompletionHandlerWasCalled; // @synthesize animationCompletionHandlerWasCalled=_animationCompletionHandlerWasCalled;
@property(copy) CDUnknownBlockType animationCompletionHandler; // @synthesize animationCompletionHandler=_animationCompletionHandler;
@property(retain) NSString *alternateStatusString; // @synthesize alternateStatusString=_alternateStatusString;
@property(retain) NSString *statusString; // @synthesize statusString=_statusString;
@property BOOL watchingForDisplayChanges; // @synthesize watchingForDisplayChanges=_watchingForDisplayChanges;
@property(retain) NSTimer *showWindowsTimer; // @synthesize showWindowsTimer=_showWindowsTimer;
@property(retain) NSTimer *displayChangeTimer; // @synthesize displayChangeTimer=_displayChangeTimer;
@property(retain) IASPShieldWindow *progressWindow; // @synthesize progressWindow=_progressWindow;
@property(retain) NSMutableArray *shieldWindows; // @synthesize shieldWindows=_shieldWindows;
@property float lastProgress; // @synthesize lastProgress=_lastProgress;
- (void).cxx_destruct;
- (BOOL)_isUsingFileVault;
- (id)_progressBarBackgroundImage;
- (id)_backgroundImage;
- (void)_displaysWillReconfigureWhileHidingWindows;
- (void)_displaysDidChange:(id)arg1;
- (void)_updateDisplayChange;
- (void)_startOrUpdateDisplayReconfigurationTimer:(double)arg1;
- (void)_endDisplayChange:(id)arg1;
- (void)_beginDisplayChange;
- (void)_setHandlesNotifications:(BOOL)arg1;
- (unsigned int)_windowServerConnection;
- (BOOL)_updateWindows;
- (void)_orderWindowsOut;
- (void)_orderWindowsFront;
- (void)_setWindowAlphaValues:(double)arg1 animate:(BOOL)arg2;
- (void)_callAnimationCompletionHandler;
- (void)_showWindows:(id)arg1;
- (void)showWindows;
- (void)setWindowLevels:(int)arg1;
- (void)hideWindows;
- (BOOL)isShowingUI;
- (void)setBatteryIsLow:(BOOL)arg1;
- (void)setAlternateStatus:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setDebugInfo:(id)arg1;
- (BOOL)setProgressAnimationCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setProgress:(float)arg1 animate:(BOOL)arg2;
- (void)setProgress:(float)arg1;
- (void)dealloc;
- (id)init;

@end

