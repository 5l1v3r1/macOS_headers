//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FPOperation, NSDictionary, NSError;

@protocol FPOperationProgressDelegate <NSObject>
- (void)operation:(FPOperation *)arg1 didReceiveProgressInfo:(NSDictionary *)arg2 error:(NSError *)arg3;
@end

