//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriUI/AFQueueDelegate-Protocol.h>
#import <SiriUI/AFUISpeechSynthesis-Protocol.h>
#import <SiriUI/AFUISpeechSynthesisElementDelegate-Protocol.h>
#import <SiriUI/AVAudioPlayerDelegate-Protocol.h>
#import <SiriUI/NSSpeechSynthesizerDelegate-Protocol.h>

@class AFQueue, AFVoiceInfo, AVAudioPlayer, NSMutableArray, NSOperationQueue, NSSpeechSynthesizer, NSString;
@protocol AFUISpeechSynthesisDelegate, AFUISpeechSynthesisLocalDelegate;

@interface AFUISpeechSynthesis : NSObject <AFQueueDelegate, AFUISpeechSynthesisElementDelegate, NSSpeechSynthesizerDelegate, AVAudioPlayerDelegate, AFUISpeechSynthesis>
{
    NSSpeechSynthesizer *_queuedSynthesizer;
    AFVoiceInfo *_outputVoice;
    id <AFUISpeechSynthesisDelegate> _delegate;
    id <AFUISpeechSynthesisLocalDelegate> _localDelegate;
    double _lastSpeechJob;
    BOOL _disableAudioDucking;
    BOOL _synthNeedsDefrost;
    AFQueue *_elementQueue;
    NSMutableArray *_activeElements;
    NSOperationQueue *_operationQueue;
    NSSpeechSynthesizer *_synthesizer;
    AVAudioPlayer *_serverAudioPlayer;
}

+ (id)_speechSynthesizerWithVoice:(id)arg1 downloadVoice:(BOOL)arg2;
@property BOOL synthNeedsDefrost; // @synthesize synthNeedsDefrost=_synthNeedsDefrost;
@property(retain, nonatomic) AVAudioPlayer *serverAudioPlayer; // @synthesize serverAudioPlayer=_serverAudioPlayer;
@property(retain, nonatomic, getter=_synthesizer) NSSpeechSynthesizer *synthesizer; // @synthesize synthesizer=_synthesizer;
@property(readonly, nonatomic, getter=_operationQueue) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic, getter=_activeElements) NSMutableArray *activeElements; // @synthesize activeElements=_activeElements;
@property(readonly, nonatomic, getter=_elementQueue) AFQueue *elementQueue; // @synthesize elementQueue=_elementQueue;
@property(retain, nonatomic) id <AFUISpeechSynthesisDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <AFUISpeechSynthesisLocalDelegate> localDelegate; // @synthesize localDelegate=_localDelegate;
@property(nonatomic) BOOL disableAudioDucking; // @synthesize disableAudioDucking=_disableAudioDucking;
- (void).cxx_destruct;
- (unsigned long long)_AFUISetAudioSessionActiveOptionsForElement:(id)arg1;
- (void)_processProvisionalElements;
- (void)_handleText:(id)arg1;
- (void)_handleAudioData:(id)arg1;
- (void)_processElementQueue;
- (void)enqueueText:(id)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_enqueueText:(id)arg1 audioData:(id)arg2 identifier:(id)arg3 isPhonetic:(BOOL)arg4 provisionally:(BOOL)arg5 eligibleAfterDuration:(double)arg6 preparationIdentifier:(id)arg7 synthesizesWhileRecording:(BOOL)arg8 completion:(CDUnknownBlockType)arg9 animationIdentifier:(id)arg10 isSilent:(BOOL)arg11;
- (void)enqueuePhaticWithCompletion:(CDUnknownBlockType)arg1;
- (void)enqueueAudioData:(id)arg1 identifier:(id)arg2 provisionally:(BOOL)arg3 eligibleAfterDuration:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)enqueueText:(id)arg1 identifier:(id)arg2 isPhonetic:(BOOL)arg3 provisionally:(BOOL)arg4 eligibleAfterDuration:(double)arg5 preparationIdentifier:(id)arg6 completion:(CDUnknownBlockType)arg7 animationIdentifier:(id)arg8;
- (void)setOutputVoice:(id)arg1;
- (void)speechItemTags:(id)arg1 finishedWithMessage:(unsigned int)arg2;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2;
- (void)speechSynthesizer:(id)arg1 didFinishSpeaking:(BOOL)arg2;
- (void)speechSynthesisElementSynthesisEligibilityDidChange:(id)arg1;
- (void)queue:(id)arg1 didEnqueueObjects:(id)arg2;
- (void)invalidate;
- (void)invalidateOnMainThread;
- (void)_cancelByCancellingActiveElementsOnly:(BOOL)arg1;
- (void)skipCurrentSynthesis;
- (void)cancel;
- (BOOL)isSynthesisQueueEmpty;
- (BOOL)isSpeaking;
- (void)_defrostSynthesizer;
- (void)deepFreezeSynthesizerIfNeeded;
- (void)prewarmIfNeeded;
- (void)_disableAudioDucking:(BOOL)arg1 forSynthesizer:(id)arg2;
- (void)_installQueuedSynthesizer;
- (void)_loadQueuedSynthesizerWithVoice:(id)arg1 downloadVoice:(BOOL)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

