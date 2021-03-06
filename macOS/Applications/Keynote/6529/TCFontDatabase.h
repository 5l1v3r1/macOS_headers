//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, TCFontGroup;

@interface TCFontDatabase : NSObject
{
    TCFontGroup *_availableGroup;
    TCFontGroup *_knownGroup;
    NSDictionary *_fallbackFontsByName;
    NSDictionary *_fallbackFamiliesByClass;
    NSDictionary *_specialOfficeFontsByPSName;
    NSMutableDictionary *_fontsByNameAndTraits;
    NSMutableDictionary *_fontsByPSName;
    NSMutableDictionary *_officeFontsByPSName;
    NSMutableDictionary *_epubFontsByPSName;
    NSMutableDictionary *_psFontEntryForFontEntry;
}

+ (id)writeArray:(id)arg1 withName:(id)arg2;
+ (id)escapedPathWithPath:(id)arg1;
+ (id)outputDir;
+ (id)resourceDirArrayWithPlistName:(id)arg1;
+ (id)resourceDir;
@property(readonly, nonatomic) TCFontGroup *knownGroup; // @synthesize knownGroup=_knownGroup;
@property(readonly, nonatomic) TCFontGroup *availableGroup; // @synthesize availableGroup=_availableGroup;
- (void).cxx_destruct;
- (id)EPUBFontInfoFromPSName:(id)arg1 isKnownFont:(char *)arg2;
- (id)psFontMappingFromName:(id)arg1 alternateNames:(id)arg2 withClass:(int)arg3 bold:(_Bool)arg4 italic:(_Bool)arg5 cancelDelegate:(id)arg6;
- (id)officeFontInfoFromPSName:(id)arg1 bold:(_Bool)arg2 italic:(_Bool)arg3;
- (id)psFontNameFromCharacterStyle:(id)arg1 paragraphStyle:(id)arg2;
- (id)psFontNameFromPSFontName:(id)arg1 bold:(_Bool)arg2 italic:(_Bool)arg3;
- (id)fontInfoForPSFontName:(id)arg1;
- (id)availableFontWithKnownFont:(id)arg1;
- (id)fallbackFontForStyling:(struct TCFontStyling)arg1;
- (void)updateKnownFonts;
- (void)load:(id)arg1;
- (BOOL)removeUnavailableFamilyNames:(id)arg1;
- (BOOL)mergeFontsIntoAvailableGroup:(id)arg1 available:(BOOL)arg2 cancelDelegate:(id)arg3;
- (BOOL)mergeFamilyIntoAvailableGroup:(id)arg1 available:(BOOL)arg2 cancelDelegate:(id)arg3;
- (id)downloadableFamilyNames;
- (id)availableFamilyNames;
- (id)init;

@end

