//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FIRAuthStorage.h"

@class NSMutableDictionary, NSString;

@interface FIRAuthKeychainServices : NSObject <FIRAuthStorage>
{
    NSString *_service;
    NSMutableDictionary *_legacyEntryDeletedForKey;
}

- (void).cxx_destruct;
- (BOOL)removeItemWithQuery:(id)arg1 error:(id *)arg2;
- (BOOL)setItem:(id)arg1 withQuery:(id)arg2 error:(id *)arg3;
- (id)getItemWithQuery:(id)arg1 error:(id *)arg2;
- (id)legacyGenericPasswordQueryWithKey:(id)arg1;
- (id)genericPasswordQueryWithKey:(id)arg1;
- (void)deleteLegacyItemWithKey:(id)arg1;
- (BOOL)deleteItemWithQuery:(id)arg1 error:(id *)arg2;
- (BOOL)setItemWithQuery:(id)arg1 attributes:(id)arg2 error:(id *)arg3;
- (id)itemWithQuery:(id)arg1 error:(id *)arg2;
- (BOOL)removeDataForKey:(id)arg1 error:(id *)arg2;
- (BOOL)setData:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (id)dataForKey:(id)arg1 error:(id *)arg2;
- (id)initWithService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

