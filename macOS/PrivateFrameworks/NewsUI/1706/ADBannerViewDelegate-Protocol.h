//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NewsUI/NSObject-Protocol.h>

@class ADBannerView, NSError;

@protocol ADBannerViewDelegate <NSObject>

@optional
- (void)bannerViewActionDidFinish:(ADBannerView *)arg1;
- (BOOL)bannerViewActionShouldBegin:(ADBannerView *)arg1 willLeaveApplication:(BOOL)arg2;
- (void)bannerView:(ADBannerView *)arg1 didFailToReceiveAdWithError:(NSError *)arg2;
- (void)bannerViewDidLoadAd:(ADBannerView *)arg1;
- (void)bannerViewWillLoadAd:(ADBannerView *)arg1;
@end

