//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface MFRemoteAppendMessagesContext : NSObject
{
    BOOL someMsgsWentToServer;
    BOOL _forMove;
    unsigned int _destUidNext;
    NSArray *_messages;
    NSArray *_flagsToSet;
    NSMutableArray *_missedMessages;
    NSMutableArray *_addedMessageIDs;
    NSMutableArray *_addedMessages;
    NSMutableDictionary *_addedDocumentIDsByOld;
    unsigned long long _unreadCountDelta;
}

@property(nonatomic) BOOL forMove; // @synthesize forMove=_forMove;
@property(nonatomic) unsigned int destUidNext; // @synthesize destUidNext=_destUidNext;
@property(nonatomic) unsigned long long unreadCountDelta; // @synthesize unreadCountDelta=_unreadCountDelta;
@property(retain, nonatomic) NSMutableDictionary *addedDocumentIDsByOld; // @synthesize addedDocumentIDsByOld=_addedDocumentIDsByOld;
@property(retain, nonatomic) NSMutableArray *addedMessages; // @synthesize addedMessages=_addedMessages;
@property(retain, nonatomic) NSMutableArray *addedMessageIDs; // @synthesize addedMessageIDs=_addedMessageIDs;
@property(retain, nonatomic) NSMutableArray *missedMessages; // @synthesize missedMessages=_missedMessages;
@property(nonatomic) BOOL someMsgsWentToServer; // @synthesize someMsgsWentToServer;
@property(copy, nonatomic) NSArray *flagsToSet; // @synthesize flagsToSet=_flagsToSet;
@property(copy, nonatomic) NSArray *messages; // @synthesize messages=_messages;
- (void).cxx_destruct;
- (id)description;

@end

