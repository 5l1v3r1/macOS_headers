//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "STItemView.h"

#import "DDSTItemStateContext-Protocol.h"

@class DDSTItemState, NSString, STTableViewStyles;
@protocol DDSTItemViewContext, DDSTItemViewDelegate, IXHostProtocol;

@interface DDSTItemView : STItemView <DDSTItemStateContext>
{
    DDSTItemState *_overviewState;
    DDSTItemState *_progressState;
    DDSTItemState *_errorState;
    BOOL _hot;
    long long _sizeMathBase;
    id <DDSTItemViewDelegate> _delegate;
}

@property(nonatomic) BOOL hot; // @synthesize hot=_hot;
@property(nonatomic) __weak id <DDSTItemViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long sizeMathBase; // @synthesize sizeMathBase=_sizeMathBase;
- (void).cxx_destruct;
- (void)updateErrorButton:(id)arg1 starButton:(id)arg2;
- (void)updateProgressButton:(id)arg1 starButton:(id)arg2;
- (void)updateOverviewButton:(id)arg1 starButton:(id)arg2;
- (void)updateErrorTitle:(id)arg1 errorMessage:(id)arg2;
- (void)updateScanProgressAnimationPaused:(BOOL)arg1;
- (void)updateScanProgressWaiting:(BOOL)arg1;
- (void)updateScanProgress:(double)arg1;
- (void)updateScanProgressWaitingMessage:(id)arg1;
- (void)updateScanProgressActiveMessage:(id)arg1;
- (void)updateDeletionProgressWithVisible:(BOOL)arg1 showPercents:(BOOL)arg2 progress:(double)arg3 phase:(unsigned char)arg4;
- (void)updateScannedBytesWithVisible:(BOOL)arg1 scannedBytes:(unsigned long long)arg2;
- (void)updateGaugeWithVisible:(BOOL)arg1 capacityBytes:(unsigned long long)arg2 usedBytes:(unsigned long long)arg3 freeBytes:(unsigned long long)arg4 reservedBytes:(unsigned long long)arg5 overflow:(BOOL)arg6;
- (void)updateDescriptionWithIcon:(id)arg1 accessType:(unsigned long long)arg2 name:(id)arg3 sourceDescription:(id)arg4 capacityBytes:(id)arg5;
- (void)updateEdgeTopAdjacent:(BOOL)arg1 edgeBottomAdjacent:(BOOL)arg2;
@property(nonatomic) BOOL admin;
@property(nonatomic) BOOL ready;
@property(readonly, nonatomic) double commonButtonWidth;
- (BOOL)hasKeyView:(id)arg1;
- (void)switchKeyboardFocusToState:(id)arg1;
- (void)setErrorState;
- (id)getOrMakeErrorState;
- (void)setProgressStateWithAnimation:(BOOL)arg1;
- (id)getOrMakeProgressState;
@property(readonly, nonatomic) BOOL isProgressState;
- (void)setOverviewStateWithAnimation:(BOOL)arg1;
- (id)getOrMakeOverviewState;
- (id)factoryErrorState;
- (id)factoryProgressState;
- (id)factoryOverviewState;
- (id)initWithExtendedContext:(id)arg1 sizeMathBase:(long long)arg2;

// Remaining properties
@property(readonly, nonatomic) double backingScaleFactor;
@property(readonly, nonatomic) id <DDSTItemViewContext> context; // @dynamic context;
@property(readonly, nonatomic) DDSTItemState *currentState; // @dynamic currentState;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <IXHostProtocol> ixHost;
@property(readonly, nonatomic) STTableViewStyles *styles;
@property(readonly) Class superclass;

@end

