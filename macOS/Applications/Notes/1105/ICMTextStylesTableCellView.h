//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class ICMTextStylesTableView, ICTextStyle, NSTextField;

@interface ICMTextStylesTableCellView : NSTableCellView
{
    ICTextStyle *_style;
    long long _state;
    ICMTextStylesTableView *_parentTableView;
    NSTextField *_titleLabel;
    NSTextField *_selectedLabel;
}

@property(nonatomic) __weak NSTextField *selectedLabel; // @synthesize selectedLabel=_selectedLabel;
@property(nonatomic) __weak NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak ICMTextStylesTableView *parentTableView; // @synthesize parentTableView=_parentTableView;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) ICTextStyle *style; // @synthesize style=_style;
- (void).cxx_destruct;
- (BOOL)accessibilityPerformPress;
- (void)setBackgroundStyle:(long long)arg1;

@end

