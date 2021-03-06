//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iCloudDriveCore/_BRCOperation.h>

#import "BRCOperationSubclass.h"
#import "ICDBRCancellable.h"

@class CKRecordID, NSString;

__attribute__((visibility("hidden")))
@interface BRCSharingCopyAccessTokenOperation : _BRCOperation <ICDBRCancellable, BRCOperationSubclass>
{
    CKRecordID *_recordID;
    CKRecordID *_shareID;
    CDUnknownBlockType _copyAccessTokenCompletionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType copyAccessTokenCompletionBlock; // @synthesize copyAccessTokenCompletionBlock=_copyAccessTokenCompletionBlock;
@property(retain, nonatomic) CKRecordID *shareID; // @synthesize shareID=_shareID;
@property(retain, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (oneway void)invalidate;
- (BOOL)shouldRetryForError:(id)arg1;
- (id)createActivity;
- (id)initWithItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

