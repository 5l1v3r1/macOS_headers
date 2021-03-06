//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FImmutableSortedDictionary;

@interface FImmutableSortedSet : NSObject
{
    FImmutableSortedDictionary *_dictionary;
}

+ (id)setWithKeysFromDictionary:(id)arg1 comparator:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) FImmutableSortedDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (void).cxx_destruct;
- (id)description;
- (id)objectEnumerator;
- (void)enumerateObjectsReverse:(BOOL)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)isEmpty;
- (unsigned long long)count;
- (id)predecessorEntry:(id)arg1;
- (id)lastObject;
- (id)firstObject;
- (BOOL)containsObject:(id)arg1;
- (id)removeObject:(id)arg1;
- (id)addObject:(id)arg1;
- (BOOL)contains:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

