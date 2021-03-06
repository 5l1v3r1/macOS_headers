//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KNMacPresenterDisplayConfiguration, NSNumber, NSString;

@interface KNMacPresenterDisplayConfigurationController : NSObject
{
    KNMacPresenterDisplayConfiguration *_configuration;
    NSNumber *_displayIdentifier;
    NSString *_localizedDisplayName;
}

@property(readonly, nonatomic) NSString *localizedDisplayName; // @synthesize localizedDisplayName=_localizedDisplayName;
@property(readonly, nonatomic) NSNumber *displayIdentifier; // @synthesize displayIdentifier=_displayIdentifier;
@property(copy, nonatomic) KNMacPresenterDisplayConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)p_setPresenterDisplayConfigurationValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (id)initWithDisplayIdentifier:(id)arg1 localizedDisplayName:(id)arg2;
- (void)dealloc;

@end

