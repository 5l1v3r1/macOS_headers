//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ChooseStringEncodingWindowController, HFStringEncoding, NSArray, NSData, NSMenu, NSMenuItem, NSString, NSWindowController;

__attribute__((visibility("hidden")))
@interface AppDelegate : NSObject
{
    NSMenuItem *extendForwardsItem;
    NSMenuItem *extendBackwardsItem;
    NSMenuItem *fontMenuItem;
    NSMenuItem *fontListPlaceholderMenuItem;
    NSMenuItem *processListMenuItem;
    NSMenu *bookmarksMenu;
    NSMenuItem *noBookmarksMenuItem;
    NSArray *bookmarksMenuItems;
    NSMenu *stringEncodingMenu;
    ChooseStringEncodingWindowController *chooseStringEncoding;
    NSMenuItem *byteGroupingMenuItem;
    NSWindowController *_prefs;
    BOOL _parsedCommandLineArgs;
    NSArray *_filesToOpen;
    NSString *_diffLeftFile;
    NSString *_diffRightFile;
    NSData *_dataToOpen;
}

@property(retain) NSData *dataToOpen; // @synthesize dataToOpen=_dataToOpen;
@property(retain) NSString *diffRightFile; // @synthesize diffRightFile=_diffRightFile;
@property(retain) NSString *diffLeftFile; // @synthesize diffLeftFile=_diffLeftFile;
@property(retain) NSArray *filesToOpen; // @synthesize filesToOpen=_filesToOpen;
@property BOOL parsedCommandLineArgs; // @synthesize parsedCommandLineArgs=_parsedCommandLineArgs;
- (void).cxx_destruct;
- (void)compareLeftFile:(id)arg1 againstRightFile:(id)arg2;
- (BOOL)applicationShouldOpenUntitledFile:(id)arg1;
- (void)openData:(id)arg1;
- (void)openFile:(id)arg1;
- (void)processCommandLineArguments;
- (void)parseCommandLineArguments;
- (void)openPreferences:(id)arg1;
- (void)setStringEncodingFromMenuItem:(id)arg1;
- (void)setStringEncoding:(id)arg1;
@property(readonly) HFStringEncoding *defaultStringEncoding;
- (void)menuNeedsUpdate:(id)arg1;
- (void)diffFrontDocumentsByRange:(id)arg1;
- (void)diffFrontDocuments:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)setFontFromMenuItem:(id)arg1;
- (void)receiveFonts:(id)arg1;
- (void)buildFontMenu:(id)arg1;
- (void)buildByteGroupingMenu;
- (void)buildEncodingMenu;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)applicationWillFinishLaunching:(id)arg1;

@end

