//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TCMBEEPProfile.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface HandshakeProfile : TCMBEEPProfile
{
    NSDictionary *I_remoteInfos;
}

- (void)processBEEPMessage:(id)arg1;
- (void)shakeHandsWithUserID:(id)arg1;
- (id)handshakePayloadWithUserID:(id)arg1;
- (id)remoteInfos;
- (void)setRemoteInfos:(id)arg1;
- (void)dealloc;
- (id)initWithChannel:(id)arg1;

@end

