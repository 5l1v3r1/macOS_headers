//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLConnectionDelegate-Protocol.h"

@class NSDate, NSDictionary, NSImage, NSMutableData, NSString, NSTimer, NSURL;

@interface BSWindow : NSObject <NSURLConnectionDelegate>
{
    NSTimer *resizeTimer;
    NSDate *windowEndedResizingDate;
    NSMutableData *responseData;
    BOOL axWindowElementDestroyed;
    BOOL legitimate;
    BOOL minimized;
    int windowNumber;
    int pid;
    NSString *title;
    NSImage *proxyIcon;
    NSURL *documentURL;
    NSDictionary *windowInfo;
    struct __AXUIElement *axWindowElement;
    NSImage *cachedWindowImage;
    NSString *bundleIdentifier;
    struct CGRect frame;
}

@property(readonly) int pid; // @synthesize pid;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier;
@property(retain, nonatomic) NSImage *cachedWindowImage; // @synthesize cachedWindowImage;
@property BOOL minimized; // @synthesize minimized;
@property struct CGRect frame; // @synthesize frame;
@property BOOL legitimate; // @synthesize legitimate;
@property BOOL axWindowElementDestroyed; // @synthesize axWindowElementDestroyed;
@property struct __AXUIElement *axWindowElement; // @synthesize axWindowElement;
@property int windowNumber; // @synthesize windowNumber;
@property(retain, nonatomic) NSDictionary *windowInfo; // @synthesize windowInfo;
@property(retain, nonatomic) NSURL *documentURL; // @synthesize documentURL;
@property(retain, nonatomic) NSImage *proxyIcon; // @synthesize proxyIcon;
@property(retain, nonatomic) NSString *title; // @synthesize title;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)windowImage;
- (BOOL)updateMinimized;
- (void)windowEndedResizing;
- (void)windowBeganResizing;
- (void)windowMoved;
- (BOOL)canClose;
- (void)close;
- (void)minimize;
- (void)raise;
- (id)screenForWindow;
- (void)resampleWindowInfo:(id)arg1;
- (void)attemptToResolveProxyIcon;
- (id)humanReadableFiletype:(id)arg1;
- (void)dealloc;
- (id)initWithWindowInfo:(id)arg1 andAppBundleIdentifier:(id)arg2 andPID:(int)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

