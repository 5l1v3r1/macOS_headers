//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FRCollectionBlankBackgroundReusableView.h"

@class CAGradientLayer, FCColorGradient;

@interface FRCollectionBackgroundReusableView : FRCollectionBlankBackgroundReusableView
{
    long long _groupType;
    FCColorGradient *_backgroundGradient;
    FCColorGradient *_darkStyleBackgroundGradient;
}

+ (Class)layerClass;
@property(retain, nonatomic) FCColorGradient *darkStyleBackgroundGradient; // @synthesize darkStyleBackgroundGradient=_darkStyleBackgroundGradient;
@property(retain, nonatomic) FCColorGradient *backgroundGradient; // @synthesize backgroundGradient=_backgroundGradient;
@property(nonatomic) long long groupType; // @synthesize groupType=_groupType;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (void)applyGradient;
- (void)setGroupType:(long long)arg1 backgroundGradient:(id)arg2 darkStyleBackgroundGradient:(id)arg3;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) CAGradientLayer *layer; // @dynamic layer;

@end

