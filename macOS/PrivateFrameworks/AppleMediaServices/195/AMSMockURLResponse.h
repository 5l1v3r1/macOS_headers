//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSMutableArray, NSURLRequest, NSURLSessionTask;

@interface AMSMockURLResponse : NSObject
{
    BOOL _performActualRequest;
    unsigned long long _statusCode;
    NSDictionary *_headers;
    NSData *_body;
    NSURLRequest *_originalRequest;
    NSMutableArray *_responseHandlerBlocks;
    NSURLSessionTask *_runningTask;
}

+ (id)responseWithHARFile:(id)arg1;
+ (id)responseWithStatus:(unsigned long long)arg1 headers:(id)arg2 body:(id)arg3;
+ (id)responseFromActualResponse;
- (void).cxx_destruct;
@property(retain) NSURLSessionTask *runningTask; // @synthesize runningTask=_runningTask;
@property(retain) NSMutableArray *responseHandlerBlocks; // @synthesize responseHandlerBlocks=_responseHandlerBlocks;
@property(readonly) NSURLRequest *originalRequest; // @synthesize originalRequest=_originalRequest;
@property BOOL performActualRequest; // @synthesize performActualRequest=_performActualRequest;
@property(retain) NSData *body; // @synthesize body=_body;
@property(retain) NSDictionary *headers; // @synthesize headers=_headers;
@property unsigned long long statusCode; // @synthesize statusCode=_statusCode;
- (void)stopRunningTasks;
- (void)addResponseHandler:(CDUnknownBlockType)arg1;
- (CDStruct_0f015c83)handleReceivedRequest:(id)arg1;
- (id)init;

@end

