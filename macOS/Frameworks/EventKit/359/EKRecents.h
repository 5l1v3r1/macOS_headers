//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface EKRecents : NSObject
{
}

+ (BOOL)recordRecentForContactWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3;
+ (void)recordRecentWithAddress:(id)arg1 name:(id)arg2 kind:(id)arg3;
+ (id)recentForContactWithAddress:(id)arg1 name:(id)arg2 kind:(id)arg3;
+ (id)crRecentsDomainCalendarString;
+ (id)crAddressKindPhoneNumberString;
+ (id)crAddressKindEmailString;
+ (Class)crRecentContactsLibraryClass;

@end

