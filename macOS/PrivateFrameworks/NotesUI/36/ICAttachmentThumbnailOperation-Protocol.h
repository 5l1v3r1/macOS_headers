//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class ICThumbnailDataCache, NSString;

@protocol ICAttachmentThumbnailOperation
- (BOOL)isMatchingOperationForCacheKey:(NSString *)arg1 cache:(ICThumbnailDataCache *)arg2;
- (void)addCompletionBlock:(void (^)(NSImage *, unsigned long long, BOOL, BOOL))arg1;
@end

