//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIColor.h>

@interface UIColor (FRAdditions)
+ (id)fr_followingInstructionTextColor;
+ (id)fr_referredUserInterstitialAndWelcomeToNewsRedColor;
+ (id)fr_colorBetweenGradientColors:(id)arg1 andColor:(id)arg2 atPosition:(double)arg3;
+ (id)fr_saveGlyphCellColor;
+ (id)fr_likeDislikeGlyphCellColor;
+ (id)fr_subscriptionGlyphColorForTextColor:(id)arg1 backgroundColor:(id)arg2;
+ (id)fr_accessoryColorForTextColor:(id)arg1 backgroundColor:(id)arg2;
+ (id)fr_plusDEffectWithForegroundColor:(id)arg1 backgroundColor:(id)arg2;
+ (id)fr_plusLEffectWithForegroundColor:(id)arg1 backgroundColor:(id)arg2;
+ (long long)fr_binForColor:(id)arg1;
+ (id)fr_colorByInterpolatingFromColor:(id)arg1 toColor:(id)arg2 percent:(double)arg3;
+ (id)fr_colorComponentsFromString:(id)arg1;
+ (id)fr_topicColorsArray;
+ (id)fr_defaultLightBarColor;
+ (id)fr_defaultDarkBarColor;
+ (id)fr_editorialPicksNewsletterColor;
+ (id)fr_editorialPicksHeaderColor;
+ (id)fr_trendingStoriesHeaderColor;
+ (id)fr_topStoriesHeaderColor;
+ (id)fr_forYouStoriesHeaderColor;
+ (id)fr_savedStoriesHeaderColor;
+ (id)fr_sponsoredStoryTextColor;
+ (id)fr_subscriptionOnlyTextColor;
+ (id)fr_subscriptionOnlyStickerColor;
+ (id)fr_red;
+ (id)fr_gray;
+ (id)fr_blue;
+ (id)fr_green;
+ (id)fr_yellow;
+ (id)fr_keyColorHighlighted;
+ (id)fr_keyColor;
+ (id)fr_systemViewTintColor;
+ (id)fr_colorWithHue:(double)arg1 saturation:(double)arg2 lightness:(double)arg3 alpha:(double)arg4;
- (id)fr_colorOrBlackIfTooBright;
@property(readonly, nonatomic) double brightness;
@property(readonly, nonatomic) double saturation;
@property(readonly, nonatomic) double hue;
@property(readonly, nonatomic) double alpha;
@property(readonly, nonatomic) double blue;
@property(readonly, nonatomic) double green;
@property(readonly, nonatomic) double red;
- (void)print;
- (id)fr_description;
- (void)_getHSBA:(CDUnknownBlockType)arg1;
- (void)_getRGBA:(CDUnknownBlockType)arg1;
- (BOOL)isEqualToColor:(id)arg1;
- (BOOL)isAboutEqualToColor:(id)arg1;
- (void)getHue:(double *)arg1 saturation:(double *)arg2 lightness:(double *)arg3 alpha:(double *)arg4;
- (id)fr_darken:(double)arg1;
- (id)fr_lighten:(double)arg1;
- (id)fr_desaturate:(double)arg1;
- (id)fr_saturate:(double)arg1;
- (id)fr_offsetWithHue:(double)arg1 saturation:(double)arg2 lightness:(double)arg3 alpha:(double)arg4;
- (long long)fr_legibleStatusBarStyle;
- (id)fr_legibleForegroundColor;
@end

