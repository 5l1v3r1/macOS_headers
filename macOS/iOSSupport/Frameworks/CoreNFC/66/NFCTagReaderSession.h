//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreNFC/NFCReaderSession.h>

@protocol NFCTag;

@interface NFCTagReaderSession : NFCReaderSession
{
    id <NFCTag> _connectedTag;
    id _swiftDelegateWrapper;
}

+ (BOOL)readingAvailable;
- (void)didDetectTags:(id)arg1;
- (void)_callbackDidBecomeActive;
- (void)_callbackDidInvalidateWithError:(id)arg1;
- (void)connectToTag:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)restartPolling;
@property(readonly, retain, nonatomic) id <NFCTag> connectedTag;
- (void)dealloc;
- (id)initWithPollingOption:(long long)arg1 swiftDelegate:(id)arg2 queue:(id)arg3;
- (id)initWithPollingOption:(long long)arg1 delegate:(id)arg2 queue:(id)arg3;
- (id)initWithPollingOption:(long long)arg1 delegate:(id)arg2 delegateType:(long long)arg3 queue:(id)arg4;
- (id)initWithDelegate:(id)arg1 sessionDelegateType:(long long)arg2 queue:(id)arg3 pollMethod:(unsigned long long)arg4 sessionConfig:(unsigned long long)arg5;

@end

