//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <iAd/ADBannerView.h>

#import "FCNativeAdProviding-Protocol.h"
#import "FRAdAnalyticsProviding-Protocol.h"

@class FRBannerViewLoadDelegater, NSDate, NSString, UIView;

@interface FRBannerView : ADBannerView <FRAdAnalyticsProviding, FCNativeAdProviding>
{
    BOOL _applyGroupStyle;
    BOOL _exchangedNativeForBanner;
    BOOL _needsInventorySwap;
    NSString *opportunityID;
    NSDate *requestDate;
    NSDate *responseDate;
    NSString *adCampaignId;
    NSString *_associatedID;
    long long _currentAdType;
    FRBannerViewLoadDelegater *_loadDelegater;
}

@property(retain, nonatomic) FRBannerViewLoadDelegater *loadDelegater; // @synthesize loadDelegater=_loadDelegater;
@property(nonatomic) long long currentAdType; // @synthesize currentAdType=_currentAdType;
@property(copy, nonatomic) NSString *associatedID; // @synthesize associatedID=_associatedID;
@property(nonatomic) BOOL needsInventorySwap; // @synthesize needsInventorySwap=_needsInventorySwap;
@property(nonatomic) BOOL exchangedNativeForBanner; // @synthesize exchangedNativeForBanner=_exchangedNativeForBanner;
@property(nonatomic) BOOL applyGroupStyle; // @synthesize applyGroupStyle=_applyGroupStyle;
@property(copy, nonatomic) NSString *adCampaignId; // @synthesize adCampaignId;
@property(copy, nonatomic) NSDate *responseDate; // @synthesize responseDate;
@property(copy, nonatomic) NSDate *requestDate; // @synthesize requestDate;
@property(copy, nonatomic) NSString *opportunityID; // @synthesize opportunityID;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *campaignId;
@property(readonly, nonatomic) UIView *overlayImpressionView;
- (void)setDelegate:(id)arg1;
- (struct CGSize)sizeForCurrentOrientation;
@property(nonatomic) long long lastErrorCode;
@property(readonly, copy) NSString *description;
- (id)_initWithAdCreativeType:(int)arg1 layoutOptions:(id)arg2 options:(long long)arg3;
- (id)initWithAdCreativeType:(int)arg1 layoutOptions:(id)arg2;
- (id)initWithAdCreativeType:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

