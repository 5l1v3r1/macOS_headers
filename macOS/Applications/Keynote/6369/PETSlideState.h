//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OCEDrawingState.h"

@class KNSlideNode, PDSlideBase, PETBuildMaps, PETPresentationState, TCDrawableLayoutDocumentState, TSUNoCopyDictionary;

@interface PETSlideState : OCEDrawingState
{
    PDSlideBase *mSlideBase;
    KNSlideNode *mSlideNode;
    PETBuildMaps *mBuildMaps;
    unsigned long long mInheritedDrawableCount;
    unsigned long long mTargetPlaceholderCount;
    TSUNoCopyDictionary *mCommentStorageToComment;
    TCDrawableLayoutDocumentState *_drawableLayoutState;
}

@property(retain, nonatomic) TCDrawableLayoutDocumentState *drawableLayoutState; // @synthesize drawableLayoutState=_drawableLayoutState;
@property(nonatomic) unsigned long long targetPlaceholderCount; // @synthesize targetPlaceholderCount=mTargetPlaceholderCount;
@property(nonatomic) unsigned long long inheritedDrawableCount; // @synthesize inheritedDrawableCount=mInheritedDrawableCount;
@property(readonly, nonatomic) PETBuildMaps *buildMaps; // @synthesize buildMaps=mBuildMaps;
@property(readonly, nonatomic) KNSlideNode *slideNode; // @synthesize slideNode=mSlideNode;
@property(readonly, nonatomic) PDSlideBase *targetSlide; // @synthesize targetSlide=mSlideBase;
- (void).cxx_destruct;
- (void)popLayoutCache;
- (void)pushLayoutCacheWithDrawables:(id)arg1;
- (BOOL)isMappedComment:(id)arg1;
- (id)rootParentForStorage:(id)arg1;
- (void)setCommentStorage:(id)arg1 forComment:(id)arg2;
@property(readonly, nonatomic) PETPresentationState *presentationState;
- (id)initWithPresentationState:(id)arg1 slideBase:(id)arg2 slideNode:(id)arg3;

@end

