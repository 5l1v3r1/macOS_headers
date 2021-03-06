//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class KNMacDocumentWindowController, NSButton, NSImageView, NSMetadataQuery, NSProgressIndicator, NSTextField;

@interface KNMacFileIsUploadingToiCloudSheetController : NSWindowController
{
    BOOL _uploaded;
    BOOL _forSave;
    NSTextField *_titleField;
    NSTextField *_messageField;
    NSImageView *_appIconImageView;
    NSProgressIndicator *_progressIndicator;
    NSButton *_closeButton;
    KNMacDocumentWindowController *_documentWindowController;
    CDUnknownBlockType _completionBlock;
    NSMetadataQuery *_documentUploadQuery;
    id _metadataQueryGatherObserver;
    id _metadataQueryUpdateObserver;
}

@property(nonatomic) BOOL forSave; // @synthesize forSave=_forSave;
@property(nonatomic) BOOL uploaded; // @synthesize uploaded=_uploaded;
@property(retain, nonatomic) id metadataQueryUpdateObserver; // @synthesize metadataQueryUpdateObserver=_metadataQueryUpdateObserver;
@property(retain, nonatomic) id metadataQueryGatherObserver; // @synthesize metadataQueryGatherObserver=_metadataQueryGatherObserver;
@property(retain, nonatomic) NSMetadataQuery *documentUploadQuery; // @synthesize documentUploadQuery=_documentUploadQuery;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) KNMacDocumentWindowController *documentWindowController; // @synthesize documentWindowController=_documentWindowController;
@property(retain, nonatomic) NSButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain, nonatomic) NSImageView *appIconImageView; // @synthesize appIconImageView=_appIconImageView;
@property(retain, nonatomic) NSTextField *messageField; // @synthesize messageField=_messageField;
@property(retain, nonatomic) NSTextField *titleField; // @synthesize titleField=_titleField;
- (void)p_startMetadataQuery;
- (void)p_stopMetadataQuery;
- (void)p_processResultsForMetadataQuery:(id)arg1;
- (void)p_documentUploadComplete;
- (void)okayButtonPressed:(id)arg1;
- (void)windowDidLoad;
- (void)dealloc;
- (void)displaySheetWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithDocumentWindowController:(id)arg1 forSaveOperation:(BOOL)arg2;

@end

