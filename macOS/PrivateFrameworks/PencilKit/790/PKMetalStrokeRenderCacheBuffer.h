//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PKMetalBuffer;

@interface PKMetalStrokeRenderCacheBuffer : NSObject
{
    PKMetalBuffer *_buffer;
    unsigned long long _offset;
    unsigned long long _numVertices;
}

@property(readonly, nonatomic) unsigned long long numVertices; // @synthesize numVertices=_numVertices;
@property(readonly, nonatomic) unsigned long long offset; // @synthesize offset=_offset;
- (void).cxx_destruct;
- (BOOL)lockPurgeableResourcesAddToSet:(id)arg1;
@property(readonly, nonatomic) id <MTLBuffer> vertexBuffer; // @dynamic vertexBuffer;
- (id)initWithBuffer:(id)arg1 offset:(unsigned long long)arg2 numVertices:(unsigned long long)arg3;
- (id)init;

@end

