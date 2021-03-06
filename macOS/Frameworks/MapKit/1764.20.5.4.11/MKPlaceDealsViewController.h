//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapKit/_MKUIViewController.h>

#import <MapKit/MKModuleViewControllerProtocol-Protocol.h>
#import <MapKit/MKStackingViewControllerFixedHeightAware-Protocol.h>
#import <MapKit/_MKInfoCardChildViewControllerAnalyticsDelegate-Protocol.h>

@class NSLayoutConstraint, NSString, _MKPlaceDealView;
@protocol MKMapItemVendorDeal, MKPlaceDealsViewControllerDelegate;

@interface MKPlaceDealsViewController : _MKUIViewController <MKStackingViewControllerFixedHeightAware, _MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol>
{
    _MKPlaceDealView *_dealView;
    NSLayoutConstraint *_collapsedConstraint;
    BOOL _resizableViewsDisabled;
    id <MKPlaceDealsViewControllerDelegate> _delegate;
    id <MKMapItemVendorDeal> _deal;
}

@property(nonatomic) BOOL resizableViewsDisabled; // @synthesize resizableViewsDisabled=_resizableViewsDisabled;
@property(retain, nonatomic) id <MKMapItemVendorDeal> deal; // @synthesize deal=_deal;
@property(nonatomic) __weak id <MKPlaceDealsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)infoCardChildPossibleActions;
- (void)_dealSelected:(id)arg1;
- (void)updateViewConstraints;
- (double)extraHeightToReserveInLayout;
- (void)viewDidLoad;
- (Class)classForRootView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

