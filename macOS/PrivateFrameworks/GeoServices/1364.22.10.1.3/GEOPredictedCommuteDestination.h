//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOPredictedCommuteDestination : PBCodable <NSCopying>
{
    double _confidenceScore;
    int _destinationType;
    BOOL _chosen;
    struct {
        unsigned int confidenceScore:1;
        unsigned int destinationType:1;
        unsigned int chosen:1;
    } _has;
}

@property(nonatomic) BOOL chosen; // @synthesize chosen=_chosen;
@property(nonatomic) double confidenceScore; // @synthesize confidenceScore=_confidenceScore;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasChosen;
@property(nonatomic) BOOL hasConfidenceScore;
- (int)StringAsDestinationType:(id)arg1;
- (id)destinationTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasDestinationType;
@property(nonatomic) int destinationType; // @synthesize destinationType=_destinationType;

@end

