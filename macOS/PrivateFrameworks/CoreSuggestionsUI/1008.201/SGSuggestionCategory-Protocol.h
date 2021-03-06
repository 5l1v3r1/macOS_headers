//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreSuggestionsUI/NSObject-Protocol.h>

@class NSArray, NSImage, NSString;

@protocol SGSuggestionCategory <NSObject>
- (NSString *)suggestionCategoryLocalizedCountOfItems:(NSArray *)arg1;
- (NSString *)suggestionCategorySubtitleForItems:(NSArray *)arg1;
- (NSString *)suggestionCategoryTitleForItems:(NSArray *)arg1;
- (NSString *)suggestionCategoryTitle;
- (NSImage *)suggestionCategoryImage;
- (NSString *)suggestionCategoryId;

@optional
- (long long (^)(id, id))suggestionComparator;
@end

