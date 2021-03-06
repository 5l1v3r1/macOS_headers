//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSStreamDelegate-Protocol.h"

@class NSData, NSOutputStream, NSString;

@interface FRUserActivityDataStreamPusher : NSObject <NSStreamDelegate>
{
    BOOL _didSendSizePreamble;
    NSOutputStream *_stream;
    NSData *_dataLeftToSend;
}

@property(nonatomic) BOOL didSendSizePreamble; // @synthesize didSendSizePreamble=_didSendSizePreamble;
@property(retain, nonatomic) NSData *dataLeftToSend; // @synthesize dataLeftToSend=_dataLeftToSend;
@property(retain, nonatomic) NSOutputStream *stream; // @synthesize stream=_stream;
- (void).cxx_destruct;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)close;
- (void)sendData:(id)arg1 overStream:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

