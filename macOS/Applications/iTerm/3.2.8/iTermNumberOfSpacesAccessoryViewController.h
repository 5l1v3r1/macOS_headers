//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSStepper, NSTextField;

@interface iTermNumberOfSpacesAccessoryViewController : NSViewController
{
    int _numberOfSpaces;
    NSTextField *_textField;
    NSStepper *_stepper;
}

@property(readonly, nonatomic) int numberOfSpaces; // @synthesize numberOfSpaces=_numberOfSpaces;
- (void)controlTextDidChange:(id)arg1;
- (void)stepperDidChange:(id)arg1;
- (void)setNumberOfSpaces:(int)arg1;
- (void)saveToUserDefaults;
- (void)awakeFromNib;
- (id)init;

@end

