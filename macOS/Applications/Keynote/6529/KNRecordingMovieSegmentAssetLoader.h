//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAsset, AVAudioMix, NSArray;

@interface KNRecordingMovieSegmentAssetLoader : NSObject
{
    NSArray *_movieSegments;
    double _duration;
    AVAsset *_asset;
    AVAudioMix *_audioMix;
    NSArray *_soundtrackAssets;
    float _soundtrackVolume;
    BOOL _loopsSoundtrack;
}

@property(readonly, nonatomic) AVAudioMix *audioMix; // @synthesize audioMix=_audioMix;
@property(readonly, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)p_insertTimeRange:(CDStruct_e83c9415)arg1 ofAudioTrackInAsset:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3 inComposition:(id)arg4 availableTracks:(id)arg5;
- (void)loadAssetWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithMovieSegments:(id)arg1 duration:(double)arg2 soundtrackAssets:(id)arg3 soundtrackVolume:(float)arg4 loopsSoundtrack:(BOOL)arg5;

@end

