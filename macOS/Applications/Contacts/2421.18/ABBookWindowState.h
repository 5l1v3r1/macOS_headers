//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSplitView, NSString, NSWindow;

@interface ABBookWindowState : NSObject
{
    NSString *_autosavePrefix;
    NSString *_autosaveName;
    NSWindow *_window;
    NSSplitView *_mainSplitView;
    NSArray *_stateSavingObjects;
}

@property(copy, nonatomic) NSString *autosaveName; // @synthesize autosaveName=_autosaveName;
- (id)autosaveNameByAppendingComponent:(id)arg1;
- (void)setAutosaveNameOnObject:(id)arg1;
- (void)setAutosaveNames;
- (void)dealloc;
- (id)initWithWindow:(id)arg1 mainSplitView:(id)arg2 autosavePrefix:(id)arg3 stateSavingObjects:(id)arg4;

@end

