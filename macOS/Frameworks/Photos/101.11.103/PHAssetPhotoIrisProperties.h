//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Photos/PHAssetPropertySet.h>

@interface PHAssetPhotoIrisProperties : PHAssetPropertySet
{
    unsigned short _photoIrisVisibilityState;
    CDStruct_1b6d18a9 _photoIrisStillDisplayTime;
    CDStruct_1b6d18a9 _photoIrisVideoDuration;
}

+ (id)propertiesToFetch;
+ (id)propertySetName;
@property(readonly, nonatomic) unsigned short photoIrisVisibilityState; // @synthesize photoIrisVisibilityState=_photoIrisVisibilityState;
@property(readonly, nonatomic) CDStruct_1b6d18a9 photoIrisVideoDuration; // @synthesize photoIrisVideoDuration=_photoIrisVideoDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 photoIrisStillDisplayTime; // @synthesize photoIrisStillDisplayTime=_photoIrisStillDisplayTime;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3;

@end

