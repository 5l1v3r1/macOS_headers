//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMutableData;

@interface NEIKEv2DHKeys : NSObject
{
    int _desc;
    int _type;
    int _gen1;
    int _gen2;
    NSData *_prime;
    NSData *_curveA;
    NSData *_curveB;
    NSData *_order;
    NSMutableData *_publicKey;
    unsigned long long _publicKeySize;
    struct OpaqueSecDHContext *_context;
}

- (void).cxx_destruct;
@property struct OpaqueSecDHContext *context; // @synthesize context=_context;
@property unsigned long long publicKeySize; // @synthesize publicKeySize=_publicKeySize;
@property(retain) NSMutableData *publicKey; // @synthesize publicKey=_publicKey;
@property(retain) NSData *order; // @synthesize order=_order;
@property(retain) NSData *curveB; // @synthesize curveB=_curveB;
@property(retain) NSData *curveA; // @synthesize curveA=_curveA;
@property int gen2; // @synthesize gen2=_gen2;
@property int gen1; // @synthesize gen1=_gen1;
@property(retain) NSData *prime; // @synthesize prime=_prime;
@property int type; // @synthesize type=_type;
@property int desc; // @synthesize desc=_desc;
- (void)dealloc;
- (id)createSharedSecretForECPKey:(struct ccec_full_ctx *)arg1 curveKey:(unsigned char (*)[32])arg2 remotePublicKey:(id)arg3 publicKeySize:(unsigned long long)arg4 dhContext:(struct OpaqueSecDHContext *)arg5;
- (BOOL)generatePublicKeyWithECPKey:(struct ccec_full_ctx *)arg1 curveKey:(unsigned char (*)[32])arg2;
- (BOOL)checkDHPublic;
- (BOOL)getECCP:(const struct ccec_cp **)arg1;

@end

