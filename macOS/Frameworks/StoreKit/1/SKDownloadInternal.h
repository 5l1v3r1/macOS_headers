//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSNumber, NSString, NSURL, SKPaymentTransaction;

__attribute__((visibility("hidden")))
@interface SKDownloadInternal : NSObject
{
    NSNumber *_downloadID;
    NSString *_productID;
    long long _state;
    float _progress;
    NSError *_error;
    NSURL *_contentURL;
    double _timeRemaining;
    NSNumber *_contentLength;
    NSString *_contentVersion;
    SKPaymentTransaction *_transaction;
}

- (void).cxx_destruct;

@end

