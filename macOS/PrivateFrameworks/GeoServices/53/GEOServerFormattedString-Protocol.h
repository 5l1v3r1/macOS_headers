//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSObject.h"

@class NSArray;

@protocol GEOServerFormattedString <NSObject, NSCoding>
@property(readonly, nonatomic) id <GEOServerConditionalString> alternativeString;
@property(readonly, nonatomic) NSArray *formatStyles;
@property(readonly, nonatomic) NSArray *separators;
@property(readonly, nonatomic) NSArray *formatTokens;
@property(readonly, nonatomic) NSArray *formatStrings;
@end

