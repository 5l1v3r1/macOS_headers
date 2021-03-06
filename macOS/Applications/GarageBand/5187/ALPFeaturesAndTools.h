//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ALPFeaturesAndTools : NSObject
{
}

+ (void)disconnectWorkingCopy:(id)arg1;
+ (id)trackSettingsPathMaster;
+ (id)trackSettingsPathSoftware;
+ (id)trackSettingsPathReal;
+ (id)trackSettingsPath;
+ (id)ultraBeatSamplesPath;
+ (id)assetsPath;
+ (id)contentsPath;
+ (void)selectWorkingCopy:(id)arg1;
+ (void)updateDataSource;
+ (BOOL)isConnectedToAssetWorkingCopy;
+ (void)resetIsConnected;
+ (BOOL)isConnected;
+ (void)addALPMenuEntriesToMenu:(id)arg1;
+ (void)switchToLogicMode;
+ (void)switchToGarageBandForIOSMode;
+ (void)useFlexOnLoopExport:(id)arg1;
+ (void)changeALPmode:(id)arg1;
+ (void)addConnectToWorkingCopyMenu:(id)arg1;
+ (void)addLoopExportMenu:(id)arg1;
+ (void)addModeChangeMenu:(id)arg1;
+ (void)updateSubMenusInALPMenu:(id)arg1;
+ (void)updateMenuName:(id)arg1;
+ (void)updateMenu:(id)arg1;
+ (id)alpMenu;

@end

