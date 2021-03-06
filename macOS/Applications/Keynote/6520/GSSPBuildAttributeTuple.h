//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GSSPPersistableObject.h"

#import "GSSPAutoDecodable.h"

@class KNBuildAttributeValue, KNBuildChunkIdentifier, NSString, NSUUID;

@interface GSSPBuildAttributeTuple : GSSPPersistableObject <GSSPAutoDecodable>
{
    NSString *mProperty;
    KNBuildAttributeValue *mAttributeValue;
    KNBuildChunkIdentifier *mBuildChunkIdentifier;
    NSUUID *mBuildId;
    BOOL mDefinedAttributeValue;
    BOOL mDefinedBuildChunkIdentifier;
    BOOL mDefinedBuildId;
}

+ (Class)realClass;
+ (void)registerRealGsspClass:(Class)arg1;
+ (CDUnknownFunctionPointerType)defaultDecodeConversionFunc;
+ (CDUnknownFunctionPointerType)autoDecodeConversionFunc;
+ (void)setAutoDecodeConversionFuncForDocServer:(CDUnknownFunctionPointerType)arg1;
+ (Class)autoDecodedClass;
@property(readonly, nonatomic) BOOL definedBuildId; // @synthesize definedBuildId=mDefinedBuildId;
@property(readonly, nonatomic) BOOL definedBuildChunkIdentifier; // @synthesize definedBuildChunkIdentifier=mDefinedBuildChunkIdentifier;
@property(readonly, nonatomic) BOOL definedAttributeValue; // @synthesize definedAttributeValue=mDefinedAttributeValue;
- (void).cxx_destruct;
- (id)description;
- (id)dspClassName;
- (id)jsonNSDictionaryValue;
- (void)populateJsonNSDictionaryValueToDictionary:(id)arg1;
- (int)p_getDiffEncodingScoreWith:(id)arg1;
- (void)p_populateStructHashKey:(struct GSSPHashKeyBuilder *)arg1;
- (unsigned long long)p_getStructHashKeyLength;
- (int)getStructHashId;
- (void)serializeRequiredFieldsWithSerializationContext:(struct GSSPSerializationContext *)arg1 withNextFieldNeedSerialize:(BOOL)arg2 diffBy:(id)arg3;
- (void)serializeOptionalFieldsWithSerializationContext:(struct GSSPSerializationContext *)arg1 withNextFieldNeedSerialize:(BOOL)arg2 diffBy:(id)arg3;
- (id)dspTypeIdString;
- (void)populateRequiredField:(int)arg1 fromContext:(struct GSSPDeserializationContext *)arg2;
- (void)populateOptionalField:(int)arg1 fromContext:(struct GSSPDeserializationContext *)arg2;
- (void)shallowCopyAllFieldsFrom:(id)arg1;
- (BOOL)clearBuildId;
- (BOOL)clearBuildChunkIdentifier;
- (BOOL)clearAttributeValue;
- (void)setBuildId:(id)arg1;
- (id)buildId;
- (void)setBuildChunkIdentifier:(id)arg1;
- (id)buildChunkIdentifier;
- (void)setAttributeValue:(id)arg1;
- (id)attributeValue;
- (void)setProperty:(id)arg1;
- (id)property;

@end

