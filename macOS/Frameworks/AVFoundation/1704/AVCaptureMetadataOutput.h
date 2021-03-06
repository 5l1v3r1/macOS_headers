//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AVFoundation/AVCaptureOutput.h>

@class AVCaptureMetadataOutputInternal, NSArray, NSObject;
@protocol AVCaptureMetadataOutputObjectsDelegate, OS_dispatch_queue;

@interface AVCaptureMetadataOutput : AVCaptureOutput
{
    AVCaptureMetadataOutputInternal *_internal;
}

+ (id)new;
+ (void)initialize;
- (BOOL)canAddConnectionForMediaType:(id)arg1;
- (id)connectionMediaTypes;
@property(nonatomic) struct CGRect rectOfInterest;
@property(copy, nonatomic) NSArray *metadataObjectTypes;
@property(readonly, nonatomic) NSArray *availableMetadataObjectTypes;
- (void)setMetadataObjectsDelegate:(id)arg1 queue:(id)arg2;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *metadataObjectsCallbackQueue;
@property(readonly, nonatomic) id <AVCaptureMetadataOutputObjectsDelegate> metadataObjectsDelegate;
- (void)dealloc;
- (id)init;

@end

