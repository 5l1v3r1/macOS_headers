//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableView.h"

__attribute__((visibility("hidden")))
@interface SPTableView : NSTableView
{
    BOOL tabEditingDisabled;
    SEL emptyDoubleClickAction;
}

@property BOOL tabEditingDisabled; // @synthesize tabEditingDisabled;
- (void)_enableDoubleClickAction:(id)arg1;
- (void)_disableDoubleClickAction:(id)arg1;
- (void)_doubleClickAction;
- (BOOL)validateMenuItem:(id)arg1;
- (void)delete:(id)arg1;
- (void)setEmptyDoubleClickAction:(SEL)arg1;
- (void)setFont:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)keyDown:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (id)menuForEvent:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)awakeFromNib;
- (id)init;

@end

