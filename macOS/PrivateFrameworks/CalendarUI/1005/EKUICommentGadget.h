//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarUI/EKUILabledTextFieldGadget.h>

#import <CalendarUI/NSTextFieldDelegate-Protocol.h>

@class NSString;

@interface EKUICommentGadget : EKUILabledTextFieldGadget <NSTextFieldDelegate>
{
}

+ (id)interestedChangeKeys;
- (void)updateWithChanges:(id)arg1;
- (BOOL)shouldDisplay;
- (BOOL)isEditable;
- (BOOL)needsExpansion;
- (void)controlTextDidChange:(id)arg1;
- (id)placeholderString;
- (id)labelString;
- (double)baselineOffset;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

