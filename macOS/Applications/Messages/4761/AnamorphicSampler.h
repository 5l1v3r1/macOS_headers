//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CIFilter.h>

@class CIImage, CIKernel, CIVector;

@interface AnamorphicSampler : CIFilter
{
    CIImage *inputImage;
    CIVector *inputSize;
    CIKernel *_kernelHorizontal;
    CIKernel *_kernelVertical;
}

- (id)outputImage;
- (struct CGRect)regionOf:(int)arg1 destRect:(struct CGRect)arg2 userInfo:(id)arg3;
- (id)scalingTableForSourceSize:(struct CGSize)arg1 destinationSize:(struct CGSize)arg2;

@end

