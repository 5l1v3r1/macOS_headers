//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/NSObject-Protocol.h>

@class HFUpdateLogger, NSString;
@protocol HFCharacteristicReadPolicy;

@protocol HFCharacteristicValueOperationBatching <NSObject>
- (void)commitTransactionWithReason:(NSString *)arg1;
- (void)beginTransactionWithReason:(NSString *)arg1 readPolicy:(id <HFCharacteristicReadPolicy>)arg2 logger:(HFUpdateLogger *)arg3;
@end

