//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NTPBDate;

@interface NTPBFeedViewportEdition : PBCodable <NSCopying>
{
    NTPBDate *_feedDateRangeEnd;
    NTPBDate *_feedDateRangeStart;
    NTPBDate *_keyDate;
}

@property(retain, nonatomic) NTPBDate *feedDateRangeEnd; // @synthesize feedDateRangeEnd=_feedDateRangeEnd;
@property(retain, nonatomic) NTPBDate *feedDateRangeStart; // @synthesize feedDateRangeStart=_feedDateRangeStart;
@property(retain, nonatomic) NTPBDate *keyDate; // @synthesize keyDate=_keyDate;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasFeedDateRangeEnd;
@property(readonly, nonatomic) BOOL hasFeedDateRangeStart;
@property(readonly, nonatomic) BOOL hasKeyDate;
- (void)dealloc;

@end

