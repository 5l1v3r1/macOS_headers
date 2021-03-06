//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "PFWorkContextStatusUpdateReceiver-Protocol.h"

@class NSButton, NSProgressIndicator, NSString, NSTextField, PFWorkContext;
@protocol IPXGlobalProgressTaskDelegate;

@interface IPXGlobalProgressTaskViewController : NSViewController <PFWorkContextStatusUpdateReceiver>
{
    NSTextField *_progressDisplayString;
    NSProgressIndicator *_progressBar;
    NSButton *_cancelButton;
    NSButton *_pauseResumeButton;
    BOOL _paused;
    BOOL _cancelling;
    BOOL _loaded;
    PFWorkContext *_context;
    id <IPXGlobalProgressTaskDelegate> _delegate;
    double _progressPercent;
}

@property BOOL loaded; // @synthesize loaded=_loaded;
@property BOOL cancelling; // @synthesize cancelling=_cancelling;
@property(nonatomic) BOOL paused; // @synthesize paused=_paused;
@property(nonatomic) double progressPercent; // @synthesize progressPercent=_progressPercent;
@property __weak id <IPXGlobalProgressTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak PFWorkContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)removedContext:(id)arg1;
- (void)updatedContext:(id)arg1;
- (void)addedContext:(id)arg1;
- (void)cancelTask:(id)arg1;
- (void)pauseResumeTask:(id)arg1;
- (void)updateProgress;
- (void)_buildControls;
- (void)loadView;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

