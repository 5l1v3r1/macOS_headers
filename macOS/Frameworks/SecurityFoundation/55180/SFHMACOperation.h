//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SecurityFoundation/SFMessageAuthenticationCodeOperation.h>

@protocol SFDigestOperation;

__attribute__((visibility("hidden")))
@interface SFHMACOperation : SFMessageAuthenticationCodeOperation
{
    id _hmacOperationInternal;
}

- (void).cxx_destruct;
@property(copy, nonatomic) id <SFDigestOperation> digestOperation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDigestOperation:(id)arg1;
- (id)init;

@end

