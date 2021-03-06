//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol MTLRenderPipelineState, iTermMetalDebugInfoFormatter;

@interface iTermMetalDebugDrawInfo : NSObject
{
    NSMutableDictionary *_vertexBuffers;
    NSMutableDictionary *_fragmentBuffers;
    NSMutableDictionary *_fragmentTextures;
    long long _vertexCount;
    long long _instanceCount;
    id <MTLRenderPipelineState> _renderPipelineState;
    id <iTermMetalDebugInfoFormatter> _formatter;
    NSString *_name;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) __weak id <iTermMetalDebugInfoFormatter> formatter; // @synthesize formatter=_formatter;
@property(retain, nonatomic) id <MTLRenderPipelineState> renderPipelineState; // @synthesize renderPipelineState=_renderPipelineState;
- (void).cxx_destruct;
- (void)writeToFolder:(id)arg1;
- (void)drawWithVertexCount:(unsigned long long)arg1 instanceCount:(unsigned long long)arg2;
- (void)setFragmentTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setFragmentBuffer:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setVertexBuffer:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)init;

@end

