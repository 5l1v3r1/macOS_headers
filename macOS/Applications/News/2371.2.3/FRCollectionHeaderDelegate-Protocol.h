//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FRCollectionHeaderReusableView, FRLikeDislikeControl, UIButton;

@protocol FRCollectionHeaderDelegate <NSObject>
- (void)header:(FRCollectionHeaderReusableView *)arg1 favoriteButtonTapped:(FRLikeDislikeControl *)arg2;
- (void)header:(FRCollectionHeaderReusableView *)arg1 likeDislikeButtonTapped:(FRLikeDislikeControl *)arg2;
- (void)header:(FRCollectionHeaderReusableView *)arg1 sectionLongPressed:(UIButton *)arg2;
- (void)headerTapped:(FRCollectionHeaderReusableView *)arg1;
@end

