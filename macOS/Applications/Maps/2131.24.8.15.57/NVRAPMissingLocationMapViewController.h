//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NVRAPPannableCorrectionMapViewController.h"

#import "RAPInstrumentableTarget-Protocol.h"

@class NSString, RAPAddNewPlaceQuestion;

__attribute__((visibility("hidden")))
@interface NVRAPMissingLocationMapViewController : NVRAPPannableCorrectionMapViewController <RAPInstrumentableTarget>
{
}

- (void)continueAction;
- (unsigned long long)nextState;
@property(readonly, nonatomic) int analyticTarget;

// Remaining properties
@property(readonly, nonatomic) int backAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) RAPAddNewPlaceQuestion *question; // @dynamic question;
@property(readonly) Class superclass;

@end

