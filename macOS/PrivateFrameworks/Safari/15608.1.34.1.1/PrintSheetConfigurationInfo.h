//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _WKFrameHandle;

__attribute__((visibility("hidden")))
@interface PrintSheetConfigurationInfo : NSObject
{
    BOOL _waitUntilDone;
    _WKFrameHandle *_frameHandle;
}

@property(readonly, nonatomic) _WKFrameHandle *frameHandle; // @synthesize frameHandle=_frameHandle;
@property(readonly, nonatomic, getter=shouldWaitUntilDone) BOOL waitUntilDone; // @synthesize waitUntilDone=_waitUntilDone;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrameHandle:(id)arg1 shouldWaitUntilDone:(BOOL)arg2;

@end

