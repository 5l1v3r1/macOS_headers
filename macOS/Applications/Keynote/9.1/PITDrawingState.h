//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OAITDrawingState.h"

@class CHITHostState, KNAbstractSlide, OAITDrawableContainer, PDSlideBase, PITPresentationState, PITShapeBuilds, PITSlideState, TSUNoCopyDictionary;

@interface PITDrawingState : OAITDrawingState
{
    PITSlideState *mSlideState;
    CHITHostState *mHostState;
    OAITDrawableContainer *mTargetDrawableContainer;
    BOOL mDoImportPlaceholders;
    BOOL mDoImportNonPlaceholders;
    int mSlideIndex;
    int mTextPrototypeCount;
    PITShapeBuilds *mShapeBuilds;
    BOOL mHasGraphics;
    BOOL mHasDatePlaceholder;
    BOOL mHasFooterPlaceholder;
    BOOL mHasMappedBodyPlaceholder;
    int mSlideFillCategory;
    int mShapeFillCategory;
    TSUNoCopyDictionary *_mediaMap;
}

@property(retain, nonatomic) TSUNoCopyDictionary *mediaMap; // @synthesize mediaMap=_mediaMap;
@property(nonatomic) int shapeFillCategory; // @synthesize shapeFillCategory=mShapeFillCategory;
@property(nonatomic) int slideFillCategory; // @synthesize slideFillCategory=mSlideFillCategory;
@property(nonatomic) BOOL doImportNonPlaceholders; // @synthesize doImportNonPlaceholders=mDoImportNonPlaceholders;
@property(nonatomic) BOOL doImportPlaceholders; // @synthesize doImportPlaceholders=mDoImportPlaceholders;
@property(nonatomic) int slideIndex; // @synthesize slideIndex=mSlideIndex;
@property(retain, nonatomic) PITShapeBuilds *shapeBuilds; // @synthesize shapeBuilds=mShapeBuilds;
- (void).cxx_destruct;
@property(readonly, nonatomic) KNAbstractSlide *targetAbstractSlide;
@property(readonly, nonatomic) PDSlideBase *stylingSourceSlideBase;
@property(readonly, nonatomic) PDSlideBase *contentSourceSlideBase;
@property(readonly, nonatomic) OAITDrawableContainer *targetDrawableContainer;
- (id)owner;
@property(readonly, nonatomic) PITSlideState *slideState;
@property(readonly, nonatomic) PITPresentationState *presentationState;
@property(readonly, nonatomic) CHITHostState *hostState;
- (id)initWithSlideState:(id)arg1;

@end

