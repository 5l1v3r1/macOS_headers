//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SDCChart, SDCLegend, SDDDrawable, SDDGroup, SDDImage, SDDLine, SDDMedia, SDDShape, SDDStickyNoteInfo, SDNode, SDTTable;

@protocol SDDDrawables <NSObject>
- (void)removeChild:(SDNode *)arg1;
- (SDDStickyNoteInfo *)addStickyNoteInfo;
- (void)addLegend:(SDCLegend *)arg1;
- (SDDGroup *)addGroup;
- (SDTTable *)addTable;
- (SDDShape *)addShape;
- (SDDMedia *)addMedia;
- (SDDImage *)addImage;
- (SDDLine *)addLine;
- (SDCLegend *)addLegend;
- (SDCChart *)addChart;
- (SDDDrawable *)drawableAt:(unsigned long long)arg1;
- (unsigned long long)drawableCount;
@end

