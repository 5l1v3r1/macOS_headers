//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol PGGraphIngestScene <NSObject>
@property(readonly, nonatomic) BOOL isReliable;
@property(readonly, nonatomic) unsigned long long numberOfSearchConfidenceAssets;
@property(readonly, nonatomic) unsigned long long numberOfHighConfidenceAssets;
@property(readonly, nonatomic) unsigned long long numberOfAssets;
@property(readonly, nonatomic) double confidence;
@property(readonly, nonatomic) double relevance;
@property(readonly, nonatomic) NSString *identifier;
@end

