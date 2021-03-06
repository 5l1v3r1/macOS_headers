//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ABAccountsTracing : NSObject
{
}

+ (id)limitSpecificityOfAccountConfigurations:(id)arg1;
+ (id)sanitizeValue:(id)arg1 forConfigurationKey:(id)arg2;
+ (id)accountConfigurationKeysToGroupBy;
+ (id)displayNameForKey:(id)arg1;
+ (void)setValue:(id)arg1 forTracedKey:(id)arg2 dictionary:(id)arg3;
+ (void)traceProviderInfoForAccounts:(id)arg1;
+ (void)traceSummaryForAccounts:(id)arg1 groupedByType:(id)arg2;
+ (id)groupAccountsByType:(id)arg1;
+ (id)tracingScheduler;
+ (void)traceAccounts:(id)arg1;

@end

