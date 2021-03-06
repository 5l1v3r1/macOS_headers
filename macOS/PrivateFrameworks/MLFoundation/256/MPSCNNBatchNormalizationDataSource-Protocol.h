//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCopying.h"
#import "NSObject.h"

@class MPSCNNBatchNormalizationState, MPSCNNNormalizationGammaAndBetaState, MPSCNNNormalizationMeanAndVarianceState, NSCoder, NSString;

@protocol MPSCNNBatchNormalizationDataSource <NSObject, NSCopying>
- (NSString *)label;
- (void)purge;
- (BOOL)load;
- (float *)variance;
- (float *)mean;
- (float *)beta;
- (float *)gamma;
- (unsigned long long)numberOfFeatureChannels;

@optional
+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id <MTLDevice>)arg2;
- (id)initWithCoder:(NSCoder *)arg1;
- (void)encodeWithCoder:(NSCoder *)arg1;
- (float)epsilon;
- (BOOL)updateMeanAndVarianceWithBatchNormalizationState:(MPSCNNBatchNormalizationState *)arg1;
- (BOOL)updateGammaAndBetaWithBatchNormalizationState:(MPSCNNBatchNormalizationState *)arg1;
- (MPSCNNNormalizationMeanAndVarianceState *)updateMeanAndVarianceWithCommandBuffer:(id <MTLCommandBuffer>)arg1 batchNormalizationState:(MPSCNNBatchNormalizationState *)arg2;
- (MPSCNNNormalizationGammaAndBetaState *)updateGammaAndBetaWithCommandBuffer:(id <MTLCommandBuffer>)arg1 batchNormalizationState:(MPSCNNBatchNormalizationState *)arg2;
@end

