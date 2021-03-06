//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDKnobTracker.h"

#import "TSDLineTrackerModifiers-Protocol.h"

@class NSString, TSDShapeLayout;

@interface TSDShapeLineSegmentKnobTracker : TSDKnobTracker <TSDLineTrackerModifiers>
{
    BOOL mSnapEnabled;
    BOOL mSnapAngles;
    BOOL mResizeFromCenter;
    TSDShapeLayout *mResizingLayout;
    struct CGPoint mNewKnobCenter;
    struct CGPoint mOriginalFixedPoint;
    struct CGPoint mOriginalKnobCenter;
    struct CGPoint mOriginalMiddlePoint;
    struct CGPoint mOriginalPathBoundsOrigin;
    BOOL mSnappedToAspectRatio;
    BOOL mBeganAlignmentOperation;
}

@property(nonatomic) BOOL resizeFromCenter; // @synthesize resizeFromCenter=mResizeFromCenter;
@property(nonatomic) BOOL snapAngles; // @synthesize snapAngles=mSnapAngles;
@property(nonatomic) BOOL snapEnabled; // @synthesize snapEnabled=mSnapEnabled;
- (void)p_showHUDAndGuidesAfterDelay:(id)arg1;
- (void)p_cancelDelayedHUDAndGuides;
- (void)p_hideHUD;
- (void)p_updateHUD;
- (id)p_HUDLabelText;
- (void)p_enforceMinimumLength;
- (void)p_validateLayout;
- (void)endMovingKnob;
- (BOOL)shouldHideOtherKnobs;
- (BOOL)didChangeGeometry;
- (BOOL)shouldDisplayGuides;
- (void)moveKnobToRepPosition:(struct CGPoint)arg1;
- (void)moveKnobToCanvasPosition:(struct CGPoint)arg1;
- (void)beginMovingKnob;
- (id)currentGeometry;
- (id)shapeRep;
- (void)dealloc;
- (id)initWithRep:(id)arg1 knob:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

