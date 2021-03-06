//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/SXAdComponent.h>

#import <Silex/SXBannerAdComponent-Protocol.h>

@class NSString, SXComponentAnimation, SXComponentClassification, SXComponentConditions, SXJSONArray, SXJSONDictionary, UIColor;
@protocol SXComponentAnchor;

@interface SXBannerAdComponent : SXAdComponent <SXBannerAdComponent>
{
}

+ (unsigned long long)bannerTypeFromString:(id)arg1;
@property(readonly, nonatomic) unsigned long long adType;
- (unsigned long long)bannerTypeWithValue:(id)arg1 withType:(int)arg2;

// Remaining properties
@property(readonly, nonatomic) SXJSONArray *additions;
@property(readonly, nonatomic) SXJSONDictionary *advertising;
@property(readonly, nonatomic) SXJSONDictionary *analytics;
@property(readonly, nonatomic) id <SXComponentAnchor> anchor;
@property(readonly, nonatomic) SXComponentAnimation *animation;
@property(readonly, nonatomic) unsigned long long bannerType; // @dynamic bannerType;
@property(readonly, nonatomic) SXJSONArray *behaviors;
@property(readonly, nonatomic) SXComponentClassification *classification;
@property(readonly, nonatomic) SXJSONArray *conditional;
@property(readonly, nonatomic) SXComponentConditions *conditions;
@property(readonly, nonatomic) unsigned long long contentRelevance;
@property(readonly, nonatomic) UIColor *debugColor;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL hidden;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *layout;
@property(readonly, nonatomic) unsigned long long placementType;
@property(readonly, nonatomic) int role;
@property(readonly, nonatomic) NSString *style;
@property(readonly) Class superclass;
@property(readonly, nonatomic) unsigned long long traits;
@property(readonly, nonatomic) NSString *type;

@end

