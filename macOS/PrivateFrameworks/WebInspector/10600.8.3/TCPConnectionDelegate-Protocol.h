//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WebInspector/NSObject-Protocol.h>

@class NSData, TCPConnection;

@protocol TCPConnectionDelegate <NSObject>

@optional
- (void)tcpConnectionDidClose:(TCPConnection *)arg1;
- (void)tcpConnection:(TCPConnection *)arg1 didReceiveMessage:(NSData *)arg2;
@end

