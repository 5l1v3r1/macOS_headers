//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AVFoundation/AVAsset.h>

@interface AVAsset (TSUAdditions)
+ (id)keyPathsForValuesAffectingTsu_isPlayable;
+ (id)tsu_playableKeysWithKeys:(id)arg1;
+ (id)keyPathsForValuesAffectingNaturalSizeWithPreferredTransforms;
- (BOOL)p_doesTrack:(id)arg1 matchCodecTypes:(id)arg2;
@property(readonly, nonatomic) BOOL tsu_isPlayable;
@property(readonly, nonatomic) struct CGSize naturalSizeWithPreferredTransforms;
@end

