//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACAccount, CNEither, CNFuture, NSArray, NSString;

@protocol CNDonationAgentAdapter <NSObject>
- (CNFuture *)removeAllRejections;
- (CNFuture *)rejectValuesWithClusterIdentifier:(NSString *)arg1;
- (CNFuture *)rejectValueWithDonationIdentifier:(NSString *)arg1;
- (CNFuture *)changeFromAccount:(ACAccount *)arg1 toAccount:(ACAccount *)arg2;
- (CNFuture *)meCardDonations;
- (CNEither *)donatedMeCardEither;
- (CNFuture *)fetchDonatedMeCard;
- (CNFuture *)removeDonatedMeCardValuesForIdentifiers:(NSArray *)arg1;
- (CNFuture *)donateMeCardValues:(NSArray *)arg1;
@end

