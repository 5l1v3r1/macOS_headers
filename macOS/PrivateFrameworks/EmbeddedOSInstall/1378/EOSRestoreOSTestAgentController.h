//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface EOSRestoreOSTestAgentController : NSObject
{
}

+ (id)sharedController;
- (void)healDeviceWithBundlePath:(id)arg1 options:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)bootDeviceWithRepairOSBundlePath:(id)arg1 options:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)currentHardwareHasEmbeddedDevice;

@end

