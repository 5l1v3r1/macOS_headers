//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AudioVideoBridging/AVBMRP.h>

@class NSMutableArray;

@interface AVBMVRP : AVBMRP
{
    NSMutableArray *clients;
}

+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;
+ (id)IOClassName;
- (void)dealloc;
- (void)serviceTerminated;
- (BOOL)deregisterVLANID:(unsigned short)arg1;
- (BOOL)registerVLANID:(unsigned short)arg1;
- (void)removeClient:(id)arg1;
- (void)addClient:(id)arg1;
- (void)callbackWithArgs:(unsigned long long *)arg1 argCount:(unsigned int)arg2;

@end

