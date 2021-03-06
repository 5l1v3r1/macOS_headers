//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVSampleBufferGeneratorInternal;

@interface AVSampleBufferGenerator : NSObject
{
    AVSampleBufferGeneratorInternal *_generator;
}

+ (void)notifyOfDataReadyForSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)initialize;
- (struct opaqueCMSampleBuffer *)createSampleBufferForRequest:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithAsset:(id)arg1 timebase:(struct OpaqueCMTimebase *)arg2;

@end

