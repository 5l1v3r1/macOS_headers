//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FRFeedCollectionViewCellActivityIndicatorViewDelegate-Protocol.h"
#import "TUMotionManagerObserver-Protocol.h"

@class FRFeedCollectionViewCellActivityIndicatorView, FRFeedHeadlineModel, NEPremiumBadgeView, NSString, SVAdPrivacyButton, UIColor, UIFont, UILabel;
@protocol FCHeadlineProviding, FRFeedCollectionViewCellAccessoryViewDelegate;

@interface FRFeedCollectionViewCellAccessoryView : UIView <FRFeedCollectionViewCellActivityIndicatorViewDelegate, TUMotionManagerObserver>
{
    id <FRFeedCollectionViewCellAccessoryViewDelegate> _delegate;
    UILabel *_ageOrSponsoredLabel;
    UILabel *_subscriptionLabel;
    FRFeedCollectionViewCellActivityIndicatorView *_activityIndicator;
    NEPremiumBadgeView *_premiumBadgeView;
    FRFeedHeadlineModel *_feedHeadlineModel;
    long long _cellType;
    long long _alignment;
    UIFont *_accessoryFont;
    double _accessoryFontLineHeight;
    UIColor *_accessoryFontColor;
    UIColor *_accessoryIconColor;
    SVAdPrivacyButton *_adMarkerButton;
    id <FCHeadlineProviding> _populatedHeadline;
    struct CGRect _accessoryViewFrame;
}

+ (id)fr_premiumSubscriptionGlyph;
+ (id)defaultAccessoryFontColor;
+ (id)defaultTextFont;
+ (id)subscriptionOnlyTextFontWithSize:(double)arg1;
+ (BOOL)_showTileProminenceScore;
@property(retain, nonatomic) id <FCHeadlineProviding> populatedHeadline; // @synthesize populatedHeadline=_populatedHeadline;
@property(nonatomic) SVAdPrivacyButton *adMarkerButton; // @synthesize adMarkerButton=_adMarkerButton;
@property(nonatomic) struct CGRect accessoryViewFrame; // @synthesize accessoryViewFrame=_accessoryViewFrame;
@property(retain, nonatomic) UIColor *accessoryIconColor; // @synthesize accessoryIconColor=_accessoryIconColor;
@property(retain, nonatomic) UIColor *accessoryFontColor; // @synthesize accessoryFontColor=_accessoryFontColor;
@property(nonatomic) double accessoryFontLineHeight; // @synthesize accessoryFontLineHeight=_accessoryFontLineHeight;
@property(retain, nonatomic) UIFont *accessoryFont; // @synthesize accessoryFont=_accessoryFont;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
@property(retain, nonatomic) FRFeedHeadlineModel *feedHeadlineModel; // @synthesize feedHeadlineModel=_feedHeadlineModel;
@property(retain, nonatomic) NEPremiumBadgeView *premiumBadgeView; // @synthesize premiumBadgeView=_premiumBadgeView;
@property(readonly, nonatomic) FRFeedCollectionViewCellActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(readonly, nonatomic) UILabel *subscriptionLabel; // @synthesize subscriptionLabel=_subscriptionLabel;
@property(retain, nonatomic) UILabel *ageOrSponsoredLabel; // @synthesize ageOrSponsoredLabel=_ageOrSponsoredLabel;
@property(nonatomic) id <FRFeedCollectionViewCellAccessoryViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)motionManager:(id)arg1 motionEnabled:(BOOL)arg2;
- (void)motionManager:(id)arg1 didUpdateMotionData:(id)arg2;
- (void)feedCollectionViewCellActivityIndicatorViewDidChangeState:(id)arg1;
- (void)_adMarkerWasPressed:(id)arg1;
- (void)setShared:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setDisliked:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setLiked:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setFavorited:(BOOL)arg1 animated:(BOOL)arg2;
- (id)attributedStoryStringForPopulatedHeadline;
- (id)getAttributedSubscriptionStringWithText:(id)arg1;
- (id)sponsoredTextForNativeAdWithHeadline:(id)arg1;
- (void)populateWithHeadline:(id)arg1 feedHeadlineModel:(id)arg2;
- (void)applyLayoutAttributes:(id)arg1;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

