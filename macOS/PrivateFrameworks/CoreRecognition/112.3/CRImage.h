//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CIImage;

@interface CRImage : NSObject
{
    BOOL _vImageDataNeedsRelease;
    unsigned long long _width;
    unsigned long long _height;
    struct __CVBuffer *_pixelBuffer;
    CIImage *_ciImage;
    struct CGImage *_cgImage;
    struct vImage_Buffer _vImage;
}

+ (void)cgOrientation:(unsigned int)arg1 toVImageRotationMode:(char *)arg2 andReflection:(int *)arg3;
@property(nonatomic) BOOL vImageDataNeedsRelease; // @synthesize vImageDataNeedsRelease=_vImageDataNeedsRelease;
@property(nonatomic) struct CGImage *cgImage; // @synthesize cgImage=_cgImage;
@property(retain, nonatomic) CIImage *ciImage; // @synthesize ciImage=_ciImage;
@property(nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
@property unsigned long long height; // @synthesize height=_height;
@property unsigned long long width; // @synthesize width=_width;
@property struct vImage_Buffer vImage; // @synthesize vImage=_vImage;
- (void).cxx_destruct;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithCGImage:(struct CGImage *)arg1 properties:(id)arg2;
- (id)initWithCGImage:(struct CGImage *)arg1;
- (id)imageByInvertingIntensity;
- (void)dealloc;
- (void)writeToFile:(id)arg1;
- (id)imageByCroppingRectangle:(struct CGRect)arg1;
- (id)initWithVImageBuffer:(struct vImage_Buffer)arg1;
- (id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (id)imageByPaddingToRatioAndScalingToWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (id)imageByScalingToWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (id)imageByRotating180;
- (id)imageByRotating90CW;
- (id)imageByCroppingTextFeature:(id)arg1 correctedBoundingBox:(id)arg2;
- (id)imageByApplyingHistogramCorrection;
- (id)initWithCIImage:(id)arg1;
- (id)initWithCVPixelBufferFromLumaNoCopy:(struct __CVBuffer *)arg1;

@end

