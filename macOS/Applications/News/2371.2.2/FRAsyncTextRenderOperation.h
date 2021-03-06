//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSAttributedString, UIColor, UIImage;

@interface FRAsyncTextRenderOperation : NSOperation
{
    NSAttributedString *_attributedText;
    double _scale;
    UIImage *_renderedImage;
    UIColor *_monochromeColor;
    struct CGSize _size;
}

+ (id)addOperationQueue;
+ (id)renderQueue;
@property(readonly, copy, nonatomic) UIColor *monochromeColor; // @synthesize monochromeColor=_monochromeColor;
@property(readonly, nonatomic) UIImage *renderedImage; // @synthesize renderedImage=_renderedImage;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
- (void).cxx_destruct;
- (void)main;
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2 attributedText:(id)arg3;
- (id)init;

@end

