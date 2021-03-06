//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface ITMSplitPaneRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) BOOL before; // @dynamic before;
@property(retain, nonatomic) NSMutableArray *customProfilePropertiesArray; // @dynamic customProfilePropertiesArray;
@property(readonly, nonatomic) unsigned long long customProfilePropertiesArray_Count; // @dynamic customProfilePropertiesArray_Count;
@property(nonatomic) BOOL hasBefore; // @dynamic hasBefore;
@property(nonatomic) BOOL hasProfileName; // @dynamic hasProfileName;
@property(nonatomic) BOOL hasSession; // @dynamic hasSession;
@property(nonatomic) BOOL hasSplitDirection; // @dynamic hasSplitDirection;
@property(copy, nonatomic) NSString *profileName; // @dynamic profileName;
@property(copy, nonatomic) NSString *session; // @dynamic session;
@property(nonatomic) int splitDirection; // @dynamic splitDirection;

@end

