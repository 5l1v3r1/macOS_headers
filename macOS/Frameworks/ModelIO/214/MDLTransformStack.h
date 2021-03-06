//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ModelIO/MDLTransformComponent-Protocol.h>
#import <ModelIO/NSCopying-Protocol.h>

@class CAAnimation, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface MDLTransformStack : NSObject <NSCopying, MDLTransformComponent>
{
    BOOL _resetsTransform;
    NSMutableArray *_transformOps;
    NSMutableDictionary *_animatedValues;
}

+     // Error parsing type: {?=[4]}32@0:8@16d24, name: globalTransformWithObject:atTime:
+     // Error parsing type: {?=[4]}32@0:8@16d24, name: localTransformWithObject:atTime:
@property(retain, nonatomic) NSMutableDictionary *animatedValues; // @synthesize animatedValues=_animatedValues;
@property(copy, nonatomic) NSMutableArray *transformOps; // @synthesize transformOps=_transformOps;
@property(nonatomic) BOOL resetsTransform; // @synthesize resetsTransform=_resetsTransform;
- (void).cxx_destruct;
@property(readonly, nonatomic) CAAnimation *transformAnimation;
- (id)decomposedTransformAnimation;
- (_Bool)isScaleRotateTransformOrder;
- (void)clearTransformStack;
-     // Error parsing type: {?=[4]}24@0:8d16, name: localTransformAtTime:
-     // Error parsing type: v80@0:8{?=[4]}16, name: setLocalTransform:
-     // Error parsing type: v88@0:8{?=[4]}16d80, name: setLocalTransform:forTime:
// Error parsing type for property matrix:
// Property attributes: T{?=[4]},N

-     // Error parsing type: {?=[4]}24@0:8d16, name: double4x4AtTime:
-     // Error parsing type: {?=[4]}24@0:8d16, name: float4x4AtTime:
- (unsigned long long)count;
- (id)animatedValueWithName:(id)arg1;
- (id)addOrientOp:(id)arg1 inverse:(_Bool)arg2;
- (id)addMatrixOp:(id)arg1 inverse:(_Bool)arg2;
- (id)addScaleOp:(id)arg1 inverse:(_Bool)arg2;
- (id)addRotateOp:(id)arg1 order:(unsigned long long)arg2 inverse:(_Bool)arg3;
- (id)addRotateZOp:(id)arg1 inverse:(_Bool)arg2;
- (id)addRotateYOp:(id)arg1 inverse:(_Bool)arg2;
- (id)addRotateXOp:(id)arg1 inverse:(_Bool)arg2;
- (id)addTranslateOp:(id)arg1 inverse:(_Bool)arg2;
- (id)animatedScalarWithName:(id)arg1 shouldCreateIfMissing:(BOOL)arg2;
- (id)animatedMatrix4x4WithName:(id)arg1 shouldCreateIfMissing:(BOOL)arg2;
- (id)animatedQuaternionWithName:(id)arg1 shouldCreateIfMissing:(BOOL)arg2;
- (id)animatedVector4WithName:(id)arg1 shouldCreateIfMissing:(BOOL)arg2;
- (id)animatedVector3WithName:(id)arg1 shouldCreateIfMissing:(BOOL)arg2;
- (id)init;
@property(readonly, copy, nonatomic) NSArray *keyTimes;
@property(readonly, nonatomic) double maximumTime;
@property(readonly, nonatomic) double minimumTime;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

