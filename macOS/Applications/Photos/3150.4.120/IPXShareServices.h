//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IPXVersionResourceProgressViewDelegate-Protocol.h"
#import "SBLShareKitManagerProgressDelegate-Protocol.h"
#import "SBLShareKitManagerReconnectDelegate-Protocol.h"

@class IPXSharedPhotostreamProgressController, IPXSubsampleProgressViewController, NSString, SBLShareServicesManager;

@interface IPXShareServices : NSObject <SBLShareKitManagerProgressDelegate, IPXVersionResourceProgressViewDelegate, SBLShareKitManagerReconnectDelegate>
{
    SBLShareServicesManager *_sharingServiceManager;
    IPXSubsampleProgressViewController *_modalProgressController;
    IPXSharedPhotostreamProgressController *_sharedStreamProgressController;
}

+ (long long)maxItemCount;
+ (id)loadPropertiesForDatabase:(id)arg1;
+ (id)sharedShareServices;
+ (BOOL)populateMenuForVersions:(id)arg1 withShareInfo:(id)arg2;
+ (BOOL)populateMenuForVersions:(id)arg1 withShareInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)shareVersions:(id)arg1 usingParameters:(id)arg2 animationSource:(id)arg3 menuOptions:(id)arg4;
@property(retain) IPXSharedPhotostreamProgressController *sharedStreamProgressController; // @synthesize sharedStreamProgressController=_sharedStreamProgressController;
@property(retain) IPXSubsampleProgressViewController *modalProgressController; // @synthesize modalProgressController=_modalProgressController;
@property(readonly) SBLShareServicesManager *sharingServiceManager; // @synthesize sharingServiceManager=_sharingServiceManager;
- (void).cxx_destruct;
- (void)ensureMastersPresentForVersions:(id)arg1 hostWindow:(id)arg2 finishedBlock:(CDUnknownBlockType)arg3;
- (void)reconnectVersions:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)userCanceled;
- (void)progressChanged:(id)arg1 completedCount:(unsigned long long)arg2;
- (void)dismissProgress;
- (void)startProgress:(id)arg1 totalCount:(unsigned long long)arg2 samplesPerUnit:(unsigned long long)arg3 hostWindow:(id)arg4;
- (BOOL)populateSharekitShareMenu:(id)arg1 anchorView:(id)arg2;
- (id)animationSourceForSelectionProvider:(id)arg1;
- (void)sharingPickerForVersions:(id)arg1 sharingButton:(id)arg2 withVersionInfo:(id)arg3 sharingParams:(id)arg4;
- (void)_start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

