//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableDictionary, NSUserDefaults;

__attribute__((visibility("hidden")))
@interface Defaults : NSObject <NSCoding>
{
    NSUserDefaults *_userDefaults;
    NSMutableDictionary *_userDefaultsDictionary;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)unregisterDefaultsObserver:(id)arg1 forKey:(id)arg2;
- (void)registerDefaultsObserver:(id)arg1 forKey:(id)arg2;
- (id)URLForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)numberForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKey:(id)arg1 withClass:(Class)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserDefaults:(id)arg1;
- (id)init;

@end

