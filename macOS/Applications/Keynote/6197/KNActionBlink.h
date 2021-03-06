//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "KNMotionBlurWrapperBasedEffect.h"

#import "KNActionEffectBuildAnimator-Protocol.h"

@class KNAnimParameterGroup, KNMotionBlurAnimationPluginWrapper, NSString;

@interface KNActionBlink : KNMotionBlurWrapperBasedEffect <KNActionEffectBuildAnimator>
{
    KNMotionBlurAnimationPluginWrapper *_motionBlurWrapper;
    KNAnimParameterGroup *_parameterGroup;
}

+ (long long)rendererTypeForAnimationContext:(id)arg1;
+ (id)thumbnailImageNameForType:(long long)arg1;
+ (id)applyActionEffect:(id)arg1 toAttributes:(id)arg2;
+ (id)customAttributes;
+ (id)defaultAttributes;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(long long)arg2;
+ (unsigned long long)directionType;
+ (id)localizedMenuString:(long long)arg1;
+ (BOOL)isEmphasisBuildAnimation;
+ (id)supportedTypes;
+ (id)animationFilter;
+ (long long)animationCategory;
+ (id)animationName;
- (void).cxx_destruct;
- (struct CGRect)frameOfEffectWithContext:(id)arg1;
- (void)addAnimationsTo:(id)arg1 context:(id)arg2;
- (void)addAnimationsTo:(id)arg1 forTextureSet:(id)arg2 finalTextureSet:(id)arg3 duration:(double)arg4 attributes:(id)arg5 previousAttributes:(id)arg6;
- (void)p_addAnimationToLayer:(id)arg1 duration:(double)arg2 initialOpacity:(double)arg3 attributes:(id)arg4 result:(id)arg5;
- (id)initWithAnimationContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

