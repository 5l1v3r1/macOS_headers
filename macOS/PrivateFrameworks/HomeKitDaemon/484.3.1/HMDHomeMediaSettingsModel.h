//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSNumber, NSString;

@interface HMDHomeMediaSettingsModel : HMDBackingStoreModelObject
{
}

+ (id)properties;
+ (id)defaultModelForHome:(id)arg1;
+ (id)modelIDForHome:(id)arg1;
+ (id)modelNamespace;

// Remaining properties
@property(retain, nonatomic) NSString *mediaPassword; // @dynamic mediaPassword;
@property(retain, nonatomic) NSNumber *mediaPeerToPeerEnabled; // @dynamic mediaPeerToPeerEnabled;
@property(retain, nonatomic) NSNumber *minimumMediaUserPrivilege; // @dynamic minimumMediaUserPrivilege;

@end

