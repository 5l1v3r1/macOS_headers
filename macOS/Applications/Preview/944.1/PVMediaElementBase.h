//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PVMediaElement-Protocol.h"

@class AKPageModelController, PVMediaContainerBase;

@interface PVMediaElementBase : NSObject <PVMediaElement>
{
    PVMediaContainerBase *_parentContainer;
    AKPageModelController *_pageModelController;
}

@property(retain) AKPageModelController *pageModelController; // @synthesize pageModelController=_pageModelController;
- (void).cxx_destruct;
- (void)discardLayer;
- (id)layerForView:(id)arg1 scaleFactor:(double)arg2 zoomCenter:(struct CGPoint)arg3;
- (id)cachedLayer;
- (BOOL)canRenderToLayer;
- (unsigned long long)EXIFOrientation;
- (void)rotateLeft;
- (void)rotateRight;
- (id)thumbnailSubtitle;
- (id)thumbnailTitle;
- (void)setNeedsThumbnailUpdate;
- (id)thumbnailOfSize:(struct CGSize)arg1;
- (double)thumbnailAspect;
- (void)setParentContainer:(id)arg1;
- (id)parentContainer;
- (BOOL)isQuickLookElement;
- (BOOL)isC3DElement;
- (BOOL)isImageElement;
- (BOOL)isPDFElement;
- (void)copyAKAnnotationsFromElement:(id)arg1;
- (void)dealloc;
- (id)init;

@end

