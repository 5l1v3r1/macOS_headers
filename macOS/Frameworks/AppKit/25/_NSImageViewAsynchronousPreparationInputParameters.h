//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_NSAsynchronousPreparationInputParameters.h"

@class NSAppearance, NSColorSpace, NSImage, NSString;

__attribute__((visibility("hidden")))
@interface _NSImageViewAsynchronousPreparationInputParameters : NSObject <_NSAsynchronousPreparationInputParameters>
{
    NSImage *_asynchronousImage;
    NSColorSpace *_colorSpace;
    struct CGRect _bounds;
    struct CGAffineTransform _transform;
    NSAppearance *_appearance;
    id <NSContentStyle> _contentStyle;
    unsigned long long _frameStyle;
    unsigned long long _imageScaling;
    unsigned long long _imageAlignment;
    BOOL _flipped;
}

+ (id)keyPathsInvalidatingPreparedResultImmediately;
+ (id)keyPathsInvalidatingPreparedResult;
@property(nonatomic, getter=isFlipped) BOOL flipped; // @synthesize flipped=_flipped;
@property(nonatomic) unsigned long long imageAlignment; // @synthesize imageAlignment=_imageAlignment;
@property(nonatomic) unsigned long long imageScaling; // @synthesize imageScaling=_imageScaling;
@property(nonatomic) unsigned long long frameStyle; // @synthesize frameStyle=_frameStyle;
@property(copy, nonatomic) id <NSContentStyle> contentStyle; // @synthesize contentStyle=_contentStyle;
@property(retain, nonatomic) NSAppearance *appearance; // @synthesize appearance=_appearance;
@property(nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(retain, nonatomic) NSColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) NSImage *asynchronousImage; // @synthesize asynchronousImage=_asynchronousImage;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

