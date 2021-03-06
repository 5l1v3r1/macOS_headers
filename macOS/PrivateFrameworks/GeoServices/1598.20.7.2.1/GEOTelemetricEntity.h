//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEOTelemetricEntity : PBCodable <NSCopying>
{
    NSString *_eventDetail;
    unsigned long long _eventValue;
    int _eventKey;
    struct {
        unsigned int has_eventValue:1;
        unsigned int has_eventKey:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) NSString *eventDetail;
@property(readonly, nonatomic) BOOL hasEventDetail;
@property(nonatomic) BOOL hasEventValue;
@property(nonatomic) unsigned long long eventValue;
- (int)StringAsEventKey:(id)arg1;
- (id)eventKeyAsString:(int)arg1;
@property(nonatomic) BOOL hasEventKey;
@property(nonatomic) int eventKey;

@end

