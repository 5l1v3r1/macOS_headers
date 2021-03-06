//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DfDocument, NSArray, NSDictionary, NSMutableDictionary, NSString;
@protocol MADSPTunerDataSource><NSObject;

@interface DfChannel : NSObject
{
    DfDocument *m_pDocument;
    int m_instID;
    long long m_channelIndex;
    NSString *m_strChaStrName;
    NSString *m_strCategoryName;
    NSString *m_strSubcategoryName;
    int m_channelType;
    int m_isGuitar;
    int m_hasInput;
    BOOL m_fIsDirty;
    BOOL m_fAGCPrepared;
    BOOL m_fFBDPrepared;
    BOOL m_fFBDPersistentState;
    BOOL m_echoSendAutomated;
    BOOL m_reverbSendAutomated;
    NSMutableDictionary *m_plugInSlots;
    NSMutableDictionary *m_plugInInternalSlots;
    NSMutableDictionary *m_propertyDict;
    NSMutableDictionary *m_cstPropertyDict;
    id <MADSPTunerDataSource><NSObject> m_tunerDataSource;
    NSArray *m_cachedMb3ArticulationNames;
    NSArray *m_cachedMb3InstrumentNames;
    NSDictionary *m_cachedMb3InstrumentKeyRanges;
    BOOL m_isFlyweight;
}

+ (void)initialize;
+ (id)metronomeChannelWithDoument:(id)arg1;
+ (id)channelWithDocument:(id)arg1 andInstID:(int)arg2;
+ (id)channelWithDocument:(id)arg1 andObjectType:(int)arg2 atChannelIndex:(long long)arg3;
+ (id)channelWithChannel:(id)arg1;
+ (id)createNewChannelWithDocument:(id)arg1 andObjectType:(int)arg2 andNumberOfChannels:(long long)arg3;
+ (id)createNewChannelWithDocument:(id)arg1 andObjectType:(int)arg2 andNumberOfChannels:(long long)arg3 atTrackIndex:(long long)arg4;
+ (id)createNewChannelWithDocument:(id)arg1 andObjectType:(int)arg2 andNumberOfChannels:(long long)arg3 atTrackIndex:(long long)arg4 makeUndo:(BOOL)arg5;
+ (void)setHackTempDisableCachePool:(BOOL)arg1;
+ (BOOL)determineCategoryAndSubCategoryFromFullPath:(id)arg1 outCategory:(id *)arg2 outSubCategory:(id *)arg3;
- (void).cxx_destruct;
- (BOOL)removeAutomationForChangesInPluginMemento:(id)arg1;
- (id)channelStripPluginMemento;
- (void)moveAutomationFromSlot:(int)arg1 toSlot:(int)arg2 insert:(BOOL)arg3 withLogicAutomation:(BOOL)arg4;
- (void)removeAutomationForSlotsAndCtrls:(id)arg1 withLogicAutomation:(BOOL)arg2;
- (void)removeAutomationForSlots:(id)arg1 withLogicAutomation:(BOOL)arg2;
- (void)removeAutomationForSlot:(int)arg1 withLogicAutomation:(BOOL)arg2;
- (void)removeAutomationForLgGenCtrls:(id)arg1 withLogicAutomation:(BOOL)arg2;
- (void)removeAutomationForLgGenCtrl:(CDStruct_5115be14)arg1 withLogicAutomation:(BOOL)arg2;
- (id)_pluginForForSlot:(int)arg1;
- (void)_setAutomated:(BOOL)arg1 forLgGenCtrl:(CDStruct_5115be14)arg2 andPlugIn:(id)arg3;
- (int)getFixedMb3InstrumentIndexForKeyNumber:(int)arg1 currentInstrumentIndex:(int)arg2;
- (struct _NSRange)keyRangeForMb3InstrumentName:(id)arg1;
- (id)availableMb3InstrumentNames;
- (id)availableMb3ArticulationNames;
- (void)_fillMb3ArticulationAndInstrumentCaches;
- (int)mb3FromInstrumentName:(id)arg1 articulationName:(id)arg2;
- (int)mb3FromString:(id)arg1;
- (id)mb3ToArticulationName:(int)arg1;
- (id)mb3ToInstrumentName:(int)arg1;
- (id)mb3ToString:(int)arg1;
- (void)_resetMb3Caches;
@property(nonatomic) long long remixPlugInVersion;
- (id)contentMappingKey;
- (void)setContentMappingKey:(id)arg1;
- (struct _NSRange)keyRange;
- (void)setKeyRange:(struct _NSRange)arg1;
- (int)controlParamForControlParamId:(int)arg1;
- (int)setControlParam:(int)arg1 forControlParamId:(int)arg2;
- (int)controlSlotForControlSlotId:(int)arg1;
- (int)setControlSlot:(int)arg1 forControlSlotId:(int)arg2;
- (void)controllerRangeLeftValue:(float *)arg1 rightValue:(float *)arg2 forControlID:(id)arg3;
- (void)setControllerRangeLeftValue:(float)arg1 rightValue:(float)arg2 forControlID:(id)arg3;
- (BOOL)hasSmartControlIdentityMappings;
- (id)smartControlIdentityForControlID:(id)arg1;
- (void)setSmartControlIdentity:(id)arg1 forControlID:(id)arg2;
- (BOOL)shouldShowPlugTitleIsoParamTitleForControlID:(id)arg1;
- (void)setShouldShowPlugTitleIsoParamTitle:(BOOL)arg1 forControlID:(id)arg2;
- (BOOL)hasSustain;
- (void)setHasSustain:(BOOL)arg1;
- (BOOL)hasPitchBend;
- (void)setHasPitchBend:(BOOL)arg1;
- (BOOL)hasModWheel;
- (void)setHasModWheel:(BOOL)arg1;
- (void)setEnhancedControlsDict:(id)arg1;
- (id)enhancedControlsDict;
- (void)setParamMappingDict:(id)arg1;
- (id)paramMappingDict;
- (void)setBrowserIconId:(int)arg1;
- (int)browserIconId;
- (void)setSkinId:(id)arg1;
- (id)skinId;
- (void)_setChannelConfigurationVersion:(id)arg1;
- (id)channelConfigurationVersion;
- (void)setInputMethodSettings:(id)arg1;
- (id)inputMethodSettings;
- (void)setInputMethodCSTSettings:(id)arg1;
- (id)inputMethodCSTSettings;
- (double)cbPianoRollEditorHeight;
- (void)setCbPianoRollEditorHeight:(double)arg1;
- (id)lastEditedDate;
- (void)setLastEditedDate:(id)arg1;
- (BOOL)trackMergeRecordingActive;
- (void)setTrackMergeRecordingActive:(BOOL)arg1;
- (void)_setCustomIconImageFilename:(id)arg1;
- (id)_customIconImageFilename;
- (void)setNameIsUserModified:(BOOL)arg1;
- (BOOL)nameIsUserModified;
- (void)setInputMethodKey:(id)arg1;
- (id)inputMethodKey;
- (void)setInputQuantizeType:(int)arg1;
- (int)inputQuantizeType;
- (void)setPersistentAutomatedParameterData:(id)arg1;
- (id)persistentAutomatedParameterData;
- (id)_mutablePersistentAutomatedParameterData;
- (void)setPropertiesFromDict:(id)arg1;
- (id)copyOfPropertyDict;
- (void)_storeCstProperties;
- (void)_storeProperties;
- (void)_handleCstPropertiesStoredOrChanged:(id)arg1;
- (void)_handlePropertiesStoredOrChanged:(id)arg1;
- (void)_audioUnitsChanged:(id)arg1;
- (id)sessionTrackUUID;
- (BOOL)hasValidSessionTrackUUID;
- (void)setSessionTrackUUID:(id)arg1;
- (void)createSessionTrackUUID;
- (void)setPersistentGroovetrackQRangeAmount:(short)arg1;
- (short)persistentGroovetrackQRangeAmount;
- (void)setPersistentTrackRecEnableState:(BOOL)arg1;
- (void)setPersistentTrackGrooveState:(int)arg1;
- (int)persistentTrackGrooveState;
- (void)setPersistentTrackFlexEditBypassState:(BOOL)arg1;
- (BOOL)persistentTrackRecEnableState;
- (void)setForceKeepOnSmartReplace:(BOOL)arg1;
- (BOOL)forceKeepOnSmartReplace;
- (BOOL)persistentTrackFlexEditBypassState;
- (id)flexModes;
- (int)flexAudioMode;
- (void)selectFlexAudioMode:(int)arg1;
- (void)switchLiveMode:(BOOL)arg1;
- (BOOL)liveModeIsEnabled;
- (void)enableLiveMode;
- (id)outputChannel;
- (int)setOutputChannel:(id)arg1;
- (BOOL)setChaseNotes:(BOOL)arg1;
- (BOOL)chaseNotes;
- (BOOL)setCanTranspose:(BOOL)arg1;
- (BOOL)canTranspose;
- (long long)freezeStatus;
- (void)setLockedBypassMode:(BOOL)arg1;
- (void)setLocked:(BOOL)arg1;
- (BOOL)isLocked;
- (int)iconID;
- (int)setIconID:(int)arg1;
- (void)recoverInputIndex;
- (long long)inputIndex;
- (int)setInputIndex:(long long)arg1;
- (int)internalSetInputIndex:(long long)arg1;
- (BOOL)isStereo;
- (long long)numChannels;
- (int)setChannels:(long long)arg1;
- (BOOL)_setNumChannels:(long long)arg1;
- (void)updateNumChannels;
- (float)inputGain;
- (int)setInputGain:(float)arg1;
- (BOOL)hasInputGain;
- (int)setReverbSendAutomated:(BOOL)arg1;
- (int)setEchoSendAutomated:(BOOL)arg1;
- (int)setReverbSendMute:(BOOL)arg1;
- (int)setEchoSendMute:(BOOL)arg1;
- (int)setReverbSend:(float)arg1;
- (int)setEchoSend:(float)arg1;
- (int)setChannelPanIntValue:(int)arg1;
- (int)setChannelPanFloatValue:(float)arg1;
- (int)setChannelVolume:(float)arg1;
- (float)inputLevelmeter2;
- (float)inputLevelmeter;
- (float)levelmeter2;
- (float)levelmeter;
- (long long)numLevelmeters;
- (BOOL)isReverbSendAutomated;
- (BOOL)isEchoSendAutomated;
- (BOOL)isReverbSendMuted;
- (BOOL)isEchoSendMuted;
- (float)reverbSendValue;
- (float)echoSendValue;
- (int)channelPanIntValue;
- (float)channelPanFloatValue;
- (float)channelVolume;
- (int)setRecordEnable:(BOOL)arg1;
- (BOOL)supportsRecEnabling;
- (int)setInpMonitorMode:(int)arg1;
- (int)setInpMonitorOnWithFBD;
- (int)setInpMonitorOn;
- (int)setInpMonitorOff;
- (int)_setInpMonitor:(BOOL)arg1;
- (int)setSolo:(BOOL)arg1;
- (int)setMute:(BOOL)arg1;
- (BOOL)isRecordEnabled;
- (BOOL)inputMonitoringIsOn;
- (int)inputMonitorMode;
- (BOOL)_isInpMonitor;
- (BOOL)isSoloed;
- (BOOL)isMuted;
- (BOOL)willPostNotifications;
- (void)setShouldPostNotifications:(BOOL)arg1;
- (long long)channelIndex;
- (BOOL)hasInput;
- (BOOL)isAudioUnit;
- (BOOL)isAlchemy;
- (BOOL)isDrummer;
- (BOOL)isGenInst;
- (BOOL)isGuitar;
- (void)_updateIsGuitar;
- (BOOL)isMetronome;
- (BOOL)isAux;
- (BOOL)isBus;
- (BOOL)isMaster;
- (BOOL)isMidi;
- (BOOL)isAudio;
- (int)type;
- (long long)numberOfSlots;
- (void)setRootTrackName:(id)arg1 onlyIfNotUserModified:(BOOL)arg2;
- (id)rootTrackName;
- (id)trackName;
- (CDStruct_3d4e291e)trackID;
- (void)updateWithTrackHandle:(const struct _LgTrack *)arg1;
- (void)_handleUpdateInternalCachesOnCSTChange:(id)arg1;
- (void)_updateInternalCachesOnCSTChange:(BOOL)arg1;
- (void)_updateInternalCachesOnCSTChange;
- (void)_resetChannelStripNameAndCategoryCache;
- (void)_replaceCstPropertiesDict:(id)arg1;
- (id)_propertiesDict;
- (id)_cstPropertiesDict;
- (void)_setCstPropertyDictObject:(id)arg1 forKey:(id)arg2;
- (void)_updateCSTDictionary;
- (void)_updatePropertyDictionary;
- (void)update;
- (int)instID;
- (void)clearDocumentRef:(id)arg1;
- (id)document;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (int)deleteAndMakeUndo:(BOOL)arg1;
- (id)initWithDocument:(id)arg1 andInstID:(int)arg2;
- (id)init;
- (id)initWithDocument:(id)arg1 andTrackHandle:(const struct _LgTrack *)arg2;
- (id)initWithDocument:(id)arg1 andObjectType:(int)arg2 atChannelIndex:(long long)arg3;
- (BOOL)_m_fIsDirty;
- (void)fixPluginToChannelMode;
- (void)convertPluginsToStereo;
- (int)setHalfSampleRate:(BOOL)arg1;
- (BOOL)isHalfSampleRate;
- (int)saveSamplerInstrumentAndSamples:(id)arg1;
- (int)saveChaStripToFile:(id)arg1 asCST:(BOOL)arg2 updateChannelStripNameAndFullPath:(BOOL)arg3;
- (int)saveChaStripToFile:(id)arg1 asCST:(BOOL)arg2;
- (int)loadChaStripWithContentsOfFile:(id)arg1 restorePrevMonitoring:(BOOL)arg2 categoryName:(id)arg3 chStripName:(id)arg4 makeUndoType:(int)arg5 usePerformanceMode:(BOOL)arg6;
- (void)_afterSuccessfulCSTOrPatchLoading:(id)arg1 postNotification:(BOOL)arg2;
- (int)_beforeCSTOrPatchLoading:(id *)arg1;
- (int)loadChaStripWithContentsOfFile:(id)arg1 restorePrevMonitoring:(BOOL)arg2 makeUndoType:(int)arg3 usePerformanceMode:(BOOL)arg4;
- (void)setDirty:(BOOL)arg1;
- (BOOL)isDirty;
- (int)setChannelStripCategory:(id)arg1;
- (id)exsInstrumentNameOfChannelStrip:(id)arg1;
- (long long)instrumentIdOfChannelStrip:(id)arg1;
- (id)channelStripSubcategory;
- (id)categoryOfChannelStrip:(id)arg1;
- (id)channelStripCategory;
- (id)channelStripFullPathAutoFixed:(BOOL)arg1;
- (BOOL)lastCSTBrowserLocationWasRecentsCategory;
- (void)setLastCSTBrowserLocationWasRecentsCategory:(BOOL)arg1;
- (id)originalLibraryChannelStripRelativePath;
- (void)_setOriginalLibraryChannelStripRelativePath:(id)arg1 category:(id)arg2 name:(id)arg3;
- (void)getOriginalLibraryChannelstripCategory:(id *)arg1 subCategory:(id *)arg2 name:(id *)arg3;
- (void)_writeOriginalLibraryChannelStripInfoToTrackPropertiesIfNeeded;
- (id)channelStripFullPath;
- (void)setChannelStripFullPath:(id)arg1;
- (int)setChannelStripName:(id)arg1;
- (BOOL)hasEqualChannelStripNameAndCategoryAsFirstCSTInClipBoard;
- (BOOL)hasEqualChannelStripNameAndCategoryAs:(id)arg1;
- (id)channelStripName;
- (int)setChaStripWithData:(id)arg1 restorePrevMonitoring:(BOOL)arg2 chaStripName:(id)arg3 categoryName:(id)arg4 chaStripFullPath:(id)arg5 makeUndoType:(int)arg6 usePerformanceMode:(BOOL)arg7 postNotification:(BOOL)arg8;
- (id)channelStripData;
- (int)typeOfChannelStrip:(id)arg1;
- (id)formerInputLevel;
- (void)setFormerInputLevel:(id)arg1;
- (BOOL)shouldHaveMaxInput;
- (void)setShouldHaveMaxInput:(BOOL)arg1;
- (BOOL)isAGCEnabled;
- (int)setEnableAGC:(BOOL)arg1;
- (BOOL)isAGCPrepared;
- (int)setPrepareAGC:(BOOL)arg1;
- (id)currentAGCPlugIn;
- (BOOL)isFBDEnabled;
- (int)setEnableFBD:(BOOL)arg1;
- (BOOL)isFBDPrepared;
- (BOOL)persistentFBDState;
- (void)setPersistentFBDState:(BOOL)arg1;
- (int)setPrepareFBD:(BOOL)arg1;
- (BOOL)isFeedbackDetected;
- (id)currentFBDPlugIn;
- (BOOL)isInputEQEnabled;
- (int)setEnableInputEQ:(BOOL)arg1;
- (id)currentInputEQPlugIn;
- (int)getTunerNote:(long long *)arg1 andTune:(long long *)arg2 andOctave:(long long *)arg3;
- (BOOL)isTunerEnabled;
- (int)setEnableTuner:(BOOL)arg1;
- (void)resetMasterLiveRemixFXPlugIn;
- (void)removeMasterLiveRemixFXPlugIn;
- (id)currentMasterLiveRemixFX;
- (int)addMasterLiveRemixFX;
- (id)plugInsForSlotMask:(long long)arg1;
- (id)plugInValueInfoDictForParameter:(long long)arg1 inSlot:(long long)arg2 valueStringOnly:(BOOL)arg3 isMidiPlugin:(BOOL)arg4;
- (id)plugInValueInfoDictForParameter:(long long)arg1 inSlot:(long long)arg2 valueStringOnly:(BOOL)arg3;
- (id)plugInParameterInfoArrayForSlot:(long long)arg1 isMidiPlugin:(BOOL)arg2;
- (id)plugInParameterInfoArrayForSlot:(long long)arg1;
- (void)resetAllPlugInSettingNames;
- (int)swapPlugInSlot:(int)arg1 withPlugInSlot:(int)arg2 insert:(BOOL)arg3;
- (int)setPlugInWithPlugInID:(long long)arg1 intoInputObjectSlot:(long long)arg2;
- (int)setPlugInWithPlugInID:(long long)arg1 intoSlot:(long long)arg2;
- (int)setPlugInWithPlugInID:(long long)arg1 productID:(long long)arg2 intoSlot:(long long)arg3 isMidiPlugin:(BOOL)arg4 numInputs:(long long)arg5 numOutputs:(long long)arg6;
- (int)setPlugInWithPlugInID:(long long)arg1 intoSlot:(long long)arg2 isMidiPlugin:(BOOL)arg3 numInputs:(long long)arg4 numOutputs:(long long)arg5;
- (int)setPlugInWithPlugInID:(long long)arg1 intoSlot:(long long)arg2 isMidiPlugin:(BOOL)arg3;
- (int)setPlugIn:(id)arg1 intoSlot:(long long)arg2;
- (int)setPlugIn:(id)arg1 intoSlot:(long long)arg2 isMidiPlugin:(BOOL)arg3;
- (id)currentInputPlugInFromSlot:(long long)arg1;
- (id)currentMasterReverb;
- (id)currentMasterEcho;
- (id)currentCompressor;
- (id)currentBassAmp;
- (id)currentGuitarAmp;
- (id)currentPedalBoard;
- (id)currentEQ;
- (id)currentNoisegate;
- (id)currentPluginFromUserSlotsWithID:(long long)arg1;
- (id)currentGenerator;
- (id)currentPlugInFromSlot:(long long)arg1;
- (id)currentPlugInFromSlot:(long long)arg1 isMidiPlugin:(BOOL)arg2;
- (id)getAudioUnitPlugInWithDescription:(struct AudioComponentDescription *)arg1 fromSlot:(long long)arg2;
- (id)sortedAudioUnitPlugInsFromSlot:(long long)arg1;
- (id)sortedMIDIPlugInsFromSlot:(long long)arg1 filterNotWhiteListed:(BOOL)arg2;
- (id)sortedPlugInsFromSlot:(long long)arg1 internalOnly:(BOOL)arg2 proposedIOConfigOnly:(BOOL)arg3;
- (id)sortedPlugInsFromSlot:(long long)arg1 internalOnly:(BOOL)arg2;
- (id)plugInFromSlot:(long long)arg1 withIndex:(long long)arg2;
- (id)plugInInSlotBeforeSlot:(long long)arg1;
- (id)plugInFromSlot:(long long)arg1 isMidiPlugin:(BOOL)arg2 withIndex:(long long)arg3;
- (long long)numberOfPlugIns:(long long)arg1;
- (id)_getPlugInInfoWithInstID:(int)arg1 andSlot:(long long)arg2 isMidiPlugin:(BOOL)arg3 andPlugInIndex:(long long)arg4 useInputObject:(BOOL)arg5;
- (id)_getCurPlugInInfoWithInstID:(int)arg1 andSlot:(long long)arg2 isMidiPlugin:(BOOL)arg3 useInputObject:(BOOL)arg4;
- (BOOL)_setPlugInWithInstID:(int)arg1 andSlot:(long long)arg2 isMidiPlugin:(BOOL)arg3 andPlugInID:(long long)arg4 useInputObject:(BOOL)arg5;
- (BOOL)_setPlugInWithInstID:(int)arg1 andSlot:(long long)arg2 isMidiPlugin:(BOOL)arg3 andPlugInIndex:(long long)arg4 andPlugInInfo:(id)arg5 useInputObject:(BOOL)arg6;
- (int)_setPlugInWithIndex:(long long)arg1 intoSlot:(long long)arg2 isMidiPlugin:(BOOL)arg3;
- (int)_setupPlugInDefaultsInSlot:(long long)arg1 isMidiPlugin:(BOOL)arg2;
- (id)_currentPlugInFromSlot:(long long)arg1 isMidiPlugin:(BOOL)arg2;
- (id)_plugInFromSlot:(long long)arg1 isMidiPlugin:(BOOL)arg2 withIndex:(long long)arg3;
- (id)_currentPlugInInfoFromSlot:(long long)arg1 isMidiPlugin:(BOOL)arg2 useInputObject:(BOOL)arg3;
- (id)_plugInInfo:(long long)arg1 isMidiPlugin:(BOOL)arg2 plugInIndex:(long long)arg3 useInputObject:(BOOL)arg4;
- (long long)_numberOfPlugIns:(long long)arg1;

@end

