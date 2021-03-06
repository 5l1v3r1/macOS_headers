//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFSwitchParameter.h"

#import "ICAppInstallStatusObserver.h"

@interface WFTumblrComposeInAppParameter : WFSwitchParameter <ICAppInstallStatusObserver>
{
}

- (void)appRegistry:(id)arg1 installStatusChangedForApp:(id)arg2;
- (BOOL)parameterStateIsValid:(id)arg1;
- (BOOL)isHidden;
- (void)wasRemovedFromWorkflow;
- (void)wasAddedToWorkflow;
- (id)defaultSerializedRepresentation;

@end

