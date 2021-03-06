//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSMenu.h>

@class AppPopupButton;
@protocol AppPopupMenuDelegate;

@interface AppPopupMenu : NSMenu
{
    id <AppPopupMenuDelegate> _menuDelegate;
    AppPopupButton *_popupButton;
}

@property(retain, nonatomic) AppPopupButton *popupButton; // @synthesize popupButton=_popupButton;
@property(nonatomic) __weak id <AppPopupMenuDelegate> menuDelegate; // @synthesize menuDelegate=_menuDelegate;
- (void).cxx_destruct;
- (void)performActionForItemAtIndex:(long long)arg1;
- (id)insertItemWithTitle:(id)arg1 action:(SEL)arg2 keyEquivalent:(id)arg3 atIndex:(long long)arg4;
- (id)addItemWithTitle:(id)arg1 action:(SEL)arg2 keyEquivalent:(id)arg3;

@end

