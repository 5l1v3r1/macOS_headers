//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AudioResourceArbitration/aura_IOController-Protocol.h>

@protocol aura_IOStreamPriv;

@protocol aura_IOControllerPriv <aura_IOController>
@property(readonly, nonatomic) unsigned long long admIOControllerID;
@property(readonly, nonatomic) unsigned int sessionToken;
- (_Bool)connectIOStream:(id <aura_IOStreamPriv>)arg1 direction:(unsigned char)arg2;
@end

