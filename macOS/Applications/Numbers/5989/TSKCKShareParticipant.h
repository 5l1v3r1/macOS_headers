//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSKCollaborationParticipantInfo-Protocol.h"

@class CKShareParticipant, CNContact, NSString;

@interface TSKCKShareParticipant : NSObject <TSKCollaborationParticipantInfo>
{
    CNContact *_contact;
    struct {
        unsigned int isDocumentOwner:1;
        unsigned int isSelf;
        unsigned int hasUnifiedContact:1;
    } _flags;
    CKShareParticipant *_shareParticipant;
}

@property(readonly, nonatomic) CKShareParticipant *shareParticipant; // @synthesize shareParticipant=_shareParticipant;
- (void).cxx_destruct;
- (BOOL)hasSameUserIdentityAsParticipantInfo:(id)arg1;
@property(readonly, nonatomic) long long permissions;
@property(readonly, nonatomic) long long acceptanceStatus;
@property(readonly, nonatomic) BOOL isSelf;
@property(readonly, nonatomic) BOOL isDocumentOwner;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) NSString *personName;
@property(readonly, nonatomic) BOOL hasUnifiedContact;
@property(readonly, nonatomic) CNContact *contact;
@property(readonly, nonatomic) NSString *personId;
- (void)populateContactIfNeeded;
@property(readonly) unsigned long long hash;
- (BOOL)isEqualToShareParticipant:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithShareParticipant:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

