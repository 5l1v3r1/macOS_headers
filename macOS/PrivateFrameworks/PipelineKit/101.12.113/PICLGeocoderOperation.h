//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PipelineKit/PIOperationSubclass.h>

@class NSObject;
@protocol OS_dispatch_source;

@interface PICLGeocoderOperation : PIOperationSubclass
{
    NSObject<OS_dispatch_source> *_timer;
}

+ (id)operationForceGeocoderWithLocation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (id)operationWithLocation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)_stopTimeOut;
- (void)_setupTimeOutForGeocoder:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;

@end

