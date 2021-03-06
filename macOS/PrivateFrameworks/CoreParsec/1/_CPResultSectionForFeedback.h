//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface _CPResultSectionForFeedback : PBCodable <NSCopying>
{
    double _rankingScore;
    NSString *_bundleIdentifier;
    NSData *_fallbackResultSection;
    NSString *_identifier;
    NSMutableArray *_results;
    struct {
        unsigned int rankingScore:1;
    } _has;
}

+ (Class)resultsType;
@property(retain, nonatomic) NSData *fallbackResultSection; // @synthesize fallbackResultSection=_fallbackResultSection;
@property(nonatomic) double rankingScore; // @synthesize rankingScore=_rankingScore;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSMutableArray *results; // @synthesize results=_results;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasFallbackResultSection;
@property(nonatomic) BOOL hasRankingScore;
@property(readonly, nonatomic) BOOL hasBundleIdentifier;
@property(readonly, nonatomic) BOOL hasIdentifier;
- (id)resultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultsCount;
- (void)addResults:(id)arg1;
- (void)clearResults;

@end

