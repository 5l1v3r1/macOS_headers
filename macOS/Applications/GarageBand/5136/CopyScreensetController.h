//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SmallModalDialogController.h"

@class NSTextField;

@interface CopyScreensetController : SmallModalDialogController
{
    NSTextField *slotNumber;
    NSTextField *info;
    NSTextField *name;
}

+ (id)nibName;
- (void)click_OK:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)updateUI;
- (void)updateNo;

@end

