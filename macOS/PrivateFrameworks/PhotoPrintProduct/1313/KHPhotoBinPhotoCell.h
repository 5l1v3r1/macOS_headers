//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UXCollectionViewCell.h"

#import "NSAccessibilityRow.h"

@class CAShapeLayer, KHProjectPhoto, NSImage, NSString, UXImageView, UXView;

@interface KHPhotoBinPhotoCell : UXCollectionViewCell <NSAccessibilityRow>
{
    BOOL _currentFrameImage;
    BOOL _usingPlaceholderImage;
    KHProjectPhoto *_photo;
    double _imageAlpha;
    CAShapeLayer *_currentFrameImageLayer;
    UXView *_selectedBackgroundView;
    UXImageView *_previewView;
    NSImage *_image;
    KHProjectPhoto *_draggingPhoto;
    id <KHPhotoBinPhotoCellAccessibilitySelectionDelegate> _accessibilitySelectionDelegate;
    struct CGSize _imageSize;
}

+ (struct CGSize)preferredContentSize;
- (void).cxx_destruct;
@property(nonatomic) __weak id <KHPhotoBinPhotoCellAccessibilitySelectionDelegate> accessibilitySelectionDelegate; // @synthesize accessibilitySelectionDelegate=_accessibilitySelectionDelegate;
@property(retain, nonatomic) KHProjectPhoto *draggingPhoto; // @synthesize draggingPhoto=_draggingPhoto;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(nonatomic) BOOL usingPlaceholderImage; // @synthesize usingPlaceholderImage=_usingPlaceholderImage;
@property(readonly, nonatomic) UXImageView *previewView; // @synthesize previewView=_previewView;
@property(readonly, nonatomic) UXView *selectedBackgroundView; // @synthesize selectedBackgroundView=_selectedBackgroundView;
@property(retain, nonatomic) CAShapeLayer *currentFrameImageLayer; // @synthesize currentFrameImageLayer=_currentFrameImageLayer;
@property(nonatomic, getter=isCurrentFrameImage) BOOL currentFrameImage; // @synthesize currentFrameImage=_currentFrameImage;
@property(nonatomic) double imageAlpha; // @synthesize imageAlpha=_imageAlpha;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) KHProjectPhoto *photo; // @synthesize photo=_photo;
- (BOOL)isAccessibilitySelected;
- (id)accessibilityRoleDescription;
- (long long)accessibilityIndex;
- (BOOL)accessibilityPerformPick;
- (BOOL)accessibilityPerformPress;
- (void)updateLayer;
- (void)_updateCurrentFrameImagePath;
- (void)_updateCurrentImageMarker;
- (void)_updateImage;
- (struct CGRect)rectForImageView;
- (void)keyDown:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)viewDidChangeBackingProperties;
- (void)layout;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

