//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

@interface PXImageModulationManager : PXObservable
{
}

+ (id)sharedImageModulationManager;
+ (CDStruct_fd7332cd)optionsForAsset:(id)arg1;
+ (double)HDRValueForAsset:(id)arg1;
- (void)checkInImageLayerModulator:(id)arg1;
- (id)checkoutImageLayerModulatorWithOptions:(CDStruct_fd7332cd)arg1;
- (id)_init;
- (id)init;

@end

