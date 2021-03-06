//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INCodableAttributeMetadata.h>

@class NSString;

@interface INCodableStringAttributeMetadata : INCodableAttributeMetadata
{
    BOOL _multiline;
    BOOL _disableAutocorrect;
    BOOL _disableSmartDashes;
    BOOL _disableSmartQuotes;
    NSString *_defaultValue;
    NSString *_defaultValueID;
    long long _capitalization;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) long long capitalization; // @synthesize capitalization=_capitalization;
@property(copy, nonatomic) NSString *defaultValueID; // @synthesize defaultValueID=_defaultValueID;
@property(copy, nonatomic) NSString *defaultValue; // @synthesize defaultValue=_defaultValue;
@property(nonatomic) BOOL disableSmartQuotes; // @synthesize disableSmartQuotes=_disableSmartQuotes;
@property(nonatomic) BOOL disableSmartDashes; // @synthesize disableSmartDashes=_disableSmartDashes;
@property(nonatomic) BOOL disableAutocorrect; // @synthesize disableAutocorrect=_disableAutocorrect;
@property(nonatomic, getter=isMultiline) BOOL multiline; // @synthesize multiline=_multiline;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)localizedDefaultValueForLanguage:(id)arg1;
@property(readonly, copy) NSString *localizedDefaultValue;
- (id)dictionaryRepresentationForLanguage:(id)arg1;
- (void)updateWithDictionary:(id)arg1;

@end

