//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class PKPaletteShape, UIImageView;

@interface PKPaletteShapeCell : UICollectionViewCell
{
    UIImageView *_imageView;
    PKPaletteShape *_shape;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PKPaletteShape *shape; // @synthesize shape=_shape;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

