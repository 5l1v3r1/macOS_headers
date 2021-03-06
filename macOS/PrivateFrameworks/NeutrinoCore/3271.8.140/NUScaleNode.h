//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NeutrinoCore/NUAbstractScaleNode.h>

@interface NUScaleNode : NUAbstractScaleNode
{
    long long _sampleMode;
    CDStruct_1e2b2e48 _scale;
}

@property(readonly) CDStruct_912cb5d2 scale; // @synthesize scale=_scale;
- (id)_evaluateImageGeometry:(out id *)arg1;
- (id)_evaluateImage:(out id *)arg1;
- (id)resolvedNodeWithCachedInputs:(struct NSDictionary *)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (id)_settingsWithScale:(CDStruct_912cb5d2)arg1 sampleMode:(long long)arg2;
- (id)initWithPipelineState:(id)arg1 source:(id)arg2;
- (id)initWithScale:(CDStruct_912cb5d2)arg1 sampleMode:(long long)arg2 source:(id)arg3;
- (id)initWithSettings:(id)arg1 inputs:(struct NSDictionary *)arg2;

@end

