//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/NSSecureCoding-Protocol.h>

@class NSString;

@interface CNChangeHistoryLabeledValueChange : NSObject <NSSecureCoding>
{
    NSString *_contactIdentifier;
    NSString *_propertyKey;
    NSString *_labeledValueIdentifier;
    long long _changeType;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) long long changeType; // @synthesize changeType=_changeType;
@property(readonly, nonatomic) NSString *labeledValueIdentifier; // @synthesize labeledValueIdentifier=_labeledValueIdentifier;
@property(readonly, copy) NSString *propertyKey; // @synthesize propertyKey=_propertyKey;
@property(readonly, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContactIdentifier:(id)arg1 propertyKey:(id)arg2 labeledValueIdentifier:(id)arg3 changeType:(long long)arg4;

@end

