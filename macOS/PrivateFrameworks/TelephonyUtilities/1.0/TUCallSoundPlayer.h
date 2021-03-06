//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TUNSSoundPlayer;

@interface TUCallSoundPlayer : NSObject
{
    TUNSSoundPlayer *_player;
    long long _currentlyPlayingSoundType;
}

@property(nonatomic) long long currentlyPlayingSoundType; // @synthesize currentlyPlayingSoundType=_currentlyPlayingSoundType;
@property(retain, nonatomic) TUNSSoundPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isPlaying) BOOL playing;
- (void)stopPlaying;
- (BOOL)attemptToPlaySoundType:(long long)arg1 forCall:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)attemptToPlaySoundType:(long long)arg1 forCall:(id)arg2;
- (id)init;

@end

