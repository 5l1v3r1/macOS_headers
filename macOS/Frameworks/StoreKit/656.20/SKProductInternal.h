//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDecimalNumber, NSLocale, NSNumber, NSString, SKProductDiscount, SKProductSubscriptionPeriod;

@interface SKProductInternal : NSObject
{
    NSString *_localizedDescription;
    NSString *_localizedTitle;
    NSDecimalNumber *_price;
    NSLocale *_priceLocale;
    NSString *_productIdentifier;
    BOOL _isHosted;
    NSString *_hostedVersion;
    NSNumber *_hostedContentLength;
    SKProductSubscriptionPeriod *_subscriptionPeriod;
    SKProductDiscount *_introductoryPrice;
}

@property(retain, nonatomic) SKProductDiscount *introductoryPrice; // @synthesize introductoryPrice=_introductoryPrice;
@property(retain, nonatomic) SKProductSubscriptionPeriod *subscriptionPeriod; // @synthesize subscriptionPeriod=_subscriptionPeriod;
@property(retain, nonatomic) NSNumber *hostedContentLength; // @synthesize hostedContentLength=_hostedContentLength;
@property(retain, nonatomic) NSString *hostedVersion; // @synthesize hostedVersion=_hostedVersion;
@property(nonatomic) BOOL isHosted; // @synthesize isHosted=_isHosted;
@property(retain, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
@property(retain, nonatomic) NSLocale *priceLocale; // @synthesize priceLocale=_priceLocale;
@property(retain, nonatomic) NSDecimalNumber *price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(retain, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
- (void).cxx_destruct;

@end

