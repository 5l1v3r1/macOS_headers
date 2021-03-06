//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariSharedUI/WKWebProcessPlugIn-Protocol.h>

@class NSArray, NSMapTable, NSString, WBSSearchProvider, WKWebProcessPlugInController;

@interface WBSWebProcessPlugIn : NSObject <WKWebProcessPlugIn>
{
    NSMapTable *_browserContextControllersToWebProcessPlugInPageControllers;
    WKWebProcessPlugInController *_plugInController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WKWebProcessPlugInController *plugInController; // @synthesize plugInController=_plugInController;
- (void)willDestroyPageController:(id)arg1 forBrowserContextController:(id)arg2;
- (void)didCreatePageController:(id)arg1 forBrowserContextController:(id)arg2;
- (void)webProcessPlugIn:(id)arg1 willDestroyBrowserContextController:(id)arg2;
- (void)webProcessPlugIn:(id)arg1 didCreateBrowserContextController:(id)arg2;
- (void)webProcessPlugIn:(id)arg1 initializeWithObject:(id)arg2;
- (id)pageControllerWithBrowserContextController:(id)arg1;
@property(readonly, nonatomic) unsigned long long parsecABGroupIdentifier;
@property(readonly, nonatomic, getter=isParsecABTestingEnabled) BOOL parsecABTestingEnabled;
@property(readonly, nonatomic) WBSSearchProvider *defaultSearchProvider;
@property(readonly, nonatomic) NSArray *searchEnginesForRedirectToSafeSearch;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

