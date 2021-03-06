//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class MLModelDescription, MLPredictionOptions, NSDictionary;

@protocol MLCustomModel
- (id <MLFeatureProvider>)predictionFromFeatures:(id <MLFeatureProvider>)arg1 options:(MLPredictionOptions *)arg2 error:(id *)arg3;
- (id)initWithModelDescription:(MLModelDescription *)arg1 parameterDictionary:(NSDictionary *)arg2 error:(id *)arg3;

@optional
- (id <MLBatchProvider>)predictionsFromBatch:(id <MLBatchProvider>)arg1 options:(MLPredictionOptions *)arg2 error:(id *)arg3;
@end

