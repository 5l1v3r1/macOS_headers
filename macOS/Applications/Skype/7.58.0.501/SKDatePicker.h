//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSDatePicker.h>

@interface SKDatePicker : NSDatePicker
{
    BOOL _editing;
}

@property(nonatomic, getter=isEditing) BOOL editing; // @synthesize editing=_editing;
- (void)keyDown:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;

@end

