//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSMapTable, TSDReplaceableMediaMap;

@protocol TSDReplaceableMediaContainer <NSObject>
@property(readonly, nonatomic) TSDReplaceableMediaMap *datasForReplacingMediaContentsWithAssociatedHints;
- (NSArray *)commandsForReplacingMediaInOldToNewMap:(NSMapTable *)arg1 associatedHints:(TSDReplaceableMediaMap *)arg2;
@end

