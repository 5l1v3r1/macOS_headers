//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSSPAutoEncodable-Protocol.h"

@class NSDate, NSString, TSUSparseArray;

@interface TSCEStock : NSObject <GSSPAutoEncodable>
{
    NSString *_symbol;
    NSDate *_date;
    TSUSparseArray *_attributes;
}

+ (id)nativeLocaleIdentifier;
+ (id)kNilStockAttributeString;
+ (id)stockFromArchive:(const struct StockArchive *)arg1;
+ (id)stockWithAttributes:(id)arg1;
@property(readonly, nonatomic) TSUSparseArray *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *symbol; // @synthesize symbol=_symbol;
- (void).cxx_destruct;
- (void)p_populateAttributesFromArray:(id)arg1;
- (id)abbreviatedNumberForAttribute:(long long)arg1 atLocale:(id)arg2;
- (void)p_setFormattedAttr:(long long)arg1 fromArray:(id)arg2;
@property(readonly, nonatomic) NSString *dateString;
@property(readonly, nonatomic) BOOL up;
- (id)valueForAttribute:(long long)arg1 forLocale:(id)arg2;
- (id)valueForAttribute:(long long)arg1;
- (void)encodeToArchive:(struct StockArchive *)arg1;
- (id)initFromArchive:(const struct StockArchive *)arg1;
- (id)initWithAttributes:(id)arg1;
- (id)initWithSymbol:(id)arg1;
- (id)init;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;
- (void)populateGSSPStock:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;

@end

