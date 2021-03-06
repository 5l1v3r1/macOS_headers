//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSWindowDelegate-Protocol.h>

@class NSString, NSWindow;

@interface _NSMagnifier : NSObject <NSWindowDelegate>
{
    NSWindow *_magnifyingGlassWindow;
    BOOL _continuous;
}

+ (id)sharedMagnifier;
@property BOOL continuous; // @synthesize continuous=_continuous;
- (void)trackMagnifierWithDelegate:(id)arg1;
- (void)_createMagnifyingGlassWindow;
- (Class)magnifyingGlassContentViewClass;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

