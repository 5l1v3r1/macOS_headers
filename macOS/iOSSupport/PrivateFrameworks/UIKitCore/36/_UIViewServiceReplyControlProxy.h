//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIViewServiceProxy_ReplyControl-Protocol.h>

@class NSLock, _UIViewServiceReplyAwaitingTrampoline, _UIViewServiceReplyControlTrampoline;

__attribute__((visibility("hidden")))
@interface _UIViewServiceReplyControlProxy : NSObject <_UIViewServiceProxy_ReplyControl>
{
    id _target;
    _UIViewServiceReplyControlTrampoline *_controlTrampoline;
    _UIViewServiceReplyAwaitingTrampoline *_awaitingTrampoline;
    NSLock *_lock;
}

+ (id)proxyWithTarget:(id)arg1;
- (void).cxx_destruct;
- (id)_deliveringRepliesAsynchronously;
- (id)_awaitingReply;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;

@end

