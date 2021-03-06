//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class Banner, BannerContainerView;

@protocol BannerContainerViewDelegate <NSObject>

@optional
- (void)bannerContainerViewDidUninstall:(BannerContainerView *)arg1;
- (void)bannerContainerViewDidUpdateLayoutDuringAnimation:(BannerContainerView *)arg1;
- (void)bannerContainerView:(BannerContainerView *)arg1 didUninstallBanner:(Banner *)arg2;
- (void)bannerContainerView:(BannerContainerView *)arg1 willUninstallBanner:(Banner *)arg2;
- (void)bannerContainerView:(BannerContainerView *)arg1 installAnimationDidEndForBanner:(Banner *)arg2;
- (void)bannerContainerView:(BannerContainerView *)arg1 didInstallBanner:(Banner *)arg2;
- (void)bannerContainerView:(BannerContainerView *)arg1 willInstallBanner:(Banner *)arg2;
@end

