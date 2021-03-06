//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UXCollectionViewCell.h"

@class NSImage, PXPersonImageRequest, UXImageView, UXView;

@interface PXPeopleBootstrapCollectionViewCell : UXCollectionViewCell
{
    BOOL _confirmed;
    BOOL _isMergeCandidate;
    BOOL _isVerified;
    unsigned long long _presentationStatus;
    PXPersonImageRequest *_imageRequest;
    UXView *_selectedCheckmarkView;
    UXView *_unselectedCheckmarkView;
    UXImageView *_badgeView;
    UXImageView *_imageView;
    struct CGSize _checkmarkImageSize;
}

+ (id)cloudErrorBadgeImage;
+ (id)cloudBadgeImage;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGSize checkmarkImageSize; // @synthesize checkmarkImageSize=_checkmarkImageSize;
@property(readonly, nonatomic) UXImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UXImageView *badgeView; // @synthesize badgeView=_badgeView;
@property(readonly, nonatomic) UXView *unselectedCheckmarkView; // @synthesize unselectedCheckmarkView=_unselectedCheckmarkView;
@property(readonly, nonatomic) UXView *selectedCheckmarkView; // @synthesize selectedCheckmarkView=_selectedCheckmarkView;
@property(nonatomic) BOOL isVerified; // @synthesize isVerified=_isVerified;
@property(nonatomic) BOOL isMergeCandidate; // @synthesize isMergeCandidate=_isMergeCandidate;
@property(retain, nonatomic) PXPersonImageRequest *imageRequest; // @synthesize imageRequest=_imageRequest;
@property(nonatomic) unsigned long long presentationStatus; // @synthesize presentationStatus=_presentationStatus;
@property(nonatomic) BOOL confirmed; // @synthesize confirmed=_confirmed;
- (void)_updateCellSizing;
- (BOOL)_isRTL;
@property(retain, nonatomic) NSImage *image;
- (void)prepareForReuse;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

