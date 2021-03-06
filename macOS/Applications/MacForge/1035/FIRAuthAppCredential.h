//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface FIRAuthAppCredential : NSObject <NSSecureCoding>
{
    NSString *_receipt;
    NSString *_secret;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSString *secret; // @synthesize secret=_secret;
@property(readonly, nonatomic) NSString *receipt; // @synthesize receipt=_receipt;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReceipt:(id)arg1 secret:(id)arg2;

@end

