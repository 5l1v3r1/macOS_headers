//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "KNRecordingEvent.h"

@class TSDMovieInfo, TSPLazyReference;

@interface KNRecordingMovieEvent : KNRecordingEvent
{
    TSPLazyReference *_movieInfoReference;
    long long _movieEventType;
    double _movieEventValue;
}

@property(readonly, nonatomic) double movieEventValue; // @synthesize movieEventValue=_movieEventValue;
@property(readonly, nonatomic) long long movieEventType; // @synthesize movieEventType=_movieEventType;
- (void).cxx_destruct;
- (BOOL)isIgnoredWhenSeeking;
@property(readonly, nonatomic) BOOL stopsPlayback;
@property(readonly, nonatomic) BOOL startsPlayback;
@property(readonly, nonatomic) BOOL endsScrubbing;
@property(readonly, nonatomic) BOOL beginsScrubbing;
@property(readonly, nonatomic) double rate;
@property(readonly, nonatomic) double seekTime;
@property(readonly, nonatomic) TSDMovieInfo *movieInfo;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStartTime:(double)arg1;
- (id)initWithStartTime:(double)arg1 endingScrubbingForMovieInfo:(id)arg2 withRate:(double)arg3;
- (id)initWithStartTime:(double)arg1 beginningScrubbingForMovieInfo:(id)arg2;
- (id)initWithStartTime:(double)arg1 stoppingPlaybackForMovieInfo:(id)arg2;
- (id)initWithStartTime:(double)arg1 startingPlaybackForMovieInfo:(id)arg2;
- (id)initWithStartTime:(double)arg1 movieInfo:(id)arg2 rate:(double)arg3;
- (id)initWithStartTime:(double)arg1 movieInfo:(id)arg2 seekTime:(double)arg3;
- (id)initWithStartTime:(double)arg1 movieInfo:(id)arg2 movieEventType:(long long)arg3 movieEventValue:(double)arg4;
- (void)saveToArchive:(struct RecordingEventArchive *)arg1 archiver:(id)arg2;
- (id)initWithParentEventTrack:(id)arg1 archive:(const struct RecordingEventArchive *)arg2 unarchiver:(id)arg3;

@end

