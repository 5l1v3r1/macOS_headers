//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class ITMWindowedCoordRange;

@interface ITMSubSelection : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) BOOL connected; // @dynamic connected;
@property(nonatomic) BOOL hasConnected; // @dynamic hasConnected;
@property(nonatomic) BOOL hasSelectionMode; // @dynamic hasSelectionMode;
@property(nonatomic) BOOL hasWindowedCoordRange; // @dynamic hasWindowedCoordRange;
@property(nonatomic) int selectionMode; // @dynamic selectionMode;
@property(retain, nonatomic) ITMWindowedCoordRange *windowedCoordRange; // @dynamic windowedCoordRange;

@end

