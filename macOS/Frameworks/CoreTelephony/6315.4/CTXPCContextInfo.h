//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface CTXPCContextInfo : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_uuid;
    NSString *_accountID;
    long long _slotID;
}

+ (BOOL)supportsSecureCoding;
+ (id)contextWithUUID:(id)arg1 andAccountID:(id)arg2 andSlot:(long long)arg3;
@property(readonly, nonatomic) long long slotID; // @synthesize slotID=_slotID;
@property(readonly, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)context;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithUUID:(id)arg1 andAccountID:(id)arg2 andSlot:(long long)arg3;

@end

