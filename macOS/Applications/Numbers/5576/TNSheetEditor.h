//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSDEditor-Protocol.h"

@class NSSet, NSString, TNDocumentRoot, TNSheet, TNSheetSelection, TSDEditorController, TSDInteractiveCanvasController;
@protocol TNSheetEditorDelegate, TSKSearchReference;

@interface TNSheetEditor : NSObject <TSDEditor>
{
    BOOL _inDynamicContentScaleChange;
    TSDEditorController *_editorController;
    NSObject<TNSheetEditorDelegate> *_delegate;
    TNDocumentRoot *_documentRoot;
    TSDInteractiveCanvasController *_interactiveCanvasController;
}

+ (id)sheetDisplayPredicate;
@property(nonatomic, getter=isInDynamicContentScaleChange) BOOL inDynamicContentScaleChange; // @synthesize inDynamicContentScaleChange=_inDynamicContentScaleChange;
@property(nonatomic) __weak TSDInteractiveCanvasController *interactiveCanvasController; // @synthesize interactiveCanvasController=_interactiveCanvasController;
@property(nonatomic) __weak TNDocumentRoot *documentRoot; // @synthesize documentRoot=_documentRoot;
@property(nonatomic) __weak NSObject<TNSheetEditorDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TSDEditorController *editorController; // @synthesize editorController=_editorController;
- (void).cxx_destruct;
- (void)p_enqueCommand:(id)arg1;
- (id)p_selectionBehavior;
- (void)selectNextContainerTab:(id)arg1;
- (void)selectPreviousContainerTab:(id)arg1;
- (void)selectLastContainerTab:(id)arg1;
- (void)selectFirstContainerTab:(id)arg1;
- (BOOL)canSwitchSheetsViaKeyboard;
- (id)permittedSharedReadOnlyActions;
- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
- (void)setPrinterInsetsForHeader:(double)arg1 forFooter:(double)arg2;
- (void)setPrintMargins:(struct NSEdgeInsets)arg1;
- (void)setPageOrder:(int)arg1;
@property(nonatomic) long long startPageNumber;
@property(nonatomic) BOOL usingStartPageNumber;
@property(nonatomic) BOOL repeatHeaders;
- (void)setShowPageNumbers:(BOOL)arg1;
- (void)toggleAutoFit;
- (void)setPortraitOrientation:(BOOL)arg1;
- (void)setContentScale:(double)arg1 coalescable:(_Bool)arg2;
- (void)selectionDidChangeFromSelection:(id)arg1 toSelection:(id)arg2 withFlags:(unsigned long long)arg3;
- (id)selectionWillChangeFromSelection:(id)arg1 toSelection:(id)arg2 withFlags:(unsigned long long)arg3 inSelectionPath:(id)arg4 withNewEditors:(id)arg5;
- (BOOL)shouldRemainOnEditorStackForSelection:(id)arg1 inSelectionPath:(id)arg2 withNewEditors:(id)arg3;
- (id)nextEditorForSelection:(id)arg1 withNewEditorStack:(id)arg2 selectionPath:(id)arg3;
- (id)p_sheetsToDisplay;
- (void)p_insertCopiedSheet:(id)arg1 atIndex:(unsigned long long)arg2 withUIState:(id)arg3;
- (void)setSheetLayoutDirection:(int)arg1 sheet:(id)arg2;
- (void)duplicateSheet:(id)arg1;
- (void)pasteSheetFromPasteboardAfterSheet:(id)arg1;
- (void)copySheet:(id)arg1;
- (void)cutSheet:(id)arg1;
- (void)deleteSheet:(id)arg1;
- (id)insertDefaultSheetWithName:(id)arg1;
- (BOOL)canPasteSheet;
- (id)selectionPathForSheet:(id)arg1;
@property(retain, nonatomic) TNSheet *activeSheet;
@property(readonly, nonatomic) TNSheetSelection *selection;
@property(readonly, nonatomic, getter=isPaginated) BOOL paginated;
- (id)init;
- (id)initWithEditorController:(id)arg1;
- (BOOL)numbersPrintInspectorPanesShouldContinueEditorStackTraversal;
- (id)numbersPrintInspectorPaneIdentifiers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <TSKSearchReference> editingSearchReference;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingAttribution;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingCalloutAttributes;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingConnectionLineAttributes;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingEndpoints;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingFill;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingOpacity;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingReflection;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingResize;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingShadow;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingShrinkTextToFit;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingSmartShapeAttributes;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingStroke;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingTextInset;
@property(readonly) Class superclass;

@end

