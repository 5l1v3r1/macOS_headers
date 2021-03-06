//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSStackView.h>

@class NSTrackingArea;

@interface KNMacEffectListStackView : NSStackView
{
    NSTrackingArea *mTrackingArea;
}

- (void)updateMouseIsOverForMousePoint:(struct CGPoint)arg1;
- (id)p_hitSectionViewForHitView:(id)arg1;
- (void)p_clearMouseIsOverForAllSectionViewsExcept:(id)arg1;
- (void)p_clearMouseIsOverForAllSectionViews;
- (void)p_updateMouseIsOverForEvent:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)p_commonInit;
- (BOOL)isFlipped;
- (void)dealloc;

@end

