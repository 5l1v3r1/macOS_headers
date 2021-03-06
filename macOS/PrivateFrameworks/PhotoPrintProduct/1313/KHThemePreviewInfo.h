//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KHThemePreviewInfoProtocol.h"

@class NSArray, NSMutableSet, NSNumber, NSString;

@interface KHThemePreviewInfo : NSObject <KHThemePreviewInfoProtocol>
{
    NSString *_name;
    NSString *_themePreviewIdentifier;
    NSString *_themeIdentifier;
    NSMutableSet *_keywords;
    NSMutableSet *_languages;
    NSArray *_productCodes;
    NSNumber *_catalogVersion;
}

+ (id)infoKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *catalogVersion; // @synthesize catalogVersion=_catalogVersion;
@property(retain, nonatomic) NSArray *productCodes; // @synthesize productCodes=_productCodes;
@property(retain, nonatomic) NSMutableSet *languages; // @synthesize languages=_languages;
@property(retain, nonatomic) NSMutableSet *keywords; // @synthesize keywords=_keywords;
@property(retain, nonatomic) NSString *themeIdentifier; // @synthesize themeIdentifier=_themeIdentifier;
@property(retain, nonatomic) NSString *themePreviewIdentifier; // @synthesize themePreviewIdentifier=_themePreviewIdentifier;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initFromDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

