//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HFActionSetSuggestionFilter, HMActionSet, HMHome, NSArray;

@interface HFActionSetSuggestionVendor : NSObject
{
    HFActionSetSuggestionFilter *_filter;
    HMActionSet *_actionSet;
    HMHome *_home;
    NSArray *_services;
}

+ (id)supportedBuiltInActionSetTypes;
@property(readonly, nonatomic) NSArray *services; // @synthesize services=_services;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(readonly, nonatomic) HMActionSet *actionSet; // @synthesize actionSet=_actionSet;
@property(readonly, nonatomic) HFActionSetSuggestionFilter *filter; // @synthesize filter=_filter;
- (void).cxx_destruct;
- (id)_controlItemValueSourceForService:(id)arg1;
- (id)_deriveActionForSecondaryCharacteristic:(id)arg1 candidateServices:(id)arg2;
- (id)_deriveActionForPrimaryCharacteristic:(id)arg1 candidateServices:(id)arg2 targetThreshold:(double)arg3;
- (id)_deriveActionForPrimaryCharacteristic:(id)arg1;
- (id)_actionBuildersForCustomActionSetWithService:(id)arg1;
- (id)_actionBuildersForCustomActionSet;
- (id)_actionBuildersToSetTargetBlindsPositionOpen:(BOOL)arg1;
- (id)_actionBuildersToSetTargetSecuritySystemState:(long long)arg1;
- (id)_actionBuildersToSetTargetLockState:(long long)arg1 forServicesOfTypes:(id)arg2;
- (id)_actionBuildersToSetTargetDoorState:(long long)arg1 forServicesOfTypes:(id)arg2;
- (id)_actionBuildersToSetLightbulbBrightness:(double)arg1;
- (id)_actionBuildersToSetLightbulbColorWithPaletteColor:(id)arg1;
- (id)_actionBuildersToSetPowerState:(BOOL)arg1 forServicesOfTypes:(id)arg2;
- (id)_actionBuildersForBuiltInActionSetWithType:(id)arg1 outDependentServiceTypes:(out id *)arg2;
- (id)buildWithOutDependentServiceTypes:(out id *)arg1;
- (id)build;
- (id)initWithHome:(id)arg1 actionSet:(id)arg2 filter:(id)arg3;
- (id)initWithHome:(id)arg1 actionSet:(id)arg2;
- (id)init;

@end

