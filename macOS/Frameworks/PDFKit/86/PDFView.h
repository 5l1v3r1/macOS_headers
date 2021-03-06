//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "NSAnimationDelegate.h"
#import "NSMenuDelegate.h"

@class NSArray, NSColor, NSString, PDFDestination, PDFDocument, PDFPage, PDFSelection, PDFViewPrivate;

@interface PDFView : NSView <NSAnimationDelegate, NSMenuDelegate>
{
    PDFViewPrivate *_private;
}

+ (id)PDFKitEditActionNames;
+ (unsigned long long)editTypeForActionName:(id)arg1;
+ (id)actionNameForEditType:(unsigned long long)arg1;
+ (void)EnableAnnotationKit;
- (void).cxx_destruct;
- (struct CGRect)extendedRootViewBounds;
- (_Bool)flipsTileContents;
- (struct CGRect)convertRootViewRect:(struct CGRect)arg1 toPageLayer:(id)arg2;
- (struct CGRect)convertRectToRootView:(struct CGRect)arg1 fromPageLayer:(id)arg2;
- (struct CGRect)rootViewBounds;
- (void)setShowsScrollIndicators:(BOOL)arg1;
- (BOOL)showsScrollIndicators;
- (void)callPageVisibilityDelegateMethodForOverlayAdaptorOnly:(int)arg1 forPageView:(id)arg2 atPageIndex:(unsigned long long)arg3;
- (void)performOverlayAdaptorPageVisibilityTrueUpAfterSettingDocument;
- (void)callPageVisibilityDelegateMethod:(int)arg1 forPageView:(id)arg2 atPageIndex:(unsigned long long)arg3;
- (void)setNewPageVisibilityDelegate:(id)arg1 withOldDelegate:(id)arg2;
- (void)setAkAnnotationEditingEnabled:(BOOL)arg1;
- (BOOL)akAnnotationEditingEnabled;
- (id)akToolbarView;
- (id)_getDocumentAKController;
- (void)startEditingTextWidgetAnnotation:(id)arg1;
@property(nonatomic, setter=enablePageShadows:) BOOL pageShadowsEnabled;
- (void)stopSpeaking:(id)arg1;
- (void)startSpeaking:(id)arg1;
- (double)defaultGutterWidth;
- (double)gutterWidth;
- (void)setGutterWidth:(double)arg1;
- (BOOL)isOverLinkAnnotation:(struct CGPoint)arg1;
- (BOOL)PDFKitHandleBackTabInTextWidget:(id)arg1;
- (BOOL)PDFKitHandleTabInTextWidget:(id)arg1;
- (BOOL)handleBackTabInTextWidget:(id)arg1;
- (BOOL)handleTabInTextWidget:(id)arg1;
- (void)interactWithAnnotation:(id)arg1;
- (void)addMarkupWithStyle:(unsigned long long)arg1 fromSelection:(id)arg2;
- (unsigned long long)activeMarkupStyle;
- (void)setActiveMarkupStyle:(unsigned long long)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setNeedsDisplay:(BOOL)arg1;
- (void)internalForceTileRefresh;
- (void)forceTileRefresh;
- (void)setEnableTileUpdates:(_Bool)arg1;
- (_Bool)hasEnabledMouseEvents;
- (void)enableMouseEvents:(_Bool)arg1;
- (void)setPDFPageView:(id)arg1 tileLayoutScale:(double)arg2;
- (void)revertPDFPageView:(id)arg1 withOriginalFrame:(struct CGRect)arg2;
- (double)_autoScaleFactorForFloatingPage:(id)arg1 withTargetView:(id)arg2;
- (struct CGRect)movePDFPageView:(id)arg1 toView:(id)arg2 withAutoScale:(_Bool)arg3;
- (struct CGRect)movePDFPageView:(id)arg1 toView:(id)arg2;
- (void)fluidSwipeWithEvent:(id)arg1;
- (_Bool)hasEnabledSwipeGestures;
- (void)enableSwipeGestures:(_Bool)arg1;
- (void)previewRotatePageComplete:(id)arg1 willCommitRotation:(_Bool)arg2 byDegrees:(double)arg3;
- (void)previewRotatePage:(id)arg1 byDegrees:(double)arg2;
- (void)previewRotatePageBegin:(id)arg1;
- (void)removeControlForAnnotation:(id)arg1;
- (void)setActiveAnnotation:(id)arg1;
- (id)activeAnnotation;
- (id)pageViewForPageAtIndex:(unsigned long long)arg1;
- (id)documentScrollView;
- (void)_updateBookmarksForPages;
- (void)setDisplaysBookmarksForPages:(BOOL)arg1;
- (BOOL)displaysBookmarksForPages;
- (id)pageColor;
- (void)setPageColor:(id)arg1;
- (double)lineWidthThreshold;
- (void)setLineWidthThreshold:(double)arg1;
@property(nonatomic) BOOL displaysRTL;
- (void)setScaleFactor:(double)arg1 anchorPoint:(struct CGPoint)arg2;
- (double)autoScaleFactor;
- (BOOL)isRectVisible:(struct CGRect)arg1 onPage:(id)arg2;
- (void)goToPageNoPush:(id)arg1 animated:(BOOL)arg2;
- (void)goToPageNoPush:(id)arg1;
- (void)goToDestinationNoPush:(id)arg1;
- (void)pushDestination:(id)arg1;
- (id)previousPage;
- (id)nextPage;
- (id)akOverlayAdaptor;
- (id)renderingProperties;
- (void)_updateAnnotations;
- (void)hintScrollDirectionHorizontal:(unsigned long long)arg1 andVertical:(unsigned long long)arg2;
- (void)documentWasUnlocked;
- (void)_findVisiblePages;
- (struct CGPoint)_scrollOriginForPageTopLeft:(id)arg1;
- (void)_scrollByPage:(BOOL)arg1;
- (void)_scrollHorizontalBy:(double)arg1;
- (void)_scrollVerticalBy:(double)arg1;
- (void)constrainedScrollToPoint:(struct CGPoint)arg1;
- (_Bool)focusOnColumnAtPoint:(struct CGPoint)arg1;
- (struct CGRect)visibleRectForPageView:(id)arg1;
- (void)positionInternalViews:(id)arg1;
- (void)_resizeDisplayView:(id)arg1;
- (struct CGSize)pageViewSizeForPage:(id)arg1;
- (void)_updateCurrentPageUsingViewCenter;
- (void)windowDidResignKey:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (void)pdfViewDidChangePage:(id)arg1;
- (void)pdfViewDidChangeScale:(id)arg1;
- (void)scrollViewSaysPageMayHaveChanged:(id)arg1;
- (id)determineCurrentPage;
- (void)_syncPageIndexToScrollView;
- (void)syncPageIndexToScrollView;
- (void)_reflectNewPageOn;
- (void)_selfDidResize:(id)arg1;
@property(nonatomic) double minScaleFactor;
@property(nonatomic) double maxScaleFactor;
- (void)_internalSetScaleFactor:(double)arg1;
- (void)_internalSetAutoScaleFactor;
- (unsigned long long)lastPageIndex;
- (double)_unboundAutoScaleFactorForPageWithSize:(struct CGSize)arg1;
- (double)_unboundAutoScaleFactorForPage:(id)arg1;
- (double)autoScaleFactorForPageWithSize:(struct CGSize)arg1;
- (double)autoScaleFactorForPage:(id)arg1;
- (double)_pageViewHeight:(id)arg1;
- (struct CGRect)normalizedPageBounds:(id)arg1;
- (id)PDFLayout;
- (void)_revealSelection:(id)arg1;
- (void)_searchInDictionary:(id)arg1;
- (id)accessibilityFocusedUIElement;
- (void)revealContext:(id)arg1 stopHighlightingItem:(id)arg2;
- (void)revealContext:(id)arg1 startHighlightingItem:(id)arg2;
- (void)revealContext:(id)arg1 drawRectsForItem:(id)arg2;
- (id)revealContext:(id)arg1 rectsForItem:(id)arg2;
- (void)_revealItem:(id)arg1 atPoint:(struct CGPoint)arg2 onPage:(id)arg3;
- (void)presentPDFScannerResult:(id)arg1 onPage:(id)arg2;
- (void)immediateActionRecognizerWillPrepare:(id)arg1;
- (BOOL)_gestureRecognizer:(id)arg1 shouldAttemptToRecognizeWithEvent:(id)arg2;
- (void)gestureInit;
- (void)mouseDown:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)_updatePasswordView;
- (void)_removePasswordView;
- (void)_setupPasswordView;
- (struct CGAffineTransform)_transformFromPageViewToPage:(id)arg1;
- (struct CGAffineTransform)_transformFromPageToPageView:(id)arg1;
- (void)dealloc;
- (void)_commonInit;
- (void)_updateBackingScale:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)removeFromSuperview;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (BOOL)handleScrollWheel:(id)arg1;
- (void)scrollToEndOfDocument:(id)arg1;
- (void)scrollToBeginningOfDocument:(id)arg1;
- (void)scrollLineDown:(id)arg1;
- (void)scrollLineUp:(id)arg1;
- (void)scrollPageDown:(id)arg1;
- (void)scrollPageUp:(id)arg1;
- (void)moveToBeginningOfDocument:(id)arg1;
- (void)moveToEndOfDocument:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)drawAccessibilityNodeType:(int)arg1 enableDrawing:(_Bool)arg2;
- (_Bool)isDrawingAccessibilityNodeType:(int)arg1;
- (void)colorWidgetBackgrounds:(_Bool)arg1;
- (void)resetAccessibilityTree;
- (void)printActivePageAnnotations;
- (void)printActivePageInfo;
- (void)printDocumentAttributes;
- (void)printAccessibilityTree;
- (BOOL)debugAccessibilityShouldDrawLayer:(int)arg1;
- (BOOL)validateDebugAccessibilityMenuItem:(id)arg1;
- (void)debugAccessibilityMenu:(id)arg1;
- (BOOL)validateDebugMenuItem:(id)arg1;
- (void)debugMenu:(id)arg1;
- (void)installDebugMenu;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)_searchInGoogle:(id)arg1;
- (void)_setActualSize:(id)arg1;
- (void)_setDoublePageScrolling:(id)arg1;
- (void)_setDoublePage:(id)arg1;
- (void)_setSinglePageScrolling:(id)arg1;
- (void)_setSinglePage:(id)arg1;
- (void)_setAutoSize:(id)arg1;
- (void)_removeNote:(id)arg1;
- (void)_addNote:(id)arg1;
- (void)_removeMarkup:(id)arg1;
- (void)_addNavigationAndDisplayModeItemsToMenu:(id)arg1;
- (void)_addCopyItemsToMenu:(id)arg1 onPage:(id)arg2 atPagePoint:(struct CGPoint)arg3;
- (void)_addWebSearchItemToMenu:(id)arg1;
- (id)_menuItemsForRVItem:(id)arg1 onPage:(id)arg2 atPagePoint:(struct CGPoint)arg3;
- (_Bool)_addAnnotationItemsToMenu:(id)arg1 forAnnotation:(id)arg2 onPage:(id)arg3 atPagePoint:(struct CGPoint)arg4;
- (id)menuForEvent:(id)arg1;
- (id)viewForPage:(id)arg1;
- (void)PDFViewWillClickOnLink:(id)arg1 withURL:(id)arg2;
- (double)PDFViewWillChangeScaleFactor:(id)arg1 toScale:(double)arg2;
@property(nonatomic) BOOL enableDataDetectors;
- (void)setBackgroundImage:(id)arg1 forPage:(id)arg2;
- (_Bool)backgroundImagesEnabled;
- (void)enableBackgroundImages:(_Bool)arg1;
- (id)visiblePageViews;
@property(readonly, nonatomic) NSArray *visiblePages;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (BOOL)allowsDragging;
- (void)setAllowsDragging:(BOOL)arg1;
@property(nonatomic) BOOL acceptsDraggedFiles;
- (struct CGSize)rowSizeForPage:(id)arg1;
- (void)annotationsChangedOnPage:(id)arg1;
- (void)layoutDocumentView;
@property(readonly, nonatomic) NSView *documentView;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromPage:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromPage:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toPage:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toPage:(id)arg2;
- (id)pageForPoint:(struct CGPoint)arg1 nearest:(BOOL)arg2;
- (void)print:(id)arg1;
- (void)printDocument:(id)arg1;
- (void)printWithInfo:(id)arg1 autoRotate:(BOOL)arg2 pageScaling:(long long)arg3;
- (void)printWithInfo:(id)arg1 autoRotate:(BOOL)arg2;
- (BOOL)writeSelectionToPasteboard:(id)arg1 types:(id)arg2;
- (id)validRequestorForSendType:(id)arg1 returnType:(id)arg2;
- (void)copyLink:(id)arg1;
- (void)copy:(id)arg1;
- (void)drawPagePost:(id)arg1 toContext:(struct CGContext *)arg2;
- (void)drawPage:(id)arg1 toContext:(struct CGContext *)arg2;
- (void)drawPagePost:(id)arg1;
- (void)drawPage:(id)arg1;
- (void)takePasswordFrom:(id)arg1;
@property(copy, nonatomic) NSArray *highlightedSelections;
- (void)scrollSelectionToVisible:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)clearSelection;
- (void)setCurrentSelection:(id)arg1 animate:(BOOL)arg2;
- (void)setCurrentSelection:(id)arg1 updateTextInput:(_Bool)arg2;
@property(retain, nonatomic) PDFSelection *currentSelection;
- (void)performAction:(id)arg1;
- (void)performBeep;
- (void)_updatePDFScannerResultHighlightAtPoint:(struct CGPoint)arg1;
- (void)setCursorForAreaOfInterest:(long long)arg1;
- (void)cursorUpdate:(id)arg1;
- (void)setAnnotationKitCursorOverride:(id)arg1;
- (long long)areaOfInterestForPoint:(struct CGPoint)arg1;
- (long long)areaOfInterestForMouse:(id)arg1;
@property(readonly, nonatomic) double scaleFactorForSizeToFit;
@property(nonatomic) BOOL autoScales;
@property(readonly, nonatomic) BOOL canZoomOut;
- (void)zoomOut:(id)arg1;
@property(readonly, nonatomic) BOOL canZoomIn;
- (void)zoomIn:(id)arg1;
- (void)_doNotQueryScaleFactor;
@property(nonatomic) double scaleFactor;
@property(nonatomic) __weak id <PDFViewDelegate> delegate;
- (void)_releaseScrollView;
- (void)_setupScrollView;
@property(nonatomic) long long interpolationQuality;
@property(retain, nonatomic) NSColor *backgroundColor;
- (void)takeBackgroundColorFrom:(id)arg1;
- (double)greekingThreshold;
- (void)setGreekingThreshold:(double)arg1;
- (BOOL)shouldAntiAlias;
- (void)setShouldAntiAlias:(BOOL)arg1;
@property(nonatomic) BOOL displaysAsBook;
@property(nonatomic) long long displayBox;
- (struct NSEdgeInsets)documentMargins;
- (void)setDocumentMargins:(struct NSEdgeInsets)arg1;
@property(nonatomic) struct NSEdgeInsets pageBreakMargins;
@property(nonatomic) BOOL displaysPageBreaks;
@property(nonatomic) long long displayDirection;
@property(nonatomic) long long displayMode;
- (void)goToRect:(struct CGRect)arg1 onPage:(id)arg2;
- (void)goToSelection:(id)arg1;
- (void)goToDestination:(id)arg1;
@property(readonly, nonatomic) PDFDestination *currentDestination;
- (void)_goToPage:(id)arg1 animated:(BOOL)arg2 withBackgroundUpdate:(BOOL)arg3;
- (void)goToPageWithoutBackgroundUpdate:(id)arg1;
- (void)goToPage:(id)arg1 animated:(BOOL)arg2;
- (void)goToPage:(id)arg1;
@property(readonly, nonatomic) PDFPage *currentPage;
- (void)goForward:(id)arg1;
@property(readonly, nonatomic) BOOL canGoForward;
- (void)goBack:(id)arg1;
@property(readonly, nonatomic) BOOL canGoBack;
- (void)goToPreviousPage:(id)arg1;
@property(readonly, nonatomic) BOOL canGoToPreviousPage;
- (void)goToNextPage:(id)arg1;
@property(readonly, nonatomic) BOOL canGoToNextPage;
- (void)goToLastPage:(id)arg1;
@property(readonly, nonatomic) BOOL canGoToLastPage;
- (void)goToFirstPage:(id)arg1;
@property(readonly, nonatomic) BOOL canGoToFirstPage;
- (void)_releaseDocument;
- (void)setDocument:(id)arg1 waitDuration:(double)arg2;
- (void)setDocument:(id)arg1 withInitialPageIndex:(unsigned long long)arg2;
@property(retain, nonatomic) PDFDocument *document;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

