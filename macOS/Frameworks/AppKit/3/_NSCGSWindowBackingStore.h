//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSCGSWindowBackingStore.h>

@class NSCGSWindowBuffer, NSObject<OS_dispatch_source>;

__attribute__((visibility("hidden")))
@interface _NSCGSWindowBackingStore : NSCGSWindowBackingStore
{
    unsigned int _windowID;
    void *_deviceID;
    unsigned char _flags;
    double _scale;
    unsigned int _depth;
    unsigned int _workingDepth;
    struct CGColorSpace *_colorSpace;
    struct CGColorSpace *_workingColorSpace;
    unsigned int _opaque:1;
    unsigned int _keepsExcessAllocation:1;
    unsigned int _attached:1;
    struct _opaque_pthread_mutex_t _backBufferMutex;
    NSCGSWindowBuffer *_backBuffer;
    void *_backBufferBytes;
    unsigned long long _backBufferByteCount;
    unsigned int _backBufferIsPurgeable:1;
    unsigned int _backBufferPurgeableTimerIsArmed:1;
    unsigned int _flushOnUnlock:1;
    NSObject<OS_dispatch_source> *_backBufferPurgeableTimer;
    struct CGSRegionObject *_backBufferDefinedShape;
    struct CGSRegionObject *_backBufferDirtyShape;
    struct CGSRegionObject *_backBufferFlushShape;
}

- (void)flushBackBufferInRect:(struct CGRect)arg1;
- (void)flushBackBufferInRegion:(struct CGSRegionObject *)arg1;
- (void)dirtyBackBufferInRect:(struct CGRect)arg1;
- (void)dirtyBackBufferInRegion:(struct CGSRegionObject *)arg1;
- (void)defineBackBufferInRect:(struct CGRect)arg1;
- (void)defineBackBufferInRegion:(struct CGSRegionObject *)arg1;
- (void)unlockBackBuffer;
- (void)lockBackBuffer;
- (id)backBuffer;
- (struct CGContext *)makeDrawingContext;
- (struct CGImage *)imageInRect:(struct CGRect)arg1;
- (void)invalidateAlphaShape;
- (void)setKeepsExcessAllocation:(BOOL)arg1;
- (BOOL)keepsExcessAllocation;
- (void)setDepth:(unsigned int)arg1;
- (unsigned int)depth;
- (void)setColorSpace:(struct CGColorSpace *)arg1;
- (struct CGColorSpace *)colorSpace;
- (void)setOpaque:(BOOL)arg1;
- (BOOL)isOpaque;
- (void)setScale:(double)arg1;
- (double)scale;
- (void)setAttached:(BOOL)arg1;
- (BOOL)isAttached;
- (void)setWorkingDepth:(unsigned int)arg1;
- (unsigned int)workingDepth;
- (void)setWorkingColorSpace:(struct CGColorSpace *)arg1;
- (struct CGColorSpace *)workingColorSpace;
- (struct CGSize)size;
- (void)dealloc;
- (id)initWithWindowID:(unsigned int)arg1;

@end

