//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CertificateRevocationContext : NSObject
{
    struct RefPtr<Safari::Certificate> _certificate;
    struct RefPtr<Safari::Certificate> _intermediateCertificate;
    double _verifyTime;
    CDUnknownBlockType _completionHandler;
}

@property(readonly, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) double verifyTime; // @synthesize verifyTime=_verifyTime;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct Certificate *intermediateCertificate;
@property(readonly, nonatomic) struct Certificate *certificate;
- (id)initWithCertificate:(Ref_66c0b376 *)arg1 intermediateCertificate:(Ref_66c0b376 *)arg2 verifyTime:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

