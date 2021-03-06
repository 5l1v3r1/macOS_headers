//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioFile, SNAudioStreamAnalyzer;
@protocol OS_dispatch_queue;

@interface SNAudioFileAnalyzer : NSObject
{
    AVAudioFile *_audioFile;
    SNAudioStreamAnalyzer *_streamAnalyzer;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _wasCancelled;
}

- (void).cxx_destruct;
- (void)primeWithFormat:(id)arg1;
- (id)detailedDescription;
- (void)removeAllRequests;
- (void)removeRequest:(id)arg1;
- (BOOL)addRequest:(id)arg1 withObserver:(id)arg2 error:(id *)arg3;
- (void)cancelAnalysis;
- (void)analyzeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)analyze;
- (id)initWithURL:(id)arg1 error:(id *)arg2;

@end

