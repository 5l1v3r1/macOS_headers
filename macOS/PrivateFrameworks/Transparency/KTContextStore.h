//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KTLogClient, KTPublicKeyStore, NSMutableDictionary, TransparencyManagedDataStore;
@protocol OS_dispatch_workloop;

@interface KTContextStore : NSObject
{
    NSMutableDictionary *_contexts;
    TransparencyManagedDataStore *_dataStore;
    KTPublicKeyStore *_keyStore;
    KTLogClient *_configClient;
    NSObject<OS_dispatch_workloop> *_configWorkloop;
}

@property(retain) NSObject<OS_dispatch_workloop> *configWorkloop; // @synthesize configWorkloop=_configWorkloop;
@property(retain) KTLogClient *configClient; // @synthesize configClient=_configClient;
@property(retain) KTPublicKeyStore *keyStore; // @synthesize keyStore=_keyStore;
@property(readonly, retain) TransparencyManagedDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property(retain) NSMutableDictionary *contexts; // @synthesize contexts=_contexts;
- (void).cxx_destruct;
- (BOOL)runDutyCycleForActivity:(id)arg1 logClient:(id)arg2 resumptionWorkloop:(id)arg3;
- (void)runDutyCycleConfigurationStepForActivity:(id)arg1 logClient:(id)arg2 resumptionWorkloop:(id)arg3;
- (void)runDutyCycleProcessingStepForActivity:(id)arg1 logClient:(id)arg2;
- (BOOL)logSharedMetrics;
- (void)clearApplicationState:(id)arg1 logClient:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)updateRequest:(id)arg1 serverDatas:(id)arg2 syncedDatas:(id)arg3 queryResponse:(id)arg4 error:(id *)arg5;
- (unsigned long long)validateEnrollment:(id)arg1 application:(id)arg2 logClient:(id)arg3 transparentData:(id *)arg4 error:(id *)arg5;
- (unsigned long long)validateSelf:(id)arg1 application:(id)arg2 logClient:(id)arg3 transparentData:(id *)arg4 error:(id *)arg5;
- (unsigned long long)validatePeer:(id)arg1 application:(id)arg2 logClient:(id)arg3 transparentData:(id *)arg4 error:(id *)arg5;
- (id)contextForApplication:(id)arg1 logClient:(id)arg2 error:(id *)arg3;
- (BOOL)configureWithClient:(id)arg1 error:(id *)arg2;
- (BOOL)configure:(id *)arg1;
- (BOOL)forcedConfigure:(BOOL)arg1 logClient:(id)arg2 error:(id *)arg3;
- (id)initWithDataStore:(id)arg1 keyStore:(id)arg2 configClient:(id)arg3 configWorkloop:(id)arg4;

@end

