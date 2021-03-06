//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary;

@protocol SISchemaEnabledStatus <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) int dataSharingOptInStatus;
@property(nonatomic) int shortcutsAvailable;
@property(nonatomic) BOOL hasHomekitHome;
@property(nonatomic) BOOL spokenNotificationsEnabled;
@property(nonatomic) BOOL raiseToSpeakEnabled;
@property(nonatomic) BOOL assistantOnLockscreen;
@property(nonatomic) BOOL heySiriEnabled;
@property(nonatomic) BOOL hardwareButtonEnabled;
@property(nonatomic) BOOL dictationEnabled;
@property(nonatomic) BOOL assistantEnabled;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

