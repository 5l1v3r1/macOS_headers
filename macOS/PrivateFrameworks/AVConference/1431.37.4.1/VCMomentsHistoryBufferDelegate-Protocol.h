//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AVConference/NSObject-Protocol.h>

@class VCMomentsHistoryBuffer;

@protocol VCMomentsHistoryBufferDelegate <NSObject>
- (void)historyBuffer:(VCMomentsHistoryBuffer *)arg1 didDequeueSample:(struct opaqueCMSampleBuffer *)arg2 timestamp:(unsigned int)arg3;
@end

