//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <NeutrinoKit/CALayerDelegate-Protocol.h>

@class CALayer, NSString, NUImageGeometry, _NUBackfillLayer, _NUROILayer;

@interface NURenderView : NSView <CALayerDelegate>
{
    _NUBackfillLayer *_backfillLayer;
    _NUROILayer *_roiLayer;
    BOOL _debugMode;
    CALayer *_containerLayer;
    NUImageGeometry *_geometry;
    CALayer *_geometryAnimationLayer;
}

@property(retain, nonatomic) CALayer *geometryAnimationLayer; // @synthesize geometryAnimationLayer=_geometryAnimationLayer;
@property(retain, nonatomic) NUImageGeometry *geometry; // @synthesize geometry=_geometry;
- (void).cxx_destruct;
@property(nonatomic) BOOL debugMode;
- (void)transitionToSize:(struct CGSize)arg1 duration:(double)arg2 animationCurve:(id)arg3;
- (void)viewDidChangeBackingProperties;
- (struct CGRect)convertRectToImage:(struct CGRect)arg1;
- (id)_containerLayer;
- (BOOL)inLiveResize;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (id)_roiLayer;
- (id)_backfillLayer;
- (BOOL)wantsUpdateLayer;
- (BOOL)isOpaque;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

