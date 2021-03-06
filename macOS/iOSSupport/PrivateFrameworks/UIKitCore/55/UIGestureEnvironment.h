//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableArray, NSMutableSet, UIGestureGraph;

__attribute__((visibility("hidden")))
@interface UIGestureEnvironment : NSObject
{
    struct __CFRunLoopObserver *_gestureEnvironmentUpdateObserver;
    NSMutableSet *_gestureRecognizersNeedingUpdate;
    NSMutableSet *_gestureRecognizersNeedingReset;
    NSMutableSet *_gestureRecognizersNeedingRemoval;
    NSMutableArray *_dirtyGestureRecognizers;
    NSMutableArray *_delayedTouches;
    NSMutableArray *_delayedTouchesToSend;
    NSMutableArray *_delayedPresses;
    NSMutableArray *_delayedPressesToSend;
    NSMutableArray *_preUpdateActions;
    BOOL _dirtyGestureRecognizersUnsorted;
    BOOL _updateExclusivity;
    BOOL _isUpdatingGestureEnvironment;
    UIGestureGraph *_dependencyGraph;
    NSMapTable *_nodesByGestureRecognizer;
}

- (void).cxx_destruct;
- (void)_forceUpdateForSpringBoardOnly;
- (void)_markGestureAsDirty:(id)arg1;
- (void)_gestureNeedsReset:(id)arg1;
- (void)setGestureNeedsUpdate:(id)arg1;
- (void)_cancelPresses:(id)arg1 event:(id)arg2;
- (void)_cancelTouches:(id)arg1 event:(id)arg2;
- (void)setNeedsExclusivityUpdate;
- (void)_clearGestureIsDirty:(id)arg1;
- (void)_clearGestureNeedsUpdate:(id)arg1;
@property(readonly, nonatomic) BOOL _hasGesturesNeedingUpdate;
- (void)_queueGestureRecognizerForResetIfFinished:(id)arg1;
- (void)_queueGestureRecognizersForResetIfFinished:(id)arg1;
- (void)_runPreUpdateActions;
- (void)_addPreUpdateAction:(CDUnknownBlockType)arg1;
- (void)_cancelGestureRecognizers:(id)arg1;
- (void)_performTouchContinuationWithOverrideHitTestedView:(id)arg1;
- (void)_deliverEvent:(id)arg1 toGestureRecognizers:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)_updateForEvent:(id)arg1 window:(id)arg2;
- (void)_removeNodeFromGestureGraph:(id)arg1;
- (void)removeGestureRecognizer:(id)arg1;
- (void)addGestureRecognizer:(id)arg1;
- (id)_graphDictionary:(BOOL)arg1;
- (void)addRequirementForGestureRecognizer:(id)arg1 requiringGestureRecognizerToFail:(id)arg2;
- (void)removeRequirementForGestureRecognizer:(id)arg1 requiringGestureRecognizerToFail:(id)arg2;
- (BOOL)unmetRequirementsForGestureRecognizer:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 requiresGestureRecognizerToFail:(id)arg2;
- (void)_addDynamicRequirementForGestureRecognizer:(id)arg1 requiringGestureRecognizerToFail:(id)arg2;
- (BOOL)_activeRelationshipsForGestureRecognizer:(id)arg1;
- (void)_notifyDependentsGestureRecognizerHasCompleted:(id)arg1;
- (id)_gestureRecognizerForNode:(id)arg1;
- (id)_nodeForGestureRecognizer:(id)arg1;
- (BOOL)_pressesBeganWasDelayedForPress:(id)arg1;
- (BOOL)_touchesBeganWasDelayedForTouch:(id)arg1;
- (id)init;
- (void)_enqueueDelayedPressToSend:(id)arg1;
- (void)_enqueueDelayedTouchToSend:(id)arg1;
- (void)_removeDelayedPress:(id)arg1;
- (void)_removeDelayedTouch:(id)arg1;
- (id)_delayedPressForPress:(id)arg1 event:(id)arg2;
- (id)_delayedTouchForTouch:(id)arg1 event:(id)arg2;

@end

