//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INCodableAttribute.h>

#import "NSSecureCoding.h"

@interface INCodableScalarAttribute : INCodableAttribute <NSSecureCoding>
{
    long long _type;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)dictionaryRepresentationForLanguage:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (Class)_relationshipValueTransformerClass;
- (Class)resolutionResultClass;
- (Class)objectClass;
- (long long)valueType;
- (id)initWithPropertyName:(id)arg1 type:(long long)arg2;

@end

