//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBPeer, NSDictionary;

@protocol CBPairingAgentParentDelegate <NSObject>
- (NSDictionary *)sendSyncMsg:(int)arg1 args:(NSDictionary *)arg2;
- (BOOL)sendMsg:(int)arg1 args:(NSDictionary *)arg2;
- (CBPeer *)peerWithInfo:(NSDictionary *)arg1;
@end

