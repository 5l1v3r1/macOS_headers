//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APCPlayer, AVAudioPlayer, NSDate, NSString, SFClient, SFDeviceOperationHandlerWiFiSetup, SFService, SFSession, SFSiriClient;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFDeviceSetupB238Service : NSObject
{
    BOOL _activateCalled;
    BOOL _advertiseFast;
    struct NSData *_acpCapData;
    APCPlayer *_apcPlayer;
    NSObject<OS_dispatch_source> *_finishTimer;
    BOOL _invalidateCalled;
    unsigned long long _peerFeatureFlags;
    SFClient *_preventExitForLocaleClient;
    SFService *_sfService;
    SFSession *_sfSession;
    SFSiriClient *_siriClientDeviceSetup;
    SFSiriClient *_siriClientDialog;
    SFSiriClient *_siriClientSpeak;
    BOOL _wifiSetupEnabled;
    SFDeviceOperationHandlerWiFiSetup *_wifiSetupHandler;
    AVAudioPlayer *_audioPlayerStart;
    AVAudioPlayer *_audioPlayerStep;
    AVAudioPlayer *_audioPlayerDone;
    NSString *_languageCode;
    NSString *_localeIdentifier;
    NSString *_temperatureUnit;
    NSString *_siriListenLanguage;
    long long _siriVoiceGender;
    NSString *_siriVoiceLanguage;
    NSDate *_timeObj;
    int _timeAuto;
    long long _timeCycle;
    NSString *_timeZone;
    int _timeZoneAuto;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _progressHandler;
}

@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)_setSystemName:(id)arg1 hostname:(id)arg2;
- (void)_setSiriLanguageInfo;
- (BOOL)_playSoundID:(int)arg1 error:(id *)arg2;
- (void)_handleSiriDialogIdentifier:(id)arg1;
- (void)_handleRawRequest:(id)arg1 flags:(unsigned int)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)_handlePreAuthRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handlePlaySoundRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handleFinishDone;
- (int)_handleFinishRequest:(id)arg1;
- (void)_handleBasicConfigResponse:(id)arg1;
- (int)_handleBasicConfigRequest:(id)arg1;
- (void)_handleAuthActionSiriStart:(id)arg1;
- (void)_handleAuthActionSiriInit;
- (void)_handleAuthActionAudioPasscodeStartWithResponse:(id)arg1;
- (void)_handleAuthActionAudioPasscodeInit:(id)arg1 response:(id)arg2;
- (void)_handleAuthActionRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handleSessionEnded:(id)arg1;
- (void)_handleSessionStarted:(id)arg1;
- (void)_sfServiceStart;
- (void)_invalidate;
- (void)invalidate;
- (void)_activate;
- (void)activate;
- (void)_cleanup;
- (void)dealloc;
- (id)init;

@end

