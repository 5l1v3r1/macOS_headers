//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HMFoundation/HMFHardwareAddress.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface HMFMACAddress : HMFHardwareAddress <NSCopying, NSSecureCoding>
{
}

- (id)initWithAddressData:(id)arg1;
- (id)initWithAddressString:(id)arg1 length:(unsigned long long)arg2;
- (id)initWithMACAddressString:(id)arg1;

@end

