//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKCommand.h"

@class NSString, TNFormBasedSheet;

@interface TNCommandFormChooseTargetTable : TSKCommand
{
    struct __CFUUID *mTableID;
    struct __CFUUID *mPreviousTableID;
    NSString *mPreviousSheetName;
    NSString *mSheetName;
    TNFormBasedSheet *mSheet;
}

- (void)redo;
- (void)undo;
- (void)commit;
- (BOOL)process;
- (id)actionString;
- (void)dealloc;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithSheet:(id)arg1 tableID:(struct __CFUUID *)arg2 sheetName:(id)arg3;

@end

