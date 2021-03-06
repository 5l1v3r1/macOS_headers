//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <GameCenterUI/GKDialogControllerSizing-Protocol.h>
#import <GameCenterUI/GKRemoteViewControllerDelegate-Protocol.h>
#import <GameCenterUI/GKViewController-Protocol.h>

@class GKMatchRequest, NSString;
@protocol GKRemoteViewController, GKTurnBasedMatchmakerViewControllerDelegate;

@interface GKTurnBasedMatchmakerViewController : NSViewController <GKRemoteViewControllerDelegate, GKDialogControllerSizing, GKViewController>
{
    id _remoteViewController;
    id <GKTurnBasedMatchmakerViewControllerDelegate> _turnBasedMatchmakerDelegate;
    GKMatchRequest *_matchRequest;
    BOOL _showExistingMatches;
    BOOL _internalFlag;
    id <GKTurnBasedMatchmakerViewControllerDelegate> turnBasedMatchmakerDelegate;
}

@property(nonatomic) __weak id <GKTurnBasedMatchmakerViewControllerDelegate> turnBasedMatchmakerDelegate; // @synthesize turnBasedMatchmakerDelegate;
@property BOOL didRequestRemoteViewController; // @synthesize didRequestRemoteViewController=_internalFlag;
@property(retain, nonatomic) id <GKRemoteViewController> remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(nonatomic) BOOL showExistingMatches; // @synthesize showExistingMatches=_showExistingMatches;
@property(retain, nonatomic) GKMatchRequest *matchRequest; // @synthesize matchRequest=_matchRequest;
- (void).cxx_destruct;
- (id)_gkInGameUIUnavailableAlertWithDismissHandler:(CDUnknownBlockType)arg1;
- (void)authenticationChanged:(id)arg1;
- (void)playerQuitMatch:(id)arg1;
- (void)finishWithMatch:(id)arg1;
- (void)finishWithError:(id)arg1;
- (void)cancel;
- (BOOL)remoteViewControllerRequestingDismiss:(id)arg1;
- (void)remoteViewController:(id)arg1 receivedMessageFromService:(id)arg2;
- (struct CGSize)_gkSizeForDialogController;
- (BOOL)shouldShowQuitForTurnBasedMatch;
- (BOOL)shouldShowPlayForTurnBasedMatch;
- (void)viewDidDisappear;
- (void)requestRemoteViewController;
- (void)loadView;
- (id)view;
- (void)dealloc;
- (id)initWithMatchRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

