//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINSToolbarItem.h"

@class NSArray, NSString;

@protocol UINSPopupButtonToolbarItem <UINSToolbarItem>
@property(nonatomic) BOOL showsArrow;
@property(retain, nonatomic) NSArray *menuItems;
@property(retain, nonatomic) id <UINSMenu> menu;
@property(nonatomic, getter=isEnabled) BOOL enabled;
@property(retain, nonatomic) id <NSUIImage> helperImage;
@property(copy, nonatomic) NSString *imageName;
@property(copy, nonatomic) NSString *title;
@end

