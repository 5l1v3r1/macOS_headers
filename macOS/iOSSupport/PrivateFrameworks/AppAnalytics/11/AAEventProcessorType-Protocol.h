//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class AAGroup, AAProcessEvent, AASession, NSDate;

@protocol AAEventProcessorType
- (void)processEvent:(AAProcessEvent *)arg1;

@optional
- (void)didEndSession:(AASession *)arg1 endDate:(NSDate *)arg2;
- (void)didUpdateSession:(AASession *)arg1;
- (void)didStartSession:(AASession *)arg1;
- (void)didLeaveGroup:(AAGroup *)arg1;
- (void)didEnterGroup:(AAGroup *)arg1;
@end

