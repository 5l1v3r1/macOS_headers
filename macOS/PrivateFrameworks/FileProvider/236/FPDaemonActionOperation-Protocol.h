//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FPCancellable.h"

@class FPActionOperationLocator, NSProgress;

@protocol FPDaemonActionOperation <FPCancellable>
- (void)_t_unblockReader;
- (void)cancel;
- (void)cancelRoot:(FPActionOperationLocator *)arg1;
- (NSProgress *)progressForRoot:(FPActionOperationLocator *)arg1 completion:(void (^)(void))arg2;
- (void)registerFrameworkClient:(id <FPDaemonActionOperationClient>)arg1 operationCompletion:(void (^)(NSDictionary *, NSDictionary *, NSError *))arg2;
@end

