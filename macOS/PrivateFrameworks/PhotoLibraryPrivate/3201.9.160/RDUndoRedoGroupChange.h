//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDUndoRedoChange.h>

@class NSMutableArray;

@interface RDUndoRedoGroupChange : RDUndoRedoChange
{
    NSMutableArray *_changeGroup;
    RDUndoRedoChange *_changeNotifier;
}

+ (id)groupChange;
@property(retain) RDUndoRedoChange *changeNotifier; // @synthesize changeNotifier=_changeNotifier;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)addChange:(id)arg1;
- (id)description;
- (void)redo;
- (void)undo;
- (id)init;

@end

