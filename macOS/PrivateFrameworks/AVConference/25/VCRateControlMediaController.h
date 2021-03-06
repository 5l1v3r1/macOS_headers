//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCStatisticsCollector, SenderLargeFrameInfo;

__attribute__((visibility("hidden")))
@interface VCRateControlMediaController : NSObject
{
    id _mediaControllerDelegate;
    AVCStatisticsCollector *_statisticsCollector;
    struct tagHANDLE *_hMediaQueue;
    unsigned int _videoSendingBitrate;
    unsigned int _audioSendingBitrate;
    unsigned int _minTargetBitrate;
    unsigned int _targetBitrate;
    BOOL _isVideoStoppedByVCRateControl;
    BOOL _isVideoStoppedByBaseband;
    BOOL _isVideoPausedByUser;
    BOOL _isAudioOnly;
    BOOL _isBasebandFlushing;
    BOOL _isAudioStall;
    BOOL _isInThrottlingMode;
    BOOL _allowVideoStop;
    int _audioFractionTier;
    double _lastAudioFractionChangeTime;
    double _lastAudioEnoughRateTime;
    unsigned char _videoPayloadType;
    unsigned short _videoTransactionID;
    unsigned int _videoRefreshFrameTimestamp;
    unsigned int _videoRefreshFramePacketCount;
    double _lastVideoKeyFrameTime;
    SenderLargeFrameInfo *_senderLargeFrameInfo;
    unsigned int _probingLargeFrameSize;
    unsigned int _probingLargeFrameSizeCap;
    unsigned int _probingSequencePacketSize;
    unsigned int _probingSequencePacketCount;
    BOOL _shouldDisableLargeFrameRequestsWhenInitialRampUp;
    BOOL _isRateLimitedMaxTimeExceeded;
    BOOL _isSenderProbingEnabled;
    int _basebandFlushCount;
    int _basebandFlushedVideoCount;
    int _basebandFlushedAudioCount;
    double _lastBasebandFlushCountChangeTime;
    double _lastBasebandFlushAudioTime;
    double _lastBasebandFlushVideoTime;
    unsigned short _videoFlushTransactionID;
    unsigned int _audioStallBitrate;
    double _lastAudioStallFlushTime;
    BOOL _isRTPFlushBasebandFromVCRateControl;
    unsigned int _basebandAverageBitrate;
    unsigned int _basebandTotalQueueDepth;
    unsigned int _basebandFlushableQueueDepth;
    double _basebandExpectedQueuingDelay;
    double _basebandNBDCD;
    double _lastBasebandHighNBDCDTime;
    BOOL _isBasebandQueuingDelayHigh;
    void *_logBasebandDump;
    unsigned int _afrcRemoteEstimatedBandwidth;
}

@property(readonly, nonatomic) double lastVideoKeyFrameTime; // @synthesize lastVideoKeyFrameTime=_lastVideoKeyFrameTime;
@property(nonatomic) int audioFractionTier; // @synthesize audioFractionTier=_audioFractionTier;
@property(nonatomic) BOOL isRTPFlushBasebandFromVCRateControl; // @synthesize isRTPFlushBasebandFromVCRateControl=_isRTPFlushBasebandFromVCRateControl;
@property(nonatomic) unsigned int afrcRemoteEstimatedBandwidth; // @synthesize afrcRemoteEstimatedBandwidth=_afrcRemoteEstimatedBandwidth;
@property(nonatomic) BOOL shouldDisableLargeFrameRequestsWhenInitialRampUp; // @synthesize shouldDisableLargeFrameRequestsWhenInitialRampUp=_shouldDisableLargeFrameRequestsWhenInitialRampUp;
@property(nonatomic) BOOL isRateLimitedMaxTimeExceeded; // @synthesize isRateLimitedMaxTimeExceeded=_isRateLimitedMaxTimeExceeded;
@property(nonatomic) BOOL allowVideoStop; // @synthesize allowVideoStop=_allowVideoStop;
@property(readonly, nonatomic) BOOL isInThrottlingMode; // @synthesize isInThrottlingMode=_isInThrottlingMode;
@property(nonatomic) BOOL isAudioOnly; // @synthesize isAudioOnly=_isAudioOnly;
@property(nonatomic) BOOL isSenderProbingEnabled; // @synthesize isSenderProbingEnabled=_isSenderProbingEnabled;
@property(readonly, nonatomic) BOOL isVideoStoppedByVCRateControl; // @synthesize isVideoStoppedByVCRateControl=_isVideoStoppedByVCRateControl;
@property(readonly, nonatomic) int basebandFlushedAudioCount; // @synthesize basebandFlushedAudioCount=_basebandFlushedAudioCount;
@property(readonly, nonatomic) int basebandFlushedVideoCount; // @synthesize basebandFlushedVideoCount=_basebandFlushedVideoCount;
@property(nonatomic) double lastBasebandFlushCountChangeTime; // @synthesize lastBasebandFlushCountChangeTime=_lastBasebandFlushCountChangeTime;
@property(nonatomic) int basebandFlushCount; // @synthesize basebandFlushCount=_basebandFlushCount;
@property(nonatomic) unsigned int targetBitrate; // @synthesize targetBitrate=_targetBitrate;
@property(nonatomic) unsigned int minTargetBitrate; // @synthesize minTargetBitrate=_minTargetBitrate;
@property(nonatomic) unsigned int audioSendingBitrate; // @synthesize audioSendingBitrate=_audioSendingBitrate;
@property(nonatomic) unsigned int videoSendingBitrate; // @synthesize videoSendingBitrate=_videoSendingBitrate;
@property(retain, nonatomic) AVCStatisticsCollector *statisticsCollector; // @synthesize statisticsCollector=_statisticsCollector;
- (void)updateLargeFrameSizeWithBandwidth:(unsigned int)arg1;
- (void)updateProbingLargeFrameSizeCap;
- (BOOL)isProbingLargeFrameRequiredAtTime:(double)arg1;
- (void)printLargeFrameStatsAtTime:(double)arg1 timeSinceLastProbingSequence:(double)arg2 frameSize:(unsigned int)arg3 wastedBytes:(unsigned int)arg4 isFrameRequested:(BOOL)arg5;
- (void)scheduleProbingSequenceAtTime:(double)arg1;
- (void)increaseBasebandFlushCountInternallyWithSuggestion:(struct VCRateControlMediaSuggestion *)arg1;
- (BOOL)increaseFlushCountForVideoRefresh:(int)arg1 transactionID:(unsigned short)arg2;
- (void)recordVideoRefreshFrameWithTimestamp:(unsigned int)arg1 payloadType:(unsigned char)arg2 packetCount:(unsigned int)arg3 isKeyFrame:(BOOL)arg4;
- (void)resetAFRCVideoSendingBitrate;
- (void)scheduleProbingSequenceWithFrameSize:(unsigned int)arg1 paddingBytes:(unsigned int)arg2 isProbingSequenceScheduled:(char *)arg3;
@property(readonly, nonatomic) unsigned int probingSequencePacketSize; // @synthesize probingSequencePacketSize=_probingSequencePacketSize;
@property(readonly, nonatomic) unsigned int probingSequencePacketCount; // @synthesize probingSequencePacketCount=_probingSequencePacketCount;
@property(readonly, nonatomic) unsigned int probingLargeFrameSize; // @synthesize probingLargeFrameSize=_probingLargeFrameSize;
- (BOOL)rampUpAudioFraction;
- (BOOL)rampDownAudioFraction;
- (BOOL)didMediaGetFlushedWithPayloadType:(unsigned char)arg1 transactionID:(unsigned short)arg2 packetDropped:(unsigned short)arg3 sequenceNumberArray:(unsigned short *)arg4;
- (void)decreaseFlushCount:(int)arg1;
@property(readonly, nonatomic) BOOL isVideoStopped;
- (void)resumeVideoByVCRateControl;
- (void)stopVideoByVCRateControl;
- (void)pauseVideoByUser:(BOOL)arg1;
- (void)updateBasebandSuggestionWithStatistics:(CDStruct_b21f1e06)arg1;
- (void)computePacketLossWithRemoteInfo:(struct VCRCMediaPLPFromRemoteInfo *)arg1;
- (void)getMediaQueueRateChangeCounter:(unsigned int *)arg1 rateChangeTime:(double *)arg2;
- (void)getMediaQueueInVideoBitrate:(double *)arg1 outVideoBitrate:(double *)arg2 inAudioBitrate:(double *)arg3 outAudioBitrate:(double *)arg4;
- (void)enableBasebandLogDump:(void *)arg1;
- (void)dealloc;
- (id)initWithMediaQueue:(struct tagHANDLE *)arg1 delegate:(id)arg2;

@end

