//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString, _MRContentItemProtobuf, _MRNowPlayingPlayerPathProtobuf, _MRPlaybackSessionRequestProtobuf;

@interface _MRPlaybackSessionMigrateRequestProtobuf : PBCodable <NSCopying>
{
    double _playbackPosition;
    double _playbackRate;
    _MRContentItemProtobuf *_contentItem;
    int _endpointOptions;
    NSMutableArray *_events;
    _MRPlaybackSessionRequestProtobuf *_playbackSessionRequest;
    int _playbackState;
    int _playerOptions;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
    NSString *_requestID;
    struct {
        unsigned int playbackPosition:1;
        unsigned int playbackRate:1;
        unsigned int endpointOptions:1;
        unsigned int playbackState:1;
        unsigned int playerOptions:1;
    } _has;
}

+ (Class)eventsType;
- (void).cxx_destruct;
@property(retain, nonatomic) _MRPlaybackSessionRequestProtobuf *playbackSessionRequest; // @synthesize playbackSessionRequest=_playbackSessionRequest;
@property(nonatomic) double playbackRate; // @synthesize playbackRate=_playbackRate;
@property(retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath; // @synthesize playerPath=_playerPath;
@property(retain, nonatomic) _MRContentItemProtobuf *contentItem; // @synthesize contentItem=_contentItem;
@property(nonatomic) double playbackPosition; // @synthesize playbackPosition=_playbackPosition;
@property(retain, nonatomic) NSMutableArray *events; // @synthesize events=_events;
@property(retain, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasPlaybackSessionRequest;
@property(nonatomic) BOOL hasPlaybackRate;
- (int)StringAsPlaybackState:(id)arg1;
- (id)playbackStateAsString:(int)arg1;
@property(nonatomic) BOOL hasPlaybackState;
@property(nonatomic) int playbackState; // @synthesize playbackState=_playbackState;
@property(readonly, nonatomic) BOOL hasPlayerPath;
@property(readonly, nonatomic) BOOL hasContentItem;
@property(nonatomic) BOOL hasPlaybackPosition;
- (id)eventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)eventsCount;
- (void)addEvents:(id)arg1;
- (void)clearEvents;
- (int)StringAsEndpointOptions:(id)arg1;
- (id)endpointOptionsAsString:(int)arg1;
@property(nonatomic) BOOL hasEndpointOptions;
@property(nonatomic) int endpointOptions; // @synthesize endpointOptions=_endpointOptions;
- (int)StringAsPlayerOptions:(id)arg1;
- (id)playerOptionsAsString:(int)arg1;
@property(nonatomic) BOOL hasPlayerOptions;
@property(nonatomic) int playerOptions; // @synthesize playerOptions=_playerOptions;
@property(readonly, nonatomic) BOOL hasRequestID;

@end

