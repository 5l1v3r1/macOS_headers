//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIImageView.h>

@class UIColor;

@interface _UITextFieldRoundedRectBackgroundViewNeue : UIImageView
{
    BOOL _disabled;
    BOOL _hasFlexibleCornerRadius;
    UIColor *_strokeColor;
    UIColor *_fillColor;
    double _lineWidth;
    double _cornerRadius;
}

@property(nonatomic) BOOL hasFlexibleCornerRadius; // @synthesize hasFlexibleCornerRadius=_hasFlexibleCornerRadius;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
- (void).cxx_destruct;
- (void)setActive:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (double)_cornerRadiusAdjustedForBoundsHeight;
- (double)_screenScale;
- (id)_fillColor:(BOOL)arg1;
- (id)_strokeColor:(BOOL)arg1;
- (void)updateView;
- (id)_initWithFrame:(struct CGRect)arg1 active:(BOOL)arg2 lineWidth:(double)arg3 updateView:(BOOL)arg4;
- (id)_initWithFrame:(struct CGRect)arg1 active:(BOOL)arg2 lineWidth:(double)arg3;
- (id)initWithFrame:(struct CGRect)arg1 active:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

