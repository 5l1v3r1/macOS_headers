//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class NSTextField;

@interface KNMacSoundtrackTableCellView : NSTableCellView
{
    NSTextField *_titleTextField;
    NSTextField *_artistTextField;
    NSTextField *_durationTextField;
}

@property(retain, nonatomic) NSTextField *durationTextField; // @synthesize durationTextField=_durationTextField;
@property(retain, nonatomic) NSTextField *artistTextField; // @synthesize artistTextField=_artistTextField;
@property(retain, nonatomic) NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end

