//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpotlightServerKit/MDSToken.h>

@class NSObject<OS_dispatch_queue>;

@interface MDSObjectToken : MDSToken
{
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)description;
@property(readonly) NSObject<OS_dispatch_queue> *queue;
- (unsigned int)machPort;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

@end

