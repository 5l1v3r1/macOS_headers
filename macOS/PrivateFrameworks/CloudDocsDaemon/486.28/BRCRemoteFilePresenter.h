//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCForegroundClient-Protocol.h>
#import <CloudDocsDaemon/BRCNotificationPipeDelegate-Protocol.h>

@class BRCNotificationPipe, NSMutableSet, NSNumber, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface BRCRemoteFilePresenter : NSObject <BRCForegroundClient, BRCNotificationPipeDelegate>
{
    NSMutableSet *_observedAppLibraries;
    BRCNotificationPipe *_pipe;
    NSURL *_url;
    NSNumber *_docID;
    NSString *_identifier;
}

@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSNumber *docID; // @synthesize docID=_docID;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) BRCNotificationPipe *pipe; // @synthesize pipe=_pipe;
- (void).cxx_destruct;
- (void)notificationPipe:(id)arg1 didObserveAppLibrary:(id)arg2;
- (void)notificationPipe:(id)arg1 willObserveAppLibrary:(id)arg2;
- (void)dealloc;
- (id)initWithURL:(id)arg1 name:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

