//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSCollectionViewDataSource.h"
#import "NSCollectionViewDelegateDFRCustomizationLayout.h"
#import "NSTouchBarCustomizationPreviewFlexibleSectionLayoutDelegate.h"
#import "NSTouchBarCustomizationPreviewInteractionCoordinatorDelegate.h"
#import "NSTouchBarCustomizationPreviewMiniControlStripSectionLayoutDelegate.h"

@class NSArray, NSCollectionView, NSFunctionRow, NSString, NSTouchBarCustomizationPreviewInteractionCoordinator, NSTouchBarItemTree, _NSFunctionRowCustomizationDFRItem;

__attribute__((visibility("hidden")))
@interface NSTouchBarCustomizationPreviewViewController : NSViewController <NSTouchBarCustomizationPreviewInteractionCoordinatorDelegate, NSCollectionViewDelegateDFRCustomizationLayout, NSCollectionViewDataSource, NSTouchBarCustomizationPreviewFlexibleSectionLayoutDelegate, NSTouchBarCustomizationPreviewMiniControlStripSectionLayoutDelegate>
{
    id <NSTouchBarCustomizationPreviewViewControllerDelegate> _delegate;
    NSCollectionView *_customizationCollectionView;
    struct CGRect _escKeyRect;
    struct CGRect _applicationRect;
    struct CGRect _miniControlStripRect;
    struct CGRect _expandedControlStripRect;
    struct CGRect _systemTrayRect;
    BOOL _animatedIn;
    BOOL _forcesReducedMetricsCompression;
    NSFunctionRow *_functionRow;
    long long _currentSection;
    NSTouchBarItemTree *_applicationItemTree;
    NSArray *_cachedApplicationPresentationItems;
    NSTouchBarItemTree *_miniControlStripItemTree;
    NSArray *_cachedMiniControlStripPresentationItems;
    NSTouchBarItemTree *_expandedControlStripItemTree;
    NSArray *_cachedExpandedControlStripPresentationItems;
    _NSFunctionRowCustomizationDFRItem *_pendingApplicationItem;
    _NSFunctionRowCustomizationDFRItem *_pendingMiniControlStripItem;
    _NSFunctionRowCustomizationDFRItem *_pendingExpandedControlStripItem;
    BOOL _cachedApplicationPresentationItemsAreInvalid;
    BOOL _cachedMiniControlStripPresentationItemsAreInvalid;
    BOOL _cachedExpandedControlStripPresentationItemsAreInvalid;
    struct CGPoint _cursorPoint;
    NSTouchBarCustomizationPreviewInteractionCoordinator *_interactionCoordinator;
    id _cursorDraggedTree;
    id _preCursorDraggedTree;
}

- (void).cxx_destruct;
@property BOOL forcesReducedMetricsCompression; // @synthesize forcesReducedMetricsCompression=_forcesReducedMetricsCompression;
@property struct CGRect systemTrayRect; // @synthesize systemTrayRect=_systemTrayRect;
@property struct CGRect expandedControlStripRect; // @synthesize expandedControlStripRect=_expandedControlStripRect;
@property struct CGPoint cursorPoint; // @synthesize cursorPoint=_cursorPoint;
@property struct CGRect miniControlStripRect; // @synthesize miniControlStripRect=_miniControlStripRect;
@property struct CGRect applicationRect; // @synthesize applicationRect=_applicationRect;
@property struct CGRect escKeyRect; // @synthesize escKeyRect=_escKeyRect;
@property(retain) NSFunctionRow *functionRow; // @synthesize functionRow=_functionRow;
@property __weak id <NSTouchBarCustomizationPreviewViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)shouldRemoveItemAtIndex:(long long)arg1 inSection:(long long)arg2 whenInRect:(struct CGRect)arg3;
- (BOOL)isItemInRectInTrash:(struct CGRect)arg1;
- (id)indexPathForInsertingItemWithFrame:(struct CGRect)arg1 withApproximateIndex:(id)arg2;
- (BOOL)isItemAtIndexPathEditable:(id)arg1;
- (BOOL)requiresCompressedMiniControlStripForLayout:(id)arg1;
- (long long)controlStripGrabberStateInCollectionView:(id)arg1 layout:(id)arg2;
- (BOOL)shouldShowDoneInCollectionView:(id)arg1 layout:(id)arg2;
- (long long)deleteIconDisplayModeInCollectionView:(id)arg1 layout:(id)arg2;
- (struct CGRect)closeButtonFrameForCollectionView:(id)arg1 layout:(id)arg2;
- (struct CGRect)escapeKeyFrameForCollectionView:(id)arg1 layout:(id)arg2;
- (double)visualCenterXOffsetForSectionLayout:(id)arg1;
- (long long)sectionLayout:(id)arg1 itemStateForItemAtIndex:(long long)arg2 withFrame:(struct CGRect)arg3;
- (id)sectionLayout:(id)arg1 descriptionForItemAtIndex:(long long)arg2;
- (long long)_priorityIndexForItem:(id)arg1;
- (id)collectionView:(id)arg1 layout:(id)arg2 sectionLayoutForSection:(long long)arg3;
- (struct NSEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 paddingForSection:(long long)arg3;
- (struct CGRect)collectionView:(id)arg1 layout:(id)arg2 containmentFrameForSection:(long long)arg3;
- (struct NSEdgeInsets)paddingForSectionLayout:(id)arg1;
- (struct CGRect)containmentRectForSectionLayout:(id)arg1;
- (struct NSEdgeInsets)paddingForSection:(long long)arg1;
- (struct CGRect)containmentRectForSection:(long long)arg1;
- (BOOL)sectionLayoutIsVisible:(id)arg1;
- (BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldDisplayBackgroundForSection:(long long)arg3 withRect:(struct CGRect *)arg4;
- (BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldDisplayShadeRectForSection:(long long)arg3;
- (BOOL)contentIsAnimatedInCollectionView:(id)arg1 layout:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 itemForRepresentedObjectAtIndexPath:(id)arg2;
- (long long)numberOfItemsForSectionLayout:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)_notifyDelegateOfBarUpdate:(id)arg1 inTree:(id)arg2;
- (void)removeItem:(id)arg1 inSection:(long long)arg2 reload:(BOOL)arg3;
- (void)removeItemAtIndex:(long long)arg1 inSection:(long long)arg2 reload:(BOOL)arg3;
- (BOOL)canRemoveItem:(id)arg1 inSection:(long long)arg2;
- (BOOL)canRemoveItemAtIndex:(long long)arg1 inSection:(long long)arg2;
- (void)moveItemAtIndex:(long long)arg1 toIndex:(long long)arg2 inSection:(long long)arg3 reload:(BOOL)arg4;
- (BOOL)canMoveItemAtIndex:(long long)arg1 toIndex:(long long)arg2 inSection:(long long)arg3;
- (BOOL)canReorderItemAtIndex:(long long)arg1 inSection:(long long)arg2;
- (void)prepareToInsertItem:(id)arg1 inSection:(long long)arg2 reload:(BOOL)arg3;
- (void)insertItem:(id)arg1 atIndex:(long long)arg2 inSection:(long long)arg3 reload:(BOOL)arg4;
- (BOOL)canInsertItem:(id)arg1 atIndex:(long long)arg2 inSection:(long long)arg3;
- (id)_presentedExpandedControlStripItems;
- (id)_presentedMiniControlStripItems;
- (id)_presentedApplicationItems;
- (id)_presentedItemsInSection:(long long)arg1;
- (void)updateModel:(CDUnknownBlockType)arg1 animated:(BOOL)arg2 animationDuration:(double)arg3;
- (void)updateModel:(CDUnknownBlockType)arg1 animated:(BOOL)arg2;
- (void)_setPendingItem:(id)arg1 inSection:(long long)arg2 reload:(BOOL)arg3;
- (id)_pendingItemInSection:(long long)arg1;
- (void)_setPendingExpandedControlStripItem:(id)arg1 reload:(BOOL)arg2;
@property(copy) NSTouchBarItemTree *expandedControlStripItemTree; // @synthesize expandedControlStripItemTree=_expandedControlStripItemTree;
- (void)_setExpandedControlStripItemTree:(id)arg1 reload:(BOOL)arg2;
- (void)_invalidateExpandedControlStripPresentedItemsReload:(BOOL)arg1;
- (void)_setPendingMiniControlStripItem:(id)arg1 reload:(BOOL)arg2;
@property(copy) NSTouchBarItemTree *miniControlStripItemTree; // @synthesize miniControlStripItemTree=_miniControlStripItemTree;
- (void)_setMiniControlStripItemTree:(id)arg1 reload:(BOOL)arg2;
- (void)_invalidateMiniControlStripPresentedItemsReload:(BOOL)arg1;
- (void)_setPendingApplicationItem:(id)arg1 reload:(BOOL)arg2;
@property(copy) NSTouchBarItemTree *applicationItemTree;
- (void)_setApplicationItemTree:(id)arg1 reload:(BOOL)arg2;
- (void)_invalidateApplicationPresentedItemsReload:(BOOL)arg1;
- (void)reloadItemsInSection:(long long)arg1;
@property long long currentSection; // @synthesize currentSection=_currentSection;
- (void)_setItemTree:(id)arg1 inSection:(long long)arg2 reload:(BOOL)arg3;
- (void)setItemTree:(id)arg1 inSection:(long long)arg2;
- (id)itemTreeInSection:(long long)arg1;
- (void)selectSection:(id)arg1;
- (BOOL)applicationSectionIsCustomizable;
- (void)toggleGrabber:(id)arg1;
- (void)done:(id)arg1;
- (void)viewDidLayout;
- (void)updateForAnimationOut;
- (void)prepareToAnimateOut;
- (void)updateForAnimationIn;
- (void)prepareToAnimateIn;
- (void)loadView;
- (void)dealloc;
- (BOOL)_viewControllerSupports10_10Features;
- (void)cursorCancelled;
- (struct CGPoint)cursorMouseUpAtPoint:(struct CGPoint)arg1;
- (void)cursorMouseDownAtPoint:(struct CGPoint)arg1;
- (struct CGPoint)cursorMovedToPoint:(struct CGPoint)arg1 withDelta:(struct CGSize)arg2 mouseIsDown:(BOOL)arg3;
- (void)cursorExitAtPoint:(struct CGPoint)arg1 withItem:(id *)arg2;
- (struct CGPoint)cursorEnterAtPoint:(struct CGPoint)arg1 mouseIsDown:(BOOL)arg2 withPreset:(id)arg3;
- (struct CGPoint)cursorEnterAtPoint:(struct CGPoint)arg1 mouseIsDown:(BOOL)arg2 withItem:(id)arg3;
- (BOOL)cursorCanEnterCustomizationWithItem:(id)arg1 orPreset:(id)arg2;
- (void)coordinator:(id)arg1 didCancelDrag:(id)arg2 isRemoval:(BOOL)arg3;
- (void)coordinator:(id)arg1 didFinishDrag:(id)arg2 isRemoval:(BOOL)arg3;
- (void)coordinator:(id)arg1 willFinishDrag:(id)arg2;
- (void)coordinator:(id)arg1 didUpdateDrag:(id)arg2;
- (void)coordinator:(id)arg1 didBeginDrag:(id)arg2 isInsertion:(BOOL)arg3;
- (void)accessibilityResetToPreset:(id)arg1;
- (void)accessibilityAddItem:(id)arg1;
- (void)accessibilityRemoveItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

