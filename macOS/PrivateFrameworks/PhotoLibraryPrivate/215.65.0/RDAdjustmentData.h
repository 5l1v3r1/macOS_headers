//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDAdjustmentDataModel.h>

@interface RDAdjustmentData : RDAdjustmentDataModel
{
}

+ (void)deleteStaleModelsWithLibrary:(id)arg1 withReason:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)deleteAdjustmentDataWithVersionIds:(id)arg1 database:(id)arg2 withReason:(unsigned int)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)deleteAdjustmentDataWithUuid:(id)arg1 forVersion:(id)arg2 withReason:(unsigned int)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)newWithAdjustmentData:(id)arg1;
+ (id)newWithVersion:(id)arg1;
- (void)setModelDefaults;

@end

