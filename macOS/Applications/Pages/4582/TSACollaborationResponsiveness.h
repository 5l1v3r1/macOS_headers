//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, TSKDocumentRoot;

@interface TSACollaborationResponsiveness : NSObject
{
    BOOL _processingManyCommands;
    BOOL _started;
    NSOperationQueue *_accessQueue;
    TSKDocumentRoot *_documentRoot;
    id _willProcessManyCommandsListener;
    id _didProcessManyCommandsListener;
    CDUnknownBlockType _willProcessManyCommandsBlock;
    CDUnknownBlockType _didProcessManyCommandsBlock;
}

@property(copy, nonatomic) CDUnknownBlockType didProcessManyCommandsBlock; // @synthesize didProcessManyCommandsBlock=_didProcessManyCommandsBlock;
@property(copy, nonatomic) CDUnknownBlockType willProcessManyCommandsBlock; // @synthesize willProcessManyCommandsBlock=_willProcessManyCommandsBlock;
@property(retain, nonatomic) id didProcessManyCommandsListener; // @synthesize didProcessManyCommandsListener=_didProcessManyCommandsListener;
@property(retain, nonatomic) id willProcessManyCommandsListener; // @synthesize willProcessManyCommandsListener=_willProcessManyCommandsListener;
@property(nonatomic) BOOL started; // @synthesize started=_started;
@property(nonatomic) BOOL processingManyCommands; // @synthesize processingManyCommands=_processingManyCommands;
@property(readonly, nonatomic) __weak TSKDocumentRoot *documentRoot; // @synthesize documentRoot=_documentRoot;
@property(readonly, nonatomic) NSOperationQueue *accessQueue; // @synthesize accessQueue=_accessQueue;
- (void).cxx_destruct;
- (void)_didProcessManyCommands;
- (void)_willProcessManyCommands;
- (void)executeBlockIfProcessingManyCommands:(CDUnknownBlockType)arg1 didProcessManyCommandsBlock:(CDUnknownBlockType)arg2;
- (void)stop;
- (void)start:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDocumentRoot:(id)arg1;

@end

