//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSDictionary, NSTextField, NSView;

@interface AUConnectionInfoViewController : NSViewController
{
    NSDictionary *_connectionStats;
    int _connectionMedium;
    NSTextField *wifiDataRate;
    NSTextField *wifiSignalStrength;
    NSTextField *wifiPHYMode;
    NSTextField *ethernetDataRate;
    NSTextField *ethernetMaxRate;
    NSTextField *ethernetDuplexMode;
    NSView *wifiConnectionView;
    NSView *ethernetConnectionView;
}

@property(retain, nonatomic) NSView *ethernetConnectionView; // @synthesize ethernetConnectionView;
@property(retain, nonatomic) NSView *wifiConnectionView; // @synthesize wifiConnectionView;
@property(retain, nonatomic) NSTextField *ethernetDuplexMode; // @synthesize ethernetDuplexMode;
@property(retain, nonatomic) NSTextField *ethernetMaxRate; // @synthesize ethernetMaxRate;
@property(retain, nonatomic) NSTextField *ethernetDataRate; // @synthesize ethernetDataRate;
@property(retain, nonatomic) NSTextField *wifiPHYMode; // @synthesize wifiPHYMode;
@property(retain, nonatomic) NSTextField *wifiSignalStrength; // @synthesize wifiSignalStrength;
@property(retain, nonatomic) NSTextField *wifiDataRate; // @synthesize wifiDataRate;
@property(retain, nonatomic) NSDictionary *connectionStats; // @synthesize connectionStats=_connectionStats;
- (void)dealloc;
- (void)loadView;

@end

