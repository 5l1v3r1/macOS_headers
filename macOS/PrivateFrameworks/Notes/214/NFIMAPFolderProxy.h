//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Notes/ICNFIMAPMailboxProxy.h>

@class NFIMAPAccountProxy;

@interface NFIMAPFolderProxy : ICNFIMAPMailboxProxy
{
}

- (void)failedToRenameMailboxWithServerName:(id)arg1 oldName:(id)arg2;
- (id)mailbox;
- (BOOL)addMessageToServer:(id)arg1 withMessageType:(BOOL)arg2;
- (BOOL)isMessageDeletedFromPersistence:(id)arg1;
- (void)deleteMessageFromPersistence:(id)arg1;
- (BOOL)messageShouldBePersisted:(id)arg1;
- (id)initWithManagedObject:(id)arg1;

// Remaining properties
@property __weak NFIMAPAccountProxy *account; // @dynamic account;

@end

