//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GSSPMessageBase.h"

#import "GSSPAutoDecodable-Protocol.h"

@class NSArray, TSCHChartStyle, TSCHLegendStyle, TSCHReferenceLineStyle;

@interface GSSPChartStyleState : GSSPMessageBase <GSSPAutoDecodable>
{
    TSCHChartStyle *mChartStyle;
    TSCHLegendStyle *mLegendStyle;
    vector_d427a8b4 mValueAxisStyleList;
    vector_d427a8b4 mCategoryAxisStyleList;
    vector_3de2eb43 mSeriesThemeStyleList;
    vector_3de2eb43 mSeriesPrivateStyleList;
    vector_0fdc101f mParagraphStyleList;
    NSArray *mReferenceLineStyleList;
    TSCHReferenceLineStyle *mReferenceLineThemeStyle;
}

+ (Class)realClass;
+ (void)registerRealGsspClass:(Class)arg1;
+ (CDUnknownFunctionPointerType)defaultDecodeConversionFunc;
+ (CDUnknownFunctionPointerType)autoDecodeConversionFunc;
+ (void)setAutoDecodeConversionFuncForDocServer:(CDUnknownFunctionPointerType)arg1;
+ (Class)autoDecodedClass;
- (id).cxx_construct;
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
- (void)setReferenceLineThemeStyle:(id)arg1;
- (id)referenceLineThemeStyle;
- (void)setReferenceLineStyleList:(id)arg1;
- (id)referenceLineStyleList;
- (void)setParagraphStyleList:(const vector_0fdc101f *)arg1;
- (vector_0fdc101f *)paragraphStyleList;
- (void)setSeriesPrivateStyleList:(const vector_3de2eb43 *)arg1;
- (vector_3de2eb43 *)seriesPrivateStyleList;
- (void)setSeriesThemeStyleList:(const vector_3de2eb43 *)arg1;
- (vector_3de2eb43 *)seriesThemeStyleList;
- (void)setCategoryAxisStyleList:(const vector_d427a8b4 *)arg1;
- (vector_d427a8b4 *)categoryAxisStyleList;
- (void)setValueAxisStyleList:(const vector_d427a8b4 *)arg1;
- (vector_d427a8b4 *)valueAxisStyleList;
- (void)setLegendStyle:(id)arg1;
- (id)legendStyle;
- (void)setChartStyle:(id)arg1;
- (id)chartStyle;

@end

