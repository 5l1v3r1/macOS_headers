//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKButtonCell.h"

@class FFAdjustmentTool, NSImage;

@interface CEAdjustmentButtonCell : LKButtonCell
{
    NSImage *_facetSelectedImageOn;
    NSImage *_facetNormalImageOn;
    NSImage *_facetSelectedImageOff;
    NSImage *_facetNormalImageOff;
    NSImage *_facetSelectedImageMixed;
    NSImage *_facetNormalImageMixed;
    int _buttonState;
    FFAdjustmentTool *_tool;
}

- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)_accessibilityHelpDescription;
- (id)accessibilityAttributeNames;
@property(nonatomic) FFAdjustmentTool *tool; // @dynamic tool;
@property int buttonState; // @dynamic buttonState;
- (void)_updateThemeImageSource;
- (void)setInternalState:(long long)arg1;
- (void)setState:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

