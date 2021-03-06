//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSObject<OS_dispatch_queue>;

@interface MTLCommandQueueDescriptor : NSObject <NSCopying>
{
}

+ (id)commandQueueDescriptor;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(nonatomic) NSObject<OS_dispatch_queue> *commitQueue; // @dynamic commitQueue;
@property(nonatomic) BOOL commitSynchronously; // @dynamic commitSynchronously;
@property(nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @dynamic completionQueue;
@property(nonatomic) unsigned long long maxCommandBufferCount; // @dynamic maxCommandBufferCount;
@property(nonatomic) unsigned long long qosLevel; // @dynamic qosLevel;

@end

