//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue, VCEffectsManagerDelegate;

__attribute__((visibility("hidden")))
@interface VCEffectsManager : NSObject
{
    id _delegate;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
    NSMutableArray *_effectsArray;
    BOOL _effectsRegistered;
    struct _opaque_pthread_mutex_t _loggingLock;
    CDStruct_1b6d18a9 _lastPrintTimestamp;
    CDStruct_1b6d18a9 _lastReceivedTimestamp;
    CDStruct_1b6d18a9 _lastSentTimestamp;
    int _consecutiveDroppedFrameCount;
    int _cameraFrameCount;
    int _sentFrameCount;
    int _receivedFrameCount;
    int _droppedFrameCount;
    int _failedFrameCount;
    double _effectsTimeoutThreshold;
    int _thermalPressureLevel;
}

+ (id)sharedManager;
@property(retain) NSMutableArray *effectsArray; // @synthesize effectsArray=_effectsArray;
- (void)effectsRegistered:(BOOL)arg1;
- (void)encodeProcessedPixelBuffer:(struct __CVBuffer *)arg1 time:(CDStruct_1b6d18a9)arg2 imageData:(id)arg3 processTime:(id)arg4;
- (BOOL)checkEffectsHealth;
- (void)resetEffectsLogging;
- (void)capturedPixelBuffer:(struct __CVBuffer *)arg1 depthBuffer:(struct __CVBuffer *)arg2 time:(CDStruct_1b6d18a9)arg3 imageData:(id)arg4 toClient:(id)arg5;
- (void)renderPixelBuffer:(struct __CVBuffer *)arg1 time:(CDStruct_1b6d18a9)arg2;
- (void)capturedPixelBuffer:(struct __CVBuffer *)arg1 depthDataPixelBuffer:(struct __CVBuffer *)arg2 time:(CDStruct_1b6d18a9)arg3 imageData:(id)arg4;
- (void)updateThermalLevel:(int)arg1;
- (void)clearAllStickers:(BOOL)arg1;
- (void)addStickerWithURL:(id)arg1 isFaceSticker:(BOOL)arg2 atPosition:(struct CGPoint)arg3 identifier:(id)arg4;
- (void)setMemoji:(id)arg1;
- (void)setAnimoji:(id)arg1;
- (BOOL)isFaceMeshTrackingEnabled;
- (BOOL)isEffectsOn;
- (void)registerBlocksForService;
@property(nonatomic) id <VCEffectsManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)init;

@end

