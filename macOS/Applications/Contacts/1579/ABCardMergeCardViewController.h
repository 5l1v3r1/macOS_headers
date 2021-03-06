//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class ABCardMergeBannerViewController, ABCardView, ABCardViewController;

@interface ABCardMergeCardViewController : NSViewController
{
    ABCardMergeBannerViewController *_bannerViewController;
    ABCardView *_cardView;
    ABCardViewController *_cardViewController;
}

@property(readonly) ABCardView *cardView; // @synthesize cardView=_cardView;
- (void)setStyleProvider:(id)arg1;
- (void)setUpdatedInformation:(id)arg1;
- (void)setUpAlternateImagesForPerson:(id)arg1;
- (void)setPerson:(id)arg1;
- (void)viewDidLoad;
- (id)makeCardViewControllerWithCardView:(id)arg1;
- (id)makeCardView;
- (id)makeBannerView;
- (id)makeContainerView;
- (void)loadView;
- (void)dealloc;
- (id)initWithBannerViewController:(id)arg1;

@end

