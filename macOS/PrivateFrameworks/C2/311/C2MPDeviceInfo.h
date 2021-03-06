//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface C2MPDeviceInfo : PBCodable <NSCopying>
{
    NSMutableArray *_internalTestConfigs;
    NSString *_processName;
    NSString *_processUuid;
    NSString *_processVersion;
    NSString *_productBuild;
    NSString *_productName;
    NSString *_productType;
    NSString *_productVersion;
    NSString *_userDefaultTestName;
    BOOL _isAppleInternal;
    struct {
        unsigned int isAppleInternal:1;
    } _has;
}

+ (Class)internalTestConfigType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *internalTestConfigs; // @synthesize internalTestConfigs=_internalTestConfigs;
@property(retain, nonatomic) NSString *userDefaultTestName; // @synthesize userDefaultTestName=_userDefaultTestName;
@property(retain, nonatomic) NSString *processUuid; // @synthesize processUuid=_processUuid;
@property(retain, nonatomic) NSString *processVersion; // @synthesize processVersion=_processVersion;
@property(retain, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(nonatomic) BOOL isAppleInternal; // @synthesize isAppleInternal=_isAppleInternal;
@property(retain, nonatomic) NSString *productBuild; // @synthesize productBuild=_productBuild;
@property(retain, nonatomic) NSString *productVersion; // @synthesize productVersion=_productVersion;
@property(retain, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(retain, nonatomic) NSString *productName; // @synthesize productName=_productName;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)internalTestConfigAtIndex:(unsigned long long)arg1;
- (unsigned long long)internalTestConfigsCount;
- (void)addInternalTestConfig:(id)arg1;
- (void)clearInternalTestConfigs;
@property(readonly, nonatomic) BOOL hasUserDefaultTestName;
@property(readonly, nonatomic) BOOL hasProcessUuid;
@property(readonly, nonatomic) BOOL hasProcessVersion;
@property(readonly, nonatomic) BOOL hasProcessName;
@property(nonatomic) BOOL hasIsAppleInternal;
@property(readonly, nonatomic) BOOL hasProductBuild;
@property(readonly, nonatomic) BOOL hasProductVersion;
@property(readonly, nonatomic) BOOL hasProductType;
@property(readonly, nonatomic) BOOL hasProductName;

@end

