//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IASUnifiedProgressClient;

@interface LoginProgress : NSObject
{
    IASUnifiedProgressClient *_loginPhaseProgressClient;
    IASUnifiedProgressClient *_hardwareCheckPhaseProgressClient;
    IASUnifiedProgressClient *_hardwareFixPhaseProgressClient;
    float _startingPercentage;
    float _loginUsableRange;
    BOOL _transitionDetected;
    BOOL _ignoreAnimationComplete;
    BOOL _setupAssistantPhaseWasAdded;
}

+ (id)sharedLoginProgress;
- (void)macBuddyReady:(id)arg1;
- (struct CGRect)startingProgressRectForMainScreen;
- (id)screenForDisplayID:(int)arg1;
- (float)startingPercentage;
- (void)progressAnimationComplete;
- (void)abortProgressUIIfRunning;
- (void)closeAndReleaseAllWindowsWithAnimation:(BOOL)arg1;
- (void)hideWindow:(id)arg1;
- (void)setupStandardLoginProgressWithFLO:(BOOL)arg1;
- (void)setupHardwareLoginProgressWithFLO:(BOOL)arg1;
- (void)tearDownProgressImmediately;
- (void)finishPhaseAndStartNextIfNeeded;
- (void)setHardwareFixProgress:(float)arg1 withStatus:(id)arg2;
- (void)setHardwareCheckProgress:(float)arg1;
- (void)incrementLoginProgressBarPercentage:(float)arg1;
- (BOOL)completeLoginProgressBar;
- (BOOL)setupAssisantPhaseWasAdded;
- (BOOL)loginProgessBarShowing;
- (void)startRootMacBuddyReadyMonitoring;
- (void)startLoginProgressWithHardwareCheck:(BOOL)arg1 addFLOProgress:(BOOL)arg2;
- (void)dealloc;
- (id)init;

@end

