//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AssistiveControlSupport/ACSHPreferencesSource.h>

@class NSString, NSUserDefaults;

@interface ACSHUserDefaultsPreferencesSource : ACSHPreferencesSource
{
    NSString *_defaultsDomain;
    NSUserDefaults *__userDefaults;
    NSString *__migrationDomain;
}

@property(retain, nonatomic) NSString *_migrationDomain; // @synthesize _migrationDomain=__migrationDomain;
@property(retain, nonatomic) NSUserDefaults *_userDefaults; // @synthesize _userDefaults=__userDefaults;
@property(copy, nonatomic) NSString *defaultsDomain; // @synthesize defaultsDomain=_defaultsDomain;
- (void).cxx_destruct;
- (void)_migrateIfNeeded;
- (void)setPreferenceValue:(id)arg1 forKey:(id)arg2;
- (id)copyPreferenceValueForKey:(id)arg1;
- (id)initWithDomain:(id)arg1 preferenceDefaults:(id)arg2 migrationDomain:(id)arg3;

@end

