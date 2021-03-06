//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDMediaRep.h"

#import "CALayerDelegate-Protocol.h"
#import "TSDImageDrawingDataSource-Protocol.h"
#import "TSDInstantAlphaEditing-Protocol.h"
#import "TSDMagicMoveMatching-Protocol.h"
#import "TSDMaskEditing-Protocol.h"
#import "TSDShapeControlRep-Protocol.h"

@class CALayer, CAShapeLayer, NSArray, NSMutableArray, NSMutableDictionary, NSObject, NSString, TSDImageDrawingHelper, TSDImageInfo, TSDImageLayerContentsRecipe, TSDImageLayout, TSDInstantAlphaTracker, TSDLayoutGeometry, TSDMacInstantAlphaMagnifierLoupeWindow, TSDMaskEditModeDragEventHandler, TSDMaskInfo, TSDMaskLayout, TSPData;
@protocol OS_dispatch_semaphore;

@interface TSDImageRep : TSDMediaRep <CALayerDelegate, TSDImageDrawingDataSource, TSDMagicMoveMatching, TSDMaskEditing, TSDInstantAlphaEditing, TSDShapeControlRep>
{
    TSDLayoutGeometry *mLastImageGeometryInRoot;
    TSDLayoutGeometry *mLastMaskGeometryInRoot;
    struct CGAffineTransform mLastLayoutToImageTransform;
    struct CGRect mFrameInUnscaledCanvasRelativeToSuper;
    BOOL mFrameInUnscaledCanvasIsValid;
    TSDImageDrawingHelper *mDrawingHelper;
    TSDImageLayerContentsRecipe *mDirectlyManagedLayerContentsRecipe;
    CALayer *mContentsLayer;
    CAShapeLayer *mMaskPathLayer;
    CAShapeLayer *mIAMaskLayer;
    CAShapeLayer *mMaskSublayer;
    struct CGAffineTransform mLastPictureFrameLayerTransform;
    TSDMacInstantAlphaMagnifierLoupeWindow *mIACursorWindow;
    CAShapeLayer *mStrokeLayer;
    CALayer *mFrameMaskLayer;
    struct CGRect mLastPictureFrameLayerRect;
    BOOL mDirectlyManagesLayerContent;
    BOOL mSizedImageNeedsDisplay;
    BOOL mShowImageHighlight;
    BOOL mIsEquation;
    BOOL mCachedIsEquation;
    BOOL mInInstantAlphaMode;
    TSDInstantAlphaTracker *mInstantAlphaTracker;
    struct CGImage *mInstantAlphaImage;
    struct CGAffineTransform mBaseMaskLayoutTransform;
    NSMutableDictionary *mHitTestCache;
    NSMutableArray *mUpdateFromLayoutBlocks;
    NSObject<OS_dispatch_semaphore> *mUpdateFromLayoutBlocksLock;
    TSDMaskEditModeDragEventHandler *mMaskEditEventHandler;
}

+ (struct CGPath *)p_newPathToBakeIntoSizedImageForSize:(struct CGSize)arg1 withImageLayout:(id)arg2 orientation:(int)arg3;
+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 mixingTypeContext:(id)arg3;
@property(retain, nonatomic) TSDInstantAlphaTracker *instantAlphaTracker; // @synthesize instantAlphaTracker=mInstantAlphaTracker;
- (void).cxx_destruct;
- (void)layerHostContainerFocusDidChange;
- (void)mouseExitedAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)shouldDragMaskWithPoint:(struct CGPoint)arg1;
- (id)cursorAtPoint:(struct CGPoint)arg1 forKnob:(id)arg2 withEvent:(id)arg3;
- (id)newMouseEventHandlerAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)p_hitCacheSetCachedValue:(BOOL)arg1 forPoint:(struct CGPoint)arg2;
- (BOOL)p_hitCacheGetCachedValue:(char *)arg1 forPoint:(struct CGPoint)arg2;
- (void)p_invalidateHitTestCache;
- (BOOL)shouldShowMediaReplaceUI;
- (double)additionalRotationForKnobOrientation;
- (void)addKnobsToArray:(id)arg1;
- (id)newSelectionKnobForType:(int)arg1 tag:(unsigned long long)arg2;
- (void)updatePositionsOfKnobs:(id)arg1;
- (BOOL)shouldCreateSelectionKnobs;
- (BOOL)shouldShowSmartMaskKnobs;
- (id)newTrackerForKnob:(id)arg1;
- (BOOL)p_shouldRenderWithMaskToBounds;
- (BOOL)p_shouldBakeMaskIntoSizedImage;
- (void)p_injectSizedImageIntoLayerContentsIfReady;
- (void)p_generateSizedImageIfNecessary;
- (BOOL)p_okayToGenerateSizedImage;
- (void)p_updateMaskSublayersForMaskEditMode;
- (void)p_createMaskLayerForLayer:(id)arg1;
- (void)p_disposeMaskLayer;
- (void)p_disposeStrokeLayer;
- (void)p_updateHUD;
- (void)p_cleanUpMaskModeUI;
- (void)p_setUpMaskModeUI;
- (void)p_endEditingMask;
- (void)p_setDefaultMaskWithActionString:(id)arg1;
- (void)viewScaleDidChange;
- (id)additionalLayersOverLayer;
- (void)p_updateStrokeLayerForStroke:(id)arg1 repLayer:(id)arg2;
- (void)p_updateMaskLayer:(id)arg1 forRepLayer:(id)arg2 shouldIncludeMask:(BOOL)arg3 shouldIncludeInstantAlpha:(BOOL)arg4 siblingLayer:(BOOL)arg5;
- (BOOL)p_shouldMaskWithFrameLayers;
- (void)didUpdateLayer:(id)arg1;
- (void)willUpdateLayer:(id)arg1;
- (void)updateLayerGeometryFromLayout:(id)arg1;
- (void)p_getAliasedValuesForMaskToBoundsDirectLayerFrame:(out struct CGRect *)arg1 transform:(out struct CGAffineTransform *)arg2;
- (BOOL)p_directlyManagesContentForLayer:(id)arg1;
- (void)p_updateDirectlyManagesLayerContentForLayer:(id)arg1;
- (BOOL)directlyManagesLayerContent;
- (void)p_listenForDataChangesIfAppropriate;
- (void)dynamicImageAdjustmentsChangeDidEnd;
- (void)dynamicImageAdjustmentsUpdateToValue:(id)arg1;
- (void)dynamicImageAdjustmentsChangeDidBegin;
@property(readonly, nonatomic) struct CGRect instantAlphaHUDPositioningRect;
- (void)endInstantAlphaMode;
- (struct CGImage *)imageForInstantAlpha;
- (void)p_createImageForInstantAlpha;
- (void)beginInstantAlphaMode;
@property(readonly, nonatomic, getter=isInInstantAlphaMode) BOOL inInstantAlphaMode;
- (void)beginEditingMaskInMaskEditMode:(long long)arg1;
- (BOOL)canEditMaskInMaskEditMode:(long long)arg1;
- (void)dynamicMoveSmartShapeKnobDidEndWithTracker:(id)arg1;
- (void)dynamicallyMovedSmartShapeKnobTo:(struct CGPoint)arg1 withTracker:(id)arg2;
- (void)dynamicMoveSmartShapeKnobDidBegin;
- (struct CGPoint)centerForGuideLayerPlacement;
- (id)actionStringForRotate;
- (void)dynamicallyRotatingWithTracker:(id)arg1;
- (struct CGPoint)unscaledGuidePosition;
- (BOOL)shouldRasterizeLayerDuringRotation;
- (double)angleForRotation;
- (struct CGPoint)centerForRotation;
- (id)actionStringForResize;
- (id)resizedGeometryForTransform:(struct CGAffineTransform)arg1;
- (BOOL)wantsGuidesWhileResizing;
- (id)infoForTransforming;
- (id)dynamicResizeDidBegin;
- (BOOL)allowDragAcrossPageBoundaries;
- (BOOL)demandsExclusiveSelection;
- (void)dynamicOperationDidEnd;
- (void)dynamicDragDidEnd;
- (BOOL)dragDidChangeGeometry;
- (BOOL)maskGeometryDidChange;
- (id)newCommandToApplyGeometry:(id)arg1 toInfo:(id)arg2;
- (BOOL)p_currentEditOperationDidChangeTheImageGeometry;
- (struct CGPoint)i_dragOffset;
- (struct CGRect)snapRectForDynamicDragWithOffset:(struct CGPoint)arg1;
- (id)actionStringForDrag;
- (BOOL)resetGuidesAfterDragAfterReset;
- (BOOL)exclusivelyProvidesGuidesWhileAligning;
- (BOOL)providesGuidesWhileAligning;
- (void)dynamicDragDidBegin;
- (BOOL)shouldShowDragHUD;
- (struct CGAffineTransform)transformForCollaboratorCursorLayer;
- (struct CGRect)boundsForCollaboratorCursorLayer;
- (BOOL)p_isResizingMaskInMaskEditMode;
- (BOOL)p_isResizingImageInMaskEditMode;
- (id)commandForAcceptingPasteWithImageInfo:(id)arg1 outSelectionBehavior:(out id *)arg2;
- (BOOL)canPasteDataFromPhysicalKeyboard:(id)arg1;
- (BOOL)shouldAllowReplacementFromPaste;
- (struct CGAffineTransform)transformForHighlightLayer;
- (struct CGRect)boundsForHighlightLayer;
- (struct CGPoint)positionOfStandardKnob:(id)arg1 forBounds:(struct CGRect)arg2;
- (id)hitRepChrome:(struct CGPoint)arg1;
- (int)tilingMode;
- (id)overlayLayers;
- (void)willBeginSharedReadOnlyMode;
- (void)willBeginReadMode;
- (void)layoutInRootChangedFrom:(id)arg1 to:(id)arg2 translatedOnly:(BOOL)arg3;
- (void)processChangedProperty:(int)arg1;
- (void)processChanges:(id)arg1;
- (id)pathSourceForSelectionHighlightBehavior;
- (BOOL)shouldHideSelectionHighlightDueToRectangularPath;
- (BOOL)shouldShowSelectionHighlight;
- (BOOL)handleDoubleTapAtPoint:(struct CGPoint)arg1;
- (BOOL)p_allowedToEditMask;
- (BOOL)containsPoint:(struct CGPoint)arg1 withPrecision:(BOOL)arg2;
- (void)becameNotSelected;
- (void)p_selectionPathDidChange:(id)arg1;
- (void)editMaskWithHUD:(BOOL)arg1;
- (void)p_enterMaskModeIfNecessaryWithHUD:(BOOL)arg1;
- (void)endEditingMask;
- (void)endDynamicallyChangingMaskScale:(double)arg1;
- (void)dynamicallySetMaskScale:(double)arg1;
- (void)beginDynamicallyChangingMaskScale;
- (id)newMaskResizer;
@property(readonly, nonatomic) NSArray *maskScaleDetents;
- (void)maskScaleLimitsReturningMin:(out double *)arg1 max:(out double *)arg2;
@property(readonly, nonatomic) double maskScale;
@property(readonly, nonatomic) BOOL isMaskScaleFromLayout;
@property(readonly, nonatomic) long long maskEditMode;
- (void)maskWithHUD:(BOOL)arg1;
- (void)unhighlightImage;
- (void)highlightImage;
- (BOOL)shouldShowReflection;
- (BOOL)shouldShowShadow;
- (BOOL)canDrawShadowInOneStepWithChildren:(BOOL)arg1;
- (BOOL)p_drawsInOneStep;
- (id)p_validatedBitmapImageProvider;
- (id)p_validatedImageProvider;
- (id)textureForDescription:(id)arg1;
- (BOOL)p_shouldUseSourceImageForDescription:(id)arg1 clipBounds:(struct CGRect)arg2 transform:(struct CGAffineTransform)arg3 image:(struct CGImage *)arg4;
- (void)setTextureAttributes:(id)arg1 textureBounds:(struct CGRect)arg2;
- (struct CGRect)imageDrawingHelperRectForCenteringDownloadProgressPlaceholderImage:(id)arg1;
- (id)imageDrawingHelperEnhancedImageData:(id)arg1;
- (id)imageDrawingHelperThumbnailAdjustedImageData:(id)arg1;
- (id)imageDrawingHelperAdjustedImageData:(id)arg1;
- (BOOL)imageDrawingHelperIsDynamicallyChangingImageAdjustments:(id)arg1;
- (id)imageDrawingHelperImageAdjustments:(id)arg1;
- (void)imageDrawingHelper:(id)arg1 didGenerateSizedImageSynchronously:(BOOL)arg2;
- (BOOL)imageDrawingHelperShouldRetryGeneratingSizedImageLater:(id)arg1;
- (BOOL)imageDrawingHelperShouldGenerateSizedImageSynchronously:(id)arg1;
- (const struct CGPath *)imageDrawingHelper:(id)arg1 newMaskPathForSizedImageWithSize:(struct CGSize)arg2 orientation:(int)arg3;
- (BOOL)imageDrawingHelperShouldBakeMaskIntoSizedImage:(id)arg1;
- (BOOL)imageDrawingHelperImageHasAlpha:(id)arg1;
- (struct CGAffineTransform)imageDrawingHelperImageTransformInRootForAntialiasingDefeat:(id)arg1;
- (struct CGRect)imageDrawingHelperImageRect:(id)arg1;
- (id)imageDrawingHelperThumbnailImageData:(id)arg1;
- (id)imageDrawingHelperImageData:(id)arg1;
- (struct CGRect)clipRect;
- (struct CGRect)frameInUnscaledCanvas;
- (void)addBitmapsToRenderingQualityInfo:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)p_drawInContext:(struct CGContext *)arg1 withContent:(BOOL)arg2 strokeDrawOptions:(unsigned long long)arg3 withOpacity:(double)arg4 withMask:(BOOL)arg5 withIAMask:(BOOL)arg6 forLayer:(BOOL)arg7 forShadow:(BOOL)arg8 forHitTest:(BOOL)arg9;
- (BOOL)canDrawInParallel;
@property(readonly, nonatomic) BOOL isMathTypeEquation;
- (id)imageOfStroke:(struct CGRect *)arg1;
- (void)drawInContextWithoutEffects:(struct CGContext *)arg1 withContent:(BOOL)arg2 strokeDrawOptions:(unsigned long long)arg3 withOpacity:(BOOL)arg4 forAlphaOnly:(BOOL)arg5 drawChildren:(BOOL)arg6 keepingChildrenPassingTest:(CDUnknownBlockType)arg7;
- (void)drawInLayerContext:(struct CGContext *)arg1;
- (id)downloadProgressPlaceholderImage;
- (BOOL)shouldShowDownloadProgressIndicator;
- (BOOL)shouldShowCheckerboard;
- (BOOL)isDataCurrentlyDownloading;
@property(readonly) TSPData *imageDataForRendering;
- (struct CGRect)boundsForStandardKnobs;
- (struct CGRect)targetRectForEditMenu;
- (BOOL)wantsToDistortWithImagerContext;
- (BOOL)intersectsUnscaledRect:(struct CGRect)arg1;
- (void)updateFromLayout;
- (void)willBeRemoved;
@property(readonly, nonatomic) TSDMaskLayout *maskLayout;
@property(readonly, nonatomic) TSDMaskInfo *maskInfo;
@property(readonly, nonatomic) TSDImageLayout *imageLayout;
@property(readonly, nonatomic) TSDImageInfo *imageInfo;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

