//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Metal/MTLFence-Protocol.h>

@class MTLIOAccelDevice, NSString;
@protocol MTLDevice;

@interface MTLIOAccelFence : NSObject <MTLFence>
{
    MTLIOAccelDevice<MTLDevice> *_device;
    unsigned int _fenceIndex;
    NSString *_label;
}

@property(copy) NSString *label; // @synthesize label=_label;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 fenceIndex:(unsigned int)arg2;
@property(readonly) id <MTLDevice> device;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

