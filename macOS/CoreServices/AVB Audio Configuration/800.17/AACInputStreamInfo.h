//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AACStreamInfo.h"

@class AACACMPPair;

@interface AACInputStreamInfo : AACStreamInfo
{
    BOOL _mediaLockedCounterValid;
    BOOL _mediaUnlockedCounterValid;
    BOOL _streamInterruptedCounterValid;
    BOOL _sequenceNumberMismatchCounterValid;
    BOOL _mediaResetCounterValid;
    BOOL _timestampUncertainCounterValid;
    BOOL _timestampValidCounterValid;
    BOOL _timestampNotValidCounterValid;
    BOOL _unsupportedFormatCounterValid;
    BOOL _lateTimestampCounterValid;
    BOOL _earlyTimestampCounterValid;
    BOOL _framesReceivedCounterValid;
    BOOL _entitySpecific8CounterValid;
    BOOL _entitySpecific7CounterValid;
    BOOL _entitySpecific6CounterValid;
    BOOL _entitySpecific5CounterValid;
    BOOL _entitySpecific4CounterValid;
    BOOL _entitySpecific3CounterValid;
    BOOL _entitySpecific2CounterValid;
    BOOL _entitySpecific1CounterValid;
    unsigned int _mediaLockedCounter;
    unsigned int _mediaUnlockedCounter;
    unsigned int _streamInterruptedCounter;
    unsigned int _sequenceNumberMismatchCounter;
    unsigned int _mediaResetCounter;
    unsigned int _timestampUncertainCounter;
    unsigned int _timestampValidCounter;
    unsigned int _timestampNotValidCounter;
    unsigned int _unsupportedFormatCounter;
    unsigned int _lateTimestampCounter;
    unsigned int _earlyTimestampCounter;
    unsigned int _framesReceivedCounter;
    unsigned int _entitySpecific8Counter;
    unsigned int _entitySpecific7Counter;
    unsigned int _entitySpecific6Counter;
    unsigned int _entitySpecific5Counter;
    unsigned int _entitySpecific4Counter;
    unsigned int _entitySpecific3Counter;
    unsigned int _entitySpecific2Counter;
    unsigned int _entitySpecific1Counter;
    AACACMPPair *_talker;
}

@property(retain, nonatomic) AACACMPPair *talker; // @synthesize talker=_talker;
@property(nonatomic) BOOL entitySpecific1CounterValid; // @synthesize entitySpecific1CounterValid=_entitySpecific1CounterValid;
@property(nonatomic) BOOL entitySpecific2CounterValid; // @synthesize entitySpecific2CounterValid=_entitySpecific2CounterValid;
@property(nonatomic) BOOL entitySpecific3CounterValid; // @synthesize entitySpecific3CounterValid=_entitySpecific3CounterValid;
@property(nonatomic) BOOL entitySpecific4CounterValid; // @synthesize entitySpecific4CounterValid=_entitySpecific4CounterValid;
@property(nonatomic) BOOL entitySpecific5CounterValid; // @synthesize entitySpecific5CounterValid=_entitySpecific5CounterValid;
@property(nonatomic) BOOL entitySpecific6CounterValid; // @synthesize entitySpecific6CounterValid=_entitySpecific6CounterValid;
@property(nonatomic) BOOL entitySpecific7CounterValid; // @synthesize entitySpecific7CounterValid=_entitySpecific7CounterValid;
@property(nonatomic) BOOL entitySpecific8CounterValid; // @synthesize entitySpecific8CounterValid=_entitySpecific8CounterValid;
@property(nonatomic) BOOL framesReceivedCounterValid; // @synthesize framesReceivedCounterValid=_framesReceivedCounterValid;
@property(nonatomic) BOOL earlyTimestampCounterValid; // @synthesize earlyTimestampCounterValid=_earlyTimestampCounterValid;
@property(nonatomic) BOOL lateTimestampCounterValid; // @synthesize lateTimestampCounterValid=_lateTimestampCounterValid;
@property(nonatomic) BOOL unsupportedFormatCounterValid; // @synthesize unsupportedFormatCounterValid=_unsupportedFormatCounterValid;
@property(nonatomic) BOOL timestampNotValidCounterValid; // @synthesize timestampNotValidCounterValid=_timestampNotValidCounterValid;
@property(nonatomic) BOOL timestampValidCounterValid; // @synthesize timestampValidCounterValid=_timestampValidCounterValid;
@property(nonatomic) BOOL timestampUncertainCounterValid; // @synthesize timestampUncertainCounterValid=_timestampUncertainCounterValid;
@property(nonatomic) BOOL mediaResetCounterValid; // @synthesize mediaResetCounterValid=_mediaResetCounterValid;
@property(nonatomic) BOOL sequenceNumberMismatchCounterValid; // @synthesize sequenceNumberMismatchCounterValid=_sequenceNumberMismatchCounterValid;
@property(nonatomic) BOOL streamInterruptedCounterValid; // @synthesize streamInterruptedCounterValid=_streamInterruptedCounterValid;
@property(nonatomic) BOOL mediaUnlockedCounterValid; // @synthesize mediaUnlockedCounterValid=_mediaUnlockedCounterValid;
@property(nonatomic) BOOL mediaLockedCounterValid; // @synthesize mediaLockedCounterValid=_mediaLockedCounterValid;
@property(nonatomic) unsigned int entitySpecific1Counter; // @synthesize entitySpecific1Counter=_entitySpecific1Counter;
@property(nonatomic) unsigned int entitySpecific2Counter; // @synthesize entitySpecific2Counter=_entitySpecific2Counter;
@property(nonatomic) unsigned int entitySpecific3Counter; // @synthesize entitySpecific3Counter=_entitySpecific3Counter;
@property(nonatomic) unsigned int entitySpecific4Counter; // @synthesize entitySpecific4Counter=_entitySpecific4Counter;
@property(nonatomic) unsigned int entitySpecific5Counter; // @synthesize entitySpecific5Counter=_entitySpecific5Counter;
@property(nonatomic) unsigned int entitySpecific6Counter; // @synthesize entitySpecific6Counter=_entitySpecific6Counter;
@property(nonatomic) unsigned int entitySpecific7Counter; // @synthesize entitySpecific7Counter=_entitySpecific7Counter;
@property(nonatomic) unsigned int entitySpecific8Counter; // @synthesize entitySpecific8Counter=_entitySpecific8Counter;
@property(nonatomic) unsigned int framesReceivedCounter; // @synthesize framesReceivedCounter=_framesReceivedCounter;
@property(nonatomic) unsigned int earlyTimestampCounter; // @synthesize earlyTimestampCounter=_earlyTimestampCounter;
@property(nonatomic) unsigned int lateTimestampCounter; // @synthesize lateTimestampCounter=_lateTimestampCounter;
@property(nonatomic) unsigned int unsupportedFormatCounter; // @synthesize unsupportedFormatCounter=_unsupportedFormatCounter;
@property(nonatomic) unsigned int timestampNotValidCounter; // @synthesize timestampNotValidCounter=_timestampNotValidCounter;
@property(nonatomic) unsigned int timestampValidCounter; // @synthesize timestampValidCounter=_timestampValidCounter;
@property(nonatomic) unsigned int timestampUncertainCounter; // @synthesize timestampUncertainCounter=_timestampUncertainCounter;
@property(nonatomic) unsigned int mediaResetCounter; // @synthesize mediaResetCounter=_mediaResetCounter;
@property(nonatomic) unsigned int sequenceNumberMismatchCounter; // @synthesize sequenceNumberMismatchCounter=_sequenceNumberMismatchCounter;
@property(nonatomic) unsigned int streamInterruptedCounter; // @synthesize streamInterruptedCounter=_streamInterruptedCounter;
@property(nonatomic) unsigned int mediaUnlockedCounter; // @synthesize mediaUnlockedCounter=_mediaUnlockedCounter;
@property(nonatomic) unsigned int mediaLockedCounter; // @synthesize mediaLockedCounter=_mediaLockedCounter;
- (void).cxx_destruct;
- (void)updateStreamConnections;
- (void)updateStreamCounters;
- (void)updateStreamInfo;
- (void)updateWithAECPGetCounter:(id)arg1;
- (void)updateWithACMPResponse:(id)arg1;
- (id)init;

@end

