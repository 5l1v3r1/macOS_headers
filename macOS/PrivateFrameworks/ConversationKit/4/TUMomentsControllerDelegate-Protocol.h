//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ConversationKit/NSObject-Protocol.h>

@class NSString, TUMomentDescriptor, TUMomentsCapabilities, TUMomentsController, TUMomentsProvider;

@protocol TUMomentsControllerDelegate <NSObject>

@optional
- (void)momentsController:(TUMomentsController *)arg1 didReceiveLocallyRequestedMomentDescriptor:(TUMomentDescriptor *)arg2;
- (void)momentsController:(TUMomentsController *)arg1 didUpdateCapabilities:(TUMomentsCapabilities *)arg2 forProvider:(TUMomentsProvider *)arg3;
- (void)momentsController:(TUMomentsController *)arg1 willCaptureRemoteRequestFromIdentifier:(NSString *)arg2;
@end

