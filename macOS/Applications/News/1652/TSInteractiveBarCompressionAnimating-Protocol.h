//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class UIScrollView, UITraitCollection;

@protocol TSInteractiveBarCompressionAnimating
@property(readonly, nonatomic) double minimumBarHeight;
@property(readonly, nonatomic) double maximumBarHeight;
- (double)minimalContentOffsetYForBarHeight:(double)arg1 scrollView:(UIScrollView *)arg2;
- (void)reloadWithTraitCollection:(UITraitCollection *)arg1;
- (void)updateWithCompressionProgress:(double)arg1;
@end

