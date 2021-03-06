//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class CAKeyframeAnimation, CALayer, NSDate, NSDictionary, NSTimer, PBRecordingTimerDigitsLayer, PBTextView;

@interface PBRecordingTimerView : NSView
{
    CALayer *_brightRedLayer;
    CALayer *_darkRedLayer;
    PBRecordingTimerDigitsLayer *_digitsLayer;
    CAKeyframeAnimation *_darkRedAnimation;
    NSTimer *_timer;
    NSDate *_startDate;
    NSDate *_stopDate;
    BOOL _fullscreenMode;
    PBTextView *_timerView;
    NSDictionary *_timerAttributes;
}

- (void).cxx_destruct;
- (void)continue;
- (void)stop;
- (void)startWithDate:(id)arg1;
- (void)dealloc;
- (void)prepareLayersIfNeeded;
- (void)setFullscreenMode:(BOOL)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setupLookForFullscreen:(BOOL)arg1;
- (id)_digitalStringForNumber:(long long)arg1;
- (id)_stringForDuration:(double)arg1;
- (void)_updateElapsedTime;
- (void)_createAnimations;
- (void)_createLayers;

@end

