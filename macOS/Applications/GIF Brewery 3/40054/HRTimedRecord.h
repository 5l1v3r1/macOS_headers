//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HRRecorder.h"

@class NSDate, NSDictionary, NSMutableArray, NSObject<OS_dispatch_source>, NSString, NSURL;

@interface HRTimedRecord : NSObject <HRRecorder>
{
    NSDate *_startTime;
    NSObject<OS_dispatch_source> *_timer;
    NSDictionary *_recordingOptions;
    id <HRRecorder> _currentRecorder;
    Class _recorderClass;
    double _recordingLength;
    double _intervalLength;
    id <HRTimedRecordDelegate> _delegate;
    NSMutableArray *_recordedURLs;
    NSURL *_directoryURL;
}

@property(retain, nonatomic) NSURL *directoryURL; // @synthesize directoryURL=_directoryURL;
@property(retain, nonatomic) NSMutableArray *recordedURLs; // @synthesize recordedURLs=_recordedURLs;
@property(nonatomic) __weak id <HRTimedRecordDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double intervalLength; // @synthesize intervalLength=_intervalLength;
@property(nonatomic) double recordingLength; // @synthesize recordingLength=_recordingLength;
@property(retain, nonatomic) Class recorderClass; // @synthesize recorderClass=_recorderClass;
- (void).cxx_destruct;
- (void)updateFolder:(id)arg1;
- (void)finishRecording:(CDUnknownBlockType)arg1;
- (void)finishRecording;
- (void)processRecording;
@property(readonly, nonatomic, getter=isRecording) BOOL recording;
- (BOOL)startRecording;
- (id)initWithRecordingURL:(id)arg1 options:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

