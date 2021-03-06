//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "KNMacBaseSlideNavigatorViewController.h"

#import "TSKChangeSourceObserver-Protocol.h"

@class KNInteractiveCanvasController, KNMacSlideNavigatorView, KNNavigatorController, KNNavigatorLayer, KNSlideNode, KNSlideTreeEditor, NSString;
@protocol KNMacSlideTreeResponderDelegate;

@interface KNMacSlideNavigatorViewController : KNMacBaseSlideNavigatorViewController <TSKChangeSourceObserver>
{
    id <KNMacSlideTreeResponderDelegate> mDelegate;
    BOOL mSuppressSelectionChanges;
    BOOL mIsLoaded;
    unsigned long long mHighestSlideDepth;
    BOOL mShowsAnimationIndicators;
    BOOL mShowsPresenterNotesIndicators;
    KNSlideNode *mSelectionTailNode;
    BOOL mKeepTailNodeDuringSelectionChange;
    KNSlideTreeEditor *mSlideTreeEditor;
    KNInteractiveCanvasController *mInteractiveCanvasController;
}

+ (void)p_notifySlideNavigatorsToUpdate;
@property(nonatomic) BOOL showsPresenterNotesIndicators; // @synthesize showsPresenterNotesIndicators=mShowsPresenterNotesIndicators;
@property(nonatomic) BOOL showsAnimationIndicators; // @synthesize showsAnimationIndicators=mShowsAnimationIndicators;
@property(readonly, nonatomic) KNInteractiveCanvasController *interactiveCanvasController; // @synthesize interactiveCanvasController=mInteractiveCanvasController;
@property(readonly, nonatomic) KNSlideTreeEditor *slideTreeEditor; // @synthesize slideTreeEditor=mSlideTreeEditor;
@property(readonly, nonatomic) id <KNMacSlideTreeResponderDelegate> delegate; // @synthesize delegate=mDelegate;
- (void)p_updateNavigatorFromSlideCollectionSelection;
- (id)documentRoot;
@property(readonly, nonatomic) KNNavigatorController *p_navigatorController;
@property(readonly, nonatomic) KNMacSlideNavigatorView *p_navigatorView;
@property(readonly, nonatomic) KNNavigatorLayer *p_navigatorLayer;
- (void)p_cancelNeedsSelectionViewStateUpdate;
- (void)p_setNeedsSelectionViewStateUpdate;
- (void)p_updateSelectionViewState;
- (void)p_editorControllerSelectionDidChange:(id)arg1;
- (void)p_clearSelection;
- (void)updateSelectionWithMarqueeRect:(struct CGRect)arg1 startPoint:(struct CGPoint)arg2;
- (id)newDragControllerWithEvent:(id)arg1;
- (BOOL)validateReapplyMasterUserInterfaceItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)validateSkipSlidesUserInterfaceItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)validateSkipSelectedSlideNodesUserInterfaceItem:(id)arg1;
- (BOOL)validateTakeMasterSlideMenuItem:(id)arg1;
- (void)insertNewSlideNodeAfterSlideNodesInContext:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)insertNewSlideNodeBasedOnMaster:(id)arg1;
- (void)insertNewSlideNode:(id)arg1;
- (void)editSlideNodeMasterAtIndex:(unsigned long long)arg1;
- (void)reapplyMasterSlidesInContext:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)reapplyMasterSlidesInContext:(id)arg1;
- (void)skipSlideNodesInContext:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)skipSelectedSlideNodes:(id)arg1;
- (BOOL)modifySelectionDown;
- (BOOL)modifySelectionUp;
@property(retain, nonatomic, setter=p_setSelectionTailNode:) KNSlideNode *p_selectionTailNode;
- (BOOL)handleDropCopyOperationForInfo:(id)arg1 atSlideIndex:(unsigned long long)arg2 withIndentLevel:(unsigned long long)arg3;
- (BOOL)promoteSelectedSlideNodes;
- (BOOL)demoteSelectedSlideNodes;
- (BOOL)collapseSelectedDisclosureIncludingDescendants:(BOOL)arg1;
- (BOOL)expandSelectedDisclosureIncludingDescendants:(BOOL)arg1;
- (BOOL)selectPreviousVisibleSlide;
- (BOOL)selectNextVisibleSlide;
- (BOOL)toggleSelectedDisclosureIncludingDescendents:(BOOL)arg1;
- (BOOL)toggleDisclosureAtIndex:(unsigned long long)arg1 toggleDescendents:(BOOL)arg2;
- (void)processChanges:(id)arg1 forChangeSource:(id)arg2;
- (id)selectedNonMasterSlideNodes;
- (unsigned long long)numSlidesSelected;
- (Class)navigatorControllerClass;
- (Class)navigatorViewClass;
- (void)contentDidDisappear;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)loadView;
- (id)initWithSlideTreeEditor:(id)arg1 interactiveCanvasController:(id)arg2 canvasViewController:(id)arg3 delegate:(id)arg4;
- (void)dealloc;
- (void)teardown;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

