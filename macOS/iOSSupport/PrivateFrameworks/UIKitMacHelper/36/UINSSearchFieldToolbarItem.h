//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitMacHelper/UINSToolbarItem.h>

#import "UINSSearchFieldToolbarItem.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UINSSearchFieldToolbarItem : UINSToolbarItem <UINSSearchFieldToolbarItem>
{
    BOOL _enabled;
    NSString *_text;
    NSString *_placeholder;
    CDUnknownBlockType _actionHandler;
}

@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)action:(id)arg1;
- (void)prepareItem;
- (void)_updateText:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(copy, nonatomic) id <UINSAccessibilityInfo> accessibilityInfo;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(copy, nonatomic) NSString *label;

@end

