//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface ACSHPreferencesSource : NSObject
{
    NSDictionary *__preferenceDefaults;
}

@property(copy, nonatomic) NSDictionary *_preferenceDefaults; // @synthesize _preferenceDefaults=__preferenceDefaults;
- (void).cxx_destruct;
- (id)copyPreferenceNumberForKey:(id)arg1;
- (id)copyPreferenceStringForKey:(id)arg1;
- (void)setPreferenceValue:(id)arg1 forKey:(id)arg2;
- (id)copyPreferenceValueForKey:(id)arg1;
- (id)initWithPreferenceDefaults:(id)arg1;

@end

