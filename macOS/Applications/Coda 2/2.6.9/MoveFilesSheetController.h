//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PCSheetController.h"

#import "PCNodeComboBoxDataSourceDelegate.h"

@class NSArray, NSButton, NSComboBox, NSString, PCNode, PCNodeComboBoxDataSource;

__attribute__((visibility("hidden")))
@interface MoveFilesSheetController : PCSheetController <PCNodeComboBoxDataSourceDelegate>
{
    NSComboBox *oComboBox;
    NSButton *oOKButton;
    NSButton *oMoveToParentButton;
    PCNodeComboBoxDataSource *oComboBoxDataSource;
    NSString *iSelectedPath;
    PCNode *iRootNode;
    NSArray *iNodesToMove;
    BOOL iShowHiddenFiles;
}

+ (id)queuedSheetControllerWithRootNode:(id)arg1 nodesToMove:(id)arg2 showHiddenFiles:(BOOL)arg3 tag:(long long)arg4 delegate:(id)arg5 interfaceDelegate:(id)arg6 contextInfo:(id)arg7;
@property(nonatomic) BOOL showHiddenFiles; // @synthesize showHiddenFiles=iShowHiddenFiles;
@property(retain, nonatomic) NSString *selectedPath; // @synthesize selectedPath=iSelectedPath;
@property(retain, nonatomic) PCNode *rootNode; // @synthesize rootNode=iRootNode;
@property(retain, nonatomic) NSArray *nodesToMove; // @synthesize nodesToMove=iNodesToMove;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (id)nodeComboBoxDataSourceRootNode:(id)arg1;
- (BOOL)nodeComboBoxDataSourceShowHiddenFiles:(id)arg1;
- (id)nibName;
- (void)loadWindow;
- (void)dealloc;

@end

