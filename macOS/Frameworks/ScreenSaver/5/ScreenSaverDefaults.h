//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSUserDefaults.h>

@class NSMutableDictionary, NSString;

@interface ScreenSaverDefaults : NSUserDefaults
{
    NSMutableDictionary *_defaults;
    NSMutableDictionary *_registeredDefaults;
    NSString *_userName;
    NSString *_domainName;
    BOOL _dirty;
    BOOL _screenLockPrefChanged;
}

+ (void)resetStandardUserDefaults;
+ (id)standardUserDefaults;
+ (id)defaultsForModuleWithName:(id)arg1;
+ (id)defaultsForModule:(id)arg1;
+ (id)defaultsForEngine;
+ (id)defaultsForUser:(id)arg1 moduleName:(id)arg2;
- (id)description;
- (void)removePersistentDomainForName:(id)arg1;
- (void)setPersistentDomain:(id)arg1 forName:(id)arg2;
- (id)persistentDomainForName:(id)arg1;
- (id)persistentDomainNames;
- (void)removeVolatileDomainForName:(id)arg1;
- (void)setVolatileDomain:(id)arg1 forName:(id)arg2;
- (id)volatileDomainForName:(id)arg1;
- (id)volatileDomainNames;
- (BOOL)reload;
- (BOOL)synchronize;
- (id)dictionaryRepresentation;
- (id)registeredDefaults;
- (void)registerDefaults:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)dealloc;
- (id)initWithUser:(id)arg1 moduleName:(id)arg2;
- (void)removeDefaultsForModuleWithName:(id)arg1;
- (id)activeModule;
- (id)_removeSecurityKeysFromDefaults:(id)arg1;

@end

