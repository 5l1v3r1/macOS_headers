//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSData, NSDate, NSString;

@interface EDConversationInfo : NSManagedObject
{
}

+ (id)fetchRequest;

// Remaining properties
@property(copy, nonatomic) NSString *ckRecordID; // @dynamic ckRecordID;
@property(retain, nonatomic) NSData *ckRecordSystemFields; // @dynamic ckRecordSystemFields;
@property(copy, nonatomic) NSString *conversationUUID; // @dynamic conversationUUID;
@property(copy, nonatomic) NSDate *lastModified; // @dynamic lastModified;
@property(copy, nonatomic) NSString *messageIds; // @dynamic messageIds;
@property(nonatomic) BOOL muted; // @dynamic muted;
@property(nonatomic) BOOL notifyMe; // @dynamic notifyMe;

@end

