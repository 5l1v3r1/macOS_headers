//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

@interface _UISettings : PTSettings
{
}

+ (id)_dictionaryForFont:(id)arg1;
+ (id)_fontFromDictionary:(id)arg1;
+ (id)_dictionaryForColor:(id)arg1;
+ (id)_colorFromDictionary:(id)arg1;
+ (id)_valueOfStructType:(id)arg1 fromArchiveDictionary:(id)arg2;
+ (id)_objectOfCustomClass:(Class)arg1 fromArchiveDictionary:(id)arg2;
+ (id)_archiveDictionaryForValue:(id)arg1 ofStructType:(id)arg2;
+ (id)_archiveDictionaryForObject:(id)arg1 ofCustomClass:(Class)arg2;
+ (BOOL)_supportsArchivingStructType:(id)arg1;
+ (BOOL)_supportsArchivingCustomClass:(Class)arg1;
+ (id)settingsFromArchiveFile:(id)arg1 error:(id *)arg2;
- (void)setValuesFromModel:(id)arg1;
- (BOOL)restoreFromArchiveFile:(id)arg1 error:(id *)arg2;
- (BOOL)archiveToFile:(id)arg1 error:(id *)arg2;
- (id)initWithDefaultValues;

@end

