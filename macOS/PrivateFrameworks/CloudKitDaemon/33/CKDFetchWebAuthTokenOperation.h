//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKDFetchWebAuthTokenOperation : CKDDatabaseOperation
{
    NSString *_webAuthToken;
    NSString *_APIToken;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *APIToken; // @synthesize APIToken=_APIToken;
@property(copy, nonatomic) NSString *webAuthToken; // @synthesize webAuthToken=_webAuthToken;
- (void)fillOutOperationResult:(id)arg1;
- (Class)operationResultClass;
- (void)main;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

