//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class MAChannelStripView, NSEvent, NSMenu, NSString, NSView;
@protocol MAChannelStripDataSource, MAPlugInDataSource;

@protocol MAChannelStripEditor
- (BOOL)mouseDownOnBackground:(NSEvent *)arg1;
- (NSString *)toolTipForArea:(long long)arg1 elementIndex:(unsigned long long)arg2;
- (void)mouseExitedChannelStrip;
- (void)mouseEnteredArea:(long long)arg1 elementIndex:(unsigned long long)arg2 trackingElementRect:(struct CGRect)arg3;
- (void)showVisibilityMenuForEvent:(NSEvent *)arg1 andView:(MAChannelStripView *)arg2;
- (void)setNotes:(NSString *)arg1;
- (void)setName:(NSString *)arg1;
- (void)toggleAllCollapsibleMainViewsWithMainView:(NSView *)arg1;
- (void)toggleIsCollapsedMainView:(NSView *)arg1;
- (void)bounceTrack;
- (void)deleteMultiOutputAux;
- (void)createMultiOutputAux;
- (void)stopTrackingSpread;
- (void)stopTrackingPan;
- (void)openPannerPlugIn;
- (void)setSurroundAngle:(float)arg1 diversity:(float)arg2 spread:(float)arg3;
- (void)setSpread:(float)arg1;
- (void)setPan:(int)arg1 spread:(float)arg2;
- (void)setPan:(int)arg1;
- (void)startTrackingSpread;
- (void)startTrackingPan;
- (void)setPannerType:(long long)arg1;
- (long long)showPannerMenuAtPoint:(struct CGPoint)arg1;
- (void)setRecordEnabled:(BOOL)arg1;
- (void)setMonitoringInput:(BOOL)arg1;
- (void)setDimmed:(BOOL)arg1;
- (void)setSoloState:(unsigned long long)arg1 exclusively:(BOOL)arg2;
- (void)setMuted:(BOOL)arg1;
- (void)stopTrackingVolume;
- (void)setExpression:(BOOL)arg1;
- (void)startTrackingExpressionValue;
- (void)stopTrackingMIDIAssignAtIndex:(unsigned long long)arg1;
- (void)setMIDIAssignValue:(BOOL)arg1 forIndex:(unsigned long long)arg2;
- (void)startTrackingMIDIAssignAtIndex:(unsigned long long)arg1;
- (void)setMIDIAssign:(long long)arg1 forIndex:(unsigned long long)arg2;
- (void)resetClipLevel;
- (long long)showMIDIAssignMenuForIndex:(unsigned long long)arg1 atPoint:(struct CGPoint)arg2;
- (void)setMIDIBankLSB:(BOOL)arg1;
- (void)setMIDIBankMSB:(BOOL)arg1;
- (NSMenu *)MIDIProgramMenu;
- (NSMenu *)MIDIOutputChannelMenu;
- (NSMenu *)MIDIOutputPortMenu;
- (void)setAutomationEnabled:(BOOL)arg1;
- (BOOL)automationEnabled;
- (void)setAutomationMode:(long long)arg1;
- (long long)showAutomationModeMenuAtPoint:(struct CGPoint)arg1;
- (void)setAutomationGroups:(long long)arg1;
- (void)setAutomationGroup:(long long)arg1;
- (NSMenu *)automationGroupMenu;
- (NSMenu *)submasterMenu;
- (void)setSubmasterWithIndex:(long long)arg1;
- (void)revealSubmaster;
- (NSMenu *)channelModeMenu;
- (void)setChannelMode:(int)arg1;
- (void)revealOutputChannel;
- (NSMenu *)outputMenu;
- (NSMenu *)inputMenu;
- (void)revealSendOutputChannelForSlot:(unsigned long long)arg1;
- (BOOL)setSendMuted:(BOOL)arg1 forSlot:(unsigned long long)arg2;
- (void)stopTrackingSendVolumeForSlot:(unsigned long long)arg1;
- (BOOL)setSendVolume:(long long)arg1 forSlot:(unsigned long long)arg2;
- (void)startTrackingSendVolumeForSlot:(unsigned long long)arg1;
- (NSMenu *)sendMenuForSlot:(unsigned long long)arg1;
- (void)setLibraryIndicatorType:(long long)arg1 slot:(long long)arg2;
- (void)loadAudioFileAtPath:(NSString *)arg1;
- (BOOL)canLoadAudioFileAtPath:(NSString *)arg1;
- (BOOL)insertPlugInWithIndex:(long long)arg1 toChannelDataSource:(id <MAChannelStripDataSource>)arg2 inSlot:(unsigned long long)arg3 isMIDIPlugIn:(BOOL)arg4;
- (BOOL)copyPlugInWithDataSource:(id <MAPlugInDataSource>)arg1 fromSlot:(unsigned long long)arg2 toChannelDataSource:(id <MAChannelStripDataSource>)arg3 inSlot:(unsigned long long)arg4 replacing:(BOOL)arg5 isMIDIPlugIn:(BOOL)arg6;
- (BOOL)copyPlugInWithDataSource:(id <MAPlugInDataSource>)arg1 fromSlot:(unsigned long long)arg2 toChannelDataSource:(id <MAChannelStripDataSource>)arg3 inSlot:(unsigned long long)arg4 replacing:(BOOL)arg5;
- (BOOL)movePlugInWithDataSource:(id <MAPlugInDataSource>)arg1 fromSlot:(unsigned long long)arg2 toChannelDataSource:(id <MAChannelStripDataSource>)arg3 inSlot:(unsigned long long)arg4 replacing:(BOOL)arg5 isMIDIPlugIn:(BOOL)arg6;
- (BOOL)movePlugInWithDataSource:(id <MAPlugInDataSource>)arg1 fromSlot:(unsigned long long)arg2 toChannelDataSource:(id <MAChannelStripDataSource>)arg3 inSlot:(unsigned long long)arg4 replacing:(BOOL)arg5;
- (void)setBypassed:(BOOL)arg1 forPlugInDataSource:(id <MAPlugInDataSource>)arg2 inSlot:(long long)arg3 isMIDIPlugIn:(BOOL)arg4;
- (void)setBypassed:(BOOL)arg1 forPlugInDataSource:(id <MAPlugInDataSource>)arg2 inSlot:(long long)arg3;
- (BOOL)closePlugIn:(long long)arg1 isMIDIPlugIn:(BOOL)arg2;
- (BOOL)closePlugIn:(long long)arg1;
- (BOOL)openPlugIn:(long long)arg1 isMIDIPlugIn:(BOOL)arg2;
- (BOOL)openPlugIn:(long long)arg1;
- (BOOL)toggleMetaPlugIn;
- (BOOL)togglePlugIn:(long long)arg1 isMIDIPlugIn:(BOOL)arg2;
- (BOOL)togglePlugIn:(long long)arg1;
- (long long)showPlugInMenuForSlot:(unsigned long long)arg1 atPoint:(struct CGPoint)arg2 isMIDIPlugIn:(BOOL)arg3 showsCurrent:(BOOL)arg4;
- (long long)showPlugInMenuForSlot:(unsigned long long)arg1 atPoint:(struct CGPoint)arg2 isMIDIPlugIn:(BOOL)arg3;
- (long long)showPlugInMenuForSlot:(unsigned long long)arg1 atPoint:(struct CGPoint)arg2;
- (BOOL)setCurrentPlugInIndex:(long long)arg1 inSlot:(long long)arg2 isMIDIPlugIn:(BOOL)arg3;
- (BOOL)setCurrentPlugInIndex:(long long)arg1 inSlot:(long long)arg2;
- (unsigned long long)createEQInFirstSlot:(BOOL)arg1;
- (unsigned long long)createCompressorInFirstSlot:(BOOL)arg1;
- (BOOL)loadCSTFromPath:(NSString *)arg1;
- (BOOL)canLoadCSTFromPath:(NSString *)arg1;
- (long long)showChannelStripMenuAtPoint:(struct CGPoint)arg1;
- (BOOL)plugInChannelStripMenuKeyEquivalent:(NSEvent *)arg1;
- (void)setHardwareMonitoringEnabled:(BOOL)arg1;
- (void)stopTrackingInputGain;
- (void)setInputGainDecibels:(double)arg1;
- (void)setInputGain:(double)arg1;
- (void)startTrackingInputGain;
- (void)setPhaseInvertEnabled:(BOOL)arg1;
- (void)setHighPassFilterEnabled:(BOOL)arg1;
- (void)setPhantomPowerEnabled:(BOOL)arg1;
- (NSMenu *)sensitivityMenu;
- (BOOL)performKeyEquivalent:(NSEvent *)arg1;

@optional
- (void)setSpread:(float)arg1 othersToSameValue:(BOOL)arg2;
- (void)setPan:(int)arg1 spread:(float)arg2 othersToSameValue:(BOOL)arg3;
- (void)setPan:(int)arg1 othersToSameValue:(BOOL)arg2;
- (void)setVolume:(long long)arg1 withOldVolume:(long long)arg2;
- (void)setVolume:(long long)arg1 othersToSameValue:(BOOL)arg2;
- (void)setVolume:(long long)arg1;
- (void)startTrackingVolume;
- (void)stopTrackingExpressionValue;
- (void)setExpression:(BOOL)arg1 othersToSameValue:(BOOL)arg2;
- (BOOL)setSendVolume:(long long)arg1 forSlot:(unsigned long long)arg2 othersToSameValue:(BOOL)arg3;
@end

