//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMKSimulatorInputModeSelectorFloatingPanel, NSArray, NSString;

@interface IMKSimulatorInputModeSelector : NSObject
{
    IMKSimulatorInputModeSelectorFloatingPanel *_floatingPanel;
    NSArray *_inputModeURLs;
    NSString *_selectedInputModeURL;
}

+ (id)sharedInputModeSelector;
@property(retain, nonatomic) NSString *selectedInputModeURL; // @synthesize selectedInputModeURL=_selectedInputModeURL;
@property(retain, nonatomic) NSArray *inputModeURLs; // @synthesize inputModeURLs=_inputModeURLs;
@property(retain, nonatomic) IMKSimulatorInputModeSelectorFloatingPanel *floatingPanel; // @synthesize floatingPanel=_floatingPanel;
- (void)showPanel;
- (void)dealloc;
- (id)init;

@end

