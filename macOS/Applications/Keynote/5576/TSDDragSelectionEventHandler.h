//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSDAutoscrollDelegate-Protocol.h"
#import "TSDDecorator-Protocol.h"
#import "TSDMouseEventHandler-Protocol.h"

@class CALayer, NSEvent, NSMutableSet, NSSet, NSString, TSDAutoscroll, TSDInteractiveCanvasController, TSURetainedPointerKeyDictionary;

@interface TSDDragSelectionEventHandler : NSObject <TSDDecorator, TSDMouseEventHandler, TSDAutoscrollDelegate>
{
    CALayer *mSelectionOverlay;
    TSDInteractiveCanvasController *mICC;
    struct CGPoint mStartingPoint;
    TSURetainedPointerKeyDictionary *mRectsForReps;
    struct CGRect mSelectionRect;
    NSMutableSet *mPendingSelection;
    NSSet *mOriginalSelection;
    TSDAutoscroll *mAutoscroll;
    struct CGPoint mAutoscrollPoint;
    BOOL mHaveDragged;
    NSEvent *mLastDragEvent;
    struct CGPoint mLastPoint;
}

@property(readonly, nonatomic) TSDInteractiveCanvasController *icc; // @synthesize icc=mICC;
@property(nonatomic) struct CGPoint autoscrollPoint; // @synthesize autoscrollPoint=mAutoscrollPoint;
@property(retain, nonatomic) TSDAutoscroll *autoscroll; // @synthesize autoscroll=mAutoscroll;
- (void)p_refreshRectsForReps;
- (void)autoscrollWillNotStart;
- (void)updateAfterAutoscroll:(id)arg1;
- (BOOL)handleSingleClickAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)flagsChangedWithEvent:(id)arg1;
- (void)mouseUpAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)mouseDraggedAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)mouseScrolledAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)mouseDownAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)p_setPendingSelection;
- (id)decoratorOverlayLayers;
- (void)dealloc;
- (id)initWithInteractiveCanvasController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

