//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSDCanvasDelegate-Protocol.h"

@class NSArray, NSSet, NSString, TSDCanvas, TSKDocumentRoot;

@interface TSDImager : NSObject <TSDCanvasDelegate>
{
    NSArray *mInfos;
    struct CGColor *mBackgroundColor;
    struct CGRect mUnscaledClipRect;
    double mViewScale;
    struct CGSize mScaledImageSize;
    struct CGSize mMaximumScaledImageSize;
    BOOL mUseScaledImageSize;
    BOOL mDistortedToMatch;
    BOOL mImageMustHaveEvenDimensions;
    BOOL mShouldReuseBitmapContext;
    struct NSEdgeInsets mContentInset;
    TSKDocumentRoot *mDocumentRoot;
    TSDCanvas *mCanvas;
    struct CGRect mActualScaledClipRect;
    BOOL mDrawingIntoPDF;
    BOOL mIsPrinting;
    BOOL mImageIsRenderingForMovie;
    struct CGContext *mReusableBitmapContext;
    struct CGRect mReusableBounds;
    struct CGRect mReusableIntegralBounds;
    struct CGRect mReusableActualScaledClipRect;
    struct CGSize mReusableScaledImageSize;
    NSSet *mPreviousRenderDatasNeedingDownload;
    CDUnknownBlockType mPostRenderAction;
}

@property(nonatomic) BOOL imageIsRenderingForMovie; // @synthesize imageIsRenderingForMovie=mImageIsRenderingForMovie;
@property(copy, nonatomic) NSSet *previousRenderDatasNeedingDownload; // @synthesize previousRenderDatasNeedingDownload=mPreviousRenderDatasNeedingDownload;
@property(nonatomic) BOOL isPrinting; // @synthesize isPrinting=mIsPrinting;
@property(nonatomic) BOOL shouldReuseBitmapContext; // @synthesize shouldReuseBitmapContext=mShouldReuseBitmapContext;
@property(nonatomic) BOOL imageMustHaveEvenDimensions; // @synthesize imageMustHaveEvenDimensions=mImageMustHaveEvenDimensions;
@property(nonatomic) BOOL distortedToMatch; // @synthesize distortedToMatch=mDistortedToMatch;
@property(readonly, nonatomic) struct CGRect actualScaledClipRect; // @synthesize actualScaledClipRect=mActualScaledClipRect;
@property(nonatomic) struct NSEdgeInsets contentInset; // @synthesize contentInset=mContentInset;
@property(nonatomic) struct CGRect unscaledClipRect; // @synthesize unscaledClipRect=mUnscaledClipRect;
@property(nonatomic) struct CGColor *backgroundColor; // @synthesize backgroundColor=mBackgroundColor;
@property(retain, nonatomic) NSArray *infos; // @synthesize infos=mInfos;
@property(readonly, retain, nonatomic) TSDCanvas *canvas; // @synthesize canvas=mCanvas;
- (struct CGImage *)p_newImageInReusableContext;
- (void)p_drawPageInContext:(struct CGContext *)arg1 createPage:(BOOL)arg2;
- (BOOL)p_configureCanvas;
- (BOOL)isPrintingCanvas;
- (BOOL)isCanvasDrawingIntoPDF:(id)arg1;
- (struct CGRect)visibleScaledBoundsForClippingRepsOnCanvas:(id)arg1;
- (id)documentRoot;
- (BOOL)drawPageInContext:(struct CGContext *)arg1 createPage:(BOOL)arg2;
- (id)pdfData;
- (struct CGImage *)newImage;
@property(nonatomic) struct CGSize maximumScaledImageSize;
@property(nonatomic) struct CGSize scaledImageSize;
@property(nonatomic) double viewScale;
- (void)setInfos:(id)arg1 allowLayoutIfNeeded:(BOOL)arg2;
- (void)setPostRenderAction:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDocumentRoot:(id)arg1 renderForWideGamut:(BOOL)arg2;
- (id)initWithDocumentRoot:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

