//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface AMSCardEnrollmentWallet : NSObject
{
}

+ (id)silentEnrollmentVerificationURLWithBagContract:(id)arg1;
+ (id)silentEnrollmentPaymentSessionURLWithBagContract:(id)arg1;
+ (id)silentEnrollmentEligibilityURLWithBagContract:(id)arg1;
+ (BOOL)shouldUseSilentEnrollmentWithBagContract:(id)arg1;
+ (id)countryCodeWithBagContract:(id)arg1;
+ (id)headersForAccount:(id)arg1;
+ (id)gsTokenForAccount:(id)arg1 error:(id *)arg2;

@end

