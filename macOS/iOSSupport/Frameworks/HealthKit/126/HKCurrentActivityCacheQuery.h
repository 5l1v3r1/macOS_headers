//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKQuery.h>

#import <HealthKit/HKCurrentActivityCacheQueryClientInterface-Protocol.h>

@class NSDateComponents;

@interface HKCurrentActivityCacheQuery : HKQuery <HKCurrentActivityCacheQueryClientInterface>
{
    NSDateComponents *_statisticsIntervalComponents;
    CDUnknownBlockType _updateHandler;
}

+ (void)configureClientInterface:(id)arg1;
+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
@property(copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
- (void).cxx_destruct;
- (void)queue_deliverError:(id)arg1;
- (BOOL)queue_shouldDeactivateAfterInitialResults;
- (void)queue_validate;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)client_deliverQueryResult:(id)arg1 queryUUID:(id)arg2;
- (id)initWithStatisticsIntervalComponents:(id)arg1 updateHandler:(CDUnknownBlockType)arg2;

@end

