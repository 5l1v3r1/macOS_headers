//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UXKit/UXBarButtonItem.h>

@class IPXZoomControl;

__attribute__((visibility("hidden")))
@interface IPXZoomButtonItem : UXBarButtonItem
{
    IPXZoomControl *_zoomControl;
}

@property(readonly, nonatomic) IPXZoomControl *zoomControl; // @synthesize zoomControl=_zoomControl;
- (void).cxx_destruct;
- (void)setSubviewsHidden:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic) BOOL subviewsHidden;
@property(nonatomic) BOOL singleStepZoom;
@property(nonatomic) BOOL toggleMaxZoom;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isCondensed;
- (void)setCondensed:(BOOL)arg1;
- (id)initWithSlider:(id)arg1;

@end

