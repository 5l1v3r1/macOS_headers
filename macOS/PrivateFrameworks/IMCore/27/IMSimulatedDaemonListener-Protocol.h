//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class IMSimulatedDaemonController, NSArray, NSData, NSString;

@protocol IMSimulatedDaemonListener
- (void)simulatedDaemon:(IMSimulatedDaemonController *)arg1 willSendBalloonPayload:(NSData *)arg2 attachments:(NSArray *)arg3 messageGUID:(NSString *)arg4 bundleID:(NSString *)arg5;
@end

