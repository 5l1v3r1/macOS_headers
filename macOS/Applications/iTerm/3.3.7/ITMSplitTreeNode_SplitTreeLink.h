//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class ITMSessionSummary, ITMSplitTreeNode;

@interface ITMSplitTreeNode_SplitTreeLink : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int childOneOfCase; // @dynamic childOneOfCase;
@property(retain, nonatomic) ITMSplitTreeNode *node; // @dynamic node;
@property(retain, nonatomic) ITMSessionSummary *session; // @dynamic session;

@end

