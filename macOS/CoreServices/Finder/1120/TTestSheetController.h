//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TTestSheetController : NSObject
{
    struct TNSRef<TBrowserWindowController, void> _windowController;
    struct TNSRef<NSObject<TStdAlertSheetClientProtocol>, void> _client;
    unsigned long long _testNumber;
    unsigned long long _subTestNumber;
    short _expectedItemHit;
    _Bool _isRunningRaftTest;
}

+ (void)runTests;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)buttonPressed:(short)arg1;
- (void)runTest;
- (void)runTestWithOKStr:(id)arg1 cancelStr:(id)arg2 otherStr:(id)arg3;
- (_Bool)calcExpectedButtonIndex;
- (void)dealloc;
- (id)init;

@end

