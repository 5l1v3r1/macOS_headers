//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface IDSCTPNRValidationMechanism : NSObject <NSCopying>
{
    long long _type;
    NSString *_context;
}

+ (id)SMSLessMechanism;
+ (id)SMSMechanismWithContext:(id)arg1;
@property(readonly, nonatomic) NSString *context; // @synthesize context=_context;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(long long)arg1 context:(id)arg2;

@end

