//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSTTableCommand.h"

#import "GSSPAutoEncodable-Protocol.h"

@interface TSTCommandCategorySetLabelRowVisibility : TSTTableCommand <GSSPAutoEncodable>
{
    int _groupLevel;
    int _labelRowVisibility;
    unsigned long long _undoLabelRowVisibility;
}

- (id)actionString;
- (BOOL)isValidForCommit;
- (void)rollbackWork;
- (id)makeInverse;
- (BOOL)supportsCollaboration;
- (void)redoWork;
- (void)undoWork;
- (void)commitWork;
- (void)p_setLabelRowVisibilityAndNotify:(unsigned long long)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)initWithTableInfo:(id)arg1 groupLevel:(unsigned char)arg2 labelRowVisibility:(unsigned long long)arg3;
- (void)populateGSSPCmdCategorySetLabelRowVisibility:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

