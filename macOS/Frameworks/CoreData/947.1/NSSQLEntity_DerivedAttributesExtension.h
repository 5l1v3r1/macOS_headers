//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSSQLEntity;

__attribute__((visibility("hidden")))
@interface NSSQLEntity_DerivedAttributesExtension : NSObject
{
    NSSQLEntity *_entity;
    struct __CFDictionary *_derivedAttributes;
    NSMutableArray *_triggerSQL;
    NSMutableDictionary *_migrationSQL;
}

- (id)migrationSQL;
- (id)triggerSQL;
- (void)_generateTriggerSQL;
- (void)addDerivationKeypath:(id)arg1 forAttribute:(id)arg2;
- (id)derivedAttributes;
- (id)entity;
- (void)dealloc;
- (id)initWithEntity:(id)arg1;

@end

