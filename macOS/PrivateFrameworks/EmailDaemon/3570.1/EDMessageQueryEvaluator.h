//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EFLoggable-Protocol.h>

@class EDMessagePersistence, EFQuery, EMMailboxScope, NSCache, NSString;

@interface EDMessageQueryEvaluator : NSObject <EFLoggable>
{
    EFQuery *_messageQuery;
    EDMessagePersistence *_messagePersistence;
    EMMailboxScope *_mailboxScope;
    NSCache *_spotlightPredicateCache;
}

+ (id)log;
@property(retain, nonatomic) NSCache *spotlightPredicateCache; // @synthesize spotlightPredicateCache=_spotlightPredicateCache;
@property(readonly, nonatomic) EMMailboxScope *mailboxScope; // @synthesize mailboxScope=_mailboxScope;
@property(readonly, nonatomic) EDMessagePersistence *messagePersistence; // @synthesize messagePersistence=_messagePersistence;
@property(readonly, nonatomic) EFQuery *messageQuery; // @synthesize messageQuery=_messageQuery;
- (void).cxx_destruct;
- (id)filterMessages:(id)arg1 unmatchedMessages:(id *)arg2;
- (id)transformMessages:(id)arg1;
- (id)transformAndFilterMessages:(id)arg1;
- (id)initWithQuery:(id)arg1 messagePersistence:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

