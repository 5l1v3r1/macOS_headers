//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEODataSessionTaskDelegate.h"

@class GEODataSession, GEODataSessionTask, NSString;

__attribute__((visibility("hidden")))
@interface GEODataSessionWaiter : NSObject <GEODataSessionTaskDelegate>
{
    GEODataSession *_session;
    GEODataSessionTask *_task;
    CDUnknownBlockType _handler;
    id _strongReferenceToSelf;
}

@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain, nonatomic) GEODataSessionTask *task; // @synthesize task=_task;
@property(retain, nonatomic) GEODataSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)dataSession:(id)arg1 didCompleteTask:(id)arg2;
- (id)initWithSession:(id)arg1 request:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

