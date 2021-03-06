//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSToolbarDelegate.h"

@class MPDocument, NSArray, NSMutableDictionary, NSString;

@interface MPToolbarController : NSObject <NSToolbarDelegate>
{
    NSArray *toolbarItems;
    NSArray *toolbarItemIdentifiers;
    NSMutableDictionary *toolbarItemIdentifierObjectDictionary;
    MPDocument *_document;
}

@property __weak MPDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (id)toolbarItemDropDownWithIdentifier:(id)arg1 label:(id)arg2 icon:(id)arg3 menuItems:(id)arg4;
- (id)toolbarItemWithIdentifier:(id)arg1 label:(id)arg2 icon:(id)arg3 action:(SEL)arg4;
- (id)toolbarItemGroupWithIdentifier:(id)arg1 separated:(BOOL)arg2 label:(id)arg3 items:(id)arg4;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (id)toolbarSelectableItemIdentifiers:(id)arg1;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (void)selectedToolbarItemGroupItem:(id)arg1;
- (id)toolbarItemIdentifiersFromItemsArray:(id)arg1;
- (void)setupToolbarItems;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

