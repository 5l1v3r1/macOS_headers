//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UXView.h"

#import "PXChangeObserver.h"

@class NSString, PXCMMImageViewModel, PXImageRequesterHelper, UXImageView;

@interface PXCMMImageView : UXView <PXChangeObserver>
{
    UXImageView *_imageView;
    UXView *_highlightView;
    PXImageRequesterHelper *_imageRequesterHelper;
    PXCMMImageViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PXCMMImageViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (BOOL)test_highlighted;
- (void)_updateContentsRect;
- (void)_updateImage;
- (void)_updateHighlighted;
- (void)_updateImageRequestHelper;
- (BOOL)isFlipped;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

