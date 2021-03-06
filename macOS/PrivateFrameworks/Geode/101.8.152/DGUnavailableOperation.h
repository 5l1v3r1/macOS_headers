//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Geode/DGOperation.h>

@class NSDictionary;

@interface DGUnavailableOperation : DGOperation
{
    NSDictionary *_settingsDictionary;
    NSDictionary *_attributes;
}

+ (id)outputKeys;
+ (id)inputKeys;
+ (id)attributes;
+ (id)_stringsTableName;
- (BOOL)applySettingsDictionary:(id)arg1;
- (id)settingsDictionary;
- (void)setInteractive:(BOOL)arg1;
- (BOOL)isInteractive;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (BOOL)isAvailable;
- (id)attributes;
- (BOOL)excludeFromAdjustmentsMenu;
- (id)identifier;
- (void)dealloc;
- (id)initWithOperation:(id)arg1;
- (id)init;

@end

