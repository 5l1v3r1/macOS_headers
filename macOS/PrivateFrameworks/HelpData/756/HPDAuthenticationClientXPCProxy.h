//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HPDAuthenticationClient;

@interface HPDAuthenticationClientXPCProxy : NSObject
{
    HPDAuthenticationClient *_client;
}

@property(nonatomic) __weak HPDAuthenticationClient *client; // @synthesize client=_client;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithAuthenticationClient:(id)arg1;

@end

