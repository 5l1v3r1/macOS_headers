//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import "KNPlaybackConcealer-Protocol.h"

@class NSString;
@protocol KNAnimatedPlaybackConcealerLayerVisibilityDelegate;

@interface KNAnimatedPlaybackConcealerLayer : CALayer <KNPlaybackConcealer>
{
    long long _concealingStyle;
    id <KNAnimatedPlaybackConcealerLayerVisibilityDelegate> _visibilityDelegate;
}

@property(nonatomic) __weak id <KNAnimatedPlaybackConcealerLayerVisibilityDelegate> visibilityDelegate; // @synthesize visibilityDelegate=_visibilityDelegate;
@property(nonatomic) long long concealingStyle; // @synthesize concealingStyle=_concealingStyle;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

