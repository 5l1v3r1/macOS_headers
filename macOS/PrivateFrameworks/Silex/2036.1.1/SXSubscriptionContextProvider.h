//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXSubscriptionContextProvider-Protocol.h>

@class NSString, SXSubscriptionContext;

@interface SXSubscriptionContextProvider : NSObject <SXSubscriptionContextProvider>
{
    SXSubscriptionContext *_context;
}

@property(readonly, nonatomic) SXSubscriptionContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)subscriptionContext;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

