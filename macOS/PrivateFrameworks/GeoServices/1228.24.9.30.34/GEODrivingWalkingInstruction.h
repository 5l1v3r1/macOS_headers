//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOFormattedString, NSMutableArray;

@interface GEODrivingWalkingInstruction : PBCodable <NSCopying>
{
    NSMutableArray *_continueCommands;
    GEOFormattedString *_distance;
    NSMutableArray *_mergeCommands;
    NSMutableArray *_normalCommands;
}

+ (Class)mergeCommandType;
+ (Class)continueCommandType;
+ (Class)normalCommandType;
@property(retain, nonatomic) NSMutableArray *mergeCommands; // @synthesize mergeCommands=_mergeCommands;
@property(retain, nonatomic) NSMutableArray *continueCommands; // @synthesize continueCommands=_continueCommands;
@property(retain, nonatomic) NSMutableArray *normalCommands; // @synthesize normalCommands=_normalCommands;
@property(retain, nonatomic) GEOFormattedString *distance; // @synthesize distance=_distance;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)mergeCommandAtIndex:(unsigned long long)arg1;
- (unsigned long long)mergeCommandsCount;
- (void)addMergeCommand:(id)arg1;
- (void)clearMergeCommands;
- (id)continueCommandAtIndex:(unsigned long long)arg1;
- (unsigned long long)continueCommandsCount;
- (void)addContinueCommand:(id)arg1;
- (void)clearContinueCommands;
- (id)normalCommandAtIndex:(unsigned long long)arg1;
- (unsigned long long)normalCommandsCount;
- (void)addNormalCommand:(id)arg1;
- (void)clearNormalCommands;
@property(readonly, nonatomic) BOOL hasDistance;
- (void)dealloc;

@end

