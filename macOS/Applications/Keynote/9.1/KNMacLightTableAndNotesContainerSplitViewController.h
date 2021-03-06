//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KNMacContentContainerSplitViewController.h"

#import "KNMacContentContainerSplitViewDelegate.h"
#import "KNMacPresenterNotesContainer.h"

@class KNInteractiveCanvasController, KNMacLightTableViewController, KNMacPresenterNotesPaneViewController, KNSlideNode, KNSlideTreeEditor, NSColor, NSObject<KNSlideCollectionEditor>, NSObject<TSDCanvasEditor>, NSString, NSTouchBar, NSView, TMAZoomStepper, TSDEditorController;

@interface KNMacLightTableAndNotesContainerSplitViewController : KNMacContentContainerSplitViewController <KNMacContentContainerSplitViewDelegate, KNMacPresenterNotesContainer>
{
    KNMacLightTableViewController *_lightTableViewController;
    KNSlideTreeEditor *_slideTreeEditor;
    id <TSDMacModalSheetPresentationDelegate><TSDUserDialogPresenter> _userDialogDelegate;
    KNMacPresenterNotesPaneViewController *_presenterNotesPaneViewController;
    BOOL _isShowingPresenterNotes;
    BOOL _isTornDown;
    double _toolbarHeight;
}

+ (BOOL)automaticallyNotifiesObserversOfShowingPresenterNotes;
@property(nonatomic) double toolbarHeight; // @synthesize toolbarHeight=_toolbarHeight;
@property(readonly, nonatomic) KNMacLightTableViewController *lightTableViewController; // @synthesize lightTableViewController=_lightTableViewController;
- (void).cxx_destruct;
- (id)splitViewNextResponderForHiddenAccessoryView:(id)arg1;
- (struct CGRect)splitView:(id)arg1 effectiveRectOfDividerForProposedRect:(struct CGRect)arg2;
- (void)splitView:(id)arg1 didHideAccessoryViewByDraggingDivider:(BOOL)arg2;
- (void)splitViewWillShowAccessoryView:(id)arg1;
- (void)p_teardownPresenterNotesPane;
- (void)p_setupPresenterNotesPaneIfNeeded;
- (void)p_updateBottomInset;
- (void)p_updatePresenterNotesCanvasTrackingAreaInsets;
- (void)p_updateIsShowingPresenterNotes;
- (BOOL)p_canAnimatePresenterNotes;
- (void)setShowingPresenterNotes:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic, getter=isShowingPresenterNotes) BOOL showingPresenterNotes;
- (void)clearCanvasSelections;
- (void)setSelectionPath:(id)arg1 withFlags:(unsigned long long)arg2;
- (BOOL)canSetSelectionPath:(id)arg1 withFlags:(unsigned long long)arg2;
- (void)teardown;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)dealloc;
- (id)initWithLightTableViewController:(id)arg1 slideTreeEditor:(id)arg2 userDialogDelegate:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) BOOL adjustsToUndersizedWindow;
@property(nonatomic) BOOL autoCentersContent;
@property(readonly, nonatomic) BOOL canChangeAutoCentersContent;
@property(readonly, nonatomic) BOOL canChangeFitsContentInWindow;
@property(readonly, nonatomic) BOOL canPreviewSlideAnimations;
@property(readonly, nonatomic) BOOL canZoomToFitAll;
@property(readonly, nonatomic) NSObject<TSDCanvasEditor> *canvasEditorForInsertingDrawables;
@property(readonly, nonatomic) NSColor *containerBackgroundColor;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) TSDEditorController *editorControllerForInspector;
@property(nonatomic) BOOL fitsContentInWindow;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSView *initialFirstResponder;
@property(readonly, nonatomic) double kn_maximumSize;
@property(readonly, nonatomic) double kn_minimumSize;
@property(readonly, nonatomic) NSTouchBar *mainContentTouchBar;
@property(readonly, nonatomic) KNSlideNode *nextSlideNode;
@property(readonly, nonatomic) id <KNMacPresenterNotesContainer> presenterNotesContainer;
@property(readonly, nonatomic) KNSlideNode *previousSlideNode;
@property(readonly, nonatomic) struct NSEdgeInsets scrollViewContentInsets;
@property(nonatomic) BOOL showsRulers;
@property(readonly, nonatomic) struct CGSize sizeFittingContent;
@property(readonly, nonatomic) NSObject<KNSlideCollectionEditor> *slideCollectionEditor;
@property(readonly) Class superclass;
@property(readonly, nonatomic) KNInteractiveCanvasController *targetInteractiveCanvasControllerForActions;
@property(nonatomic) double topContentInset;
@property(nonatomic) double undersizedWindowFactor;
@property(readonly, nonatomic) BOOL usesZoomMenu;
@property(readonly, nonatomic) TMAZoomStepper *zoomStepper;

@end

