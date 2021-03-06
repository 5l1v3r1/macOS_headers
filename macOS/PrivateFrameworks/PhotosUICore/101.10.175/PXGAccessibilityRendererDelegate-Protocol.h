//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSArray, NSObject, PXGHitTestResult, PXGLayout;
@protocol PXAccessibilityView;

@protocol PXGAccessibilityRendererDelegate <NSObject>
@property(readonly, nonatomic) BOOL canSelectAccessibilityGroupElementsChildren;
@property(readonly, nonatomic) BOOL canSelectAccessibilityGroupElements;
@property(readonly, nonatomic) PXGLayout *accessibilityRootLayout;
- (NSObject<PXAccessibilityView> *)accessibilityViewForSpriteIndex:(unsigned int)arg1;
- (PXGHitTestResult *)accessibilityHitTestResultAtPoint:(struct CGPoint)arg1;
- (BOOL)itemDidShowDefaultUIAtLocation:(struct CGPoint)arg1;
- (BOOL)itemDidShowAlternateUIAtLocation:(struct CGPoint)arg1;
- (BOOL)itemWasRightClickedWithHitTestResult:(PXGHitTestResult *)arg1 location:(struct CGPoint)arg2;
- (BOOL)itemWasDoubleClickedWithHitTestResult:(PXGHitTestResult *)arg1;
- (void)selectAssets:(NSArray *)arg1;
@end

