//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SVXAudioStreamBasicDescriptionMutating.h"

@class NSString, SVXAudioStreamBasicDescription;

@interface _SVXAudioStreamBasicDescriptionMutation : NSObject <SVXAudioStreamBasicDescriptionMutating>
{
    SVXAudioStreamBasicDescription *_baseModel;
    double _sampleRate;
    unsigned int _formatID;
    unsigned int _formatFlags;
    unsigned int _bytesPerPacket;
    unsigned int _framesPerPacket;
    unsigned int _bytesPerFrame;
    unsigned int _channelsPerFrame;
    unsigned int _bitsPerChannel;
    unsigned int _reserved;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasSampleRate:1;
        unsigned int hasFormatID:1;
        unsigned int hasFormatFlags:1;
        unsigned int hasBytesPerPacket:1;
        unsigned int hasFramesPerPacket:1;
        unsigned int hasBytesPerFrame:1;
        unsigned int hasChannelsPerFrame:1;
        unsigned int hasBitsPerChannel:1;
        unsigned int hasReserved:1;
    } _mutationFlags;
}

- (void).cxx_destruct;
- (id)generate;
- (void)setReserved:(unsigned int)arg1;
- (void)setBitsPerChannel:(unsigned int)arg1;
- (void)setChannelsPerFrame:(unsigned int)arg1;
- (void)setBytesPerFrame:(unsigned int)arg1;
- (void)setFramesPerPacket:(unsigned int)arg1;
- (void)setBytesPerPacket:(unsigned int)arg1;
- (void)setFormatFlags:(unsigned int)arg1;
- (void)setFormatID:(unsigned int)arg1;
- (void)setSampleRate:(double)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

