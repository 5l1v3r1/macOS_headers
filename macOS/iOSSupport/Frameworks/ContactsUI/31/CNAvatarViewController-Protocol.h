//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/CNUIObjectViewController-Protocol.h>
#import <ContactsUI/NSObject-Protocol.h>

@class CNAvatarViewControllerSettings, NSArray;
@protocol CNKeyDescriptor;

@protocol CNAvatarViewController <NSObject, CNUIObjectViewController>
@property(copy, nonatomic) NSArray *contacts;
- (id)initWithSettings:(CNAvatarViewControllerSettings *)arg1;
- (id <CNKeyDescriptor>)descriptorForRequiredKeys;
@end

