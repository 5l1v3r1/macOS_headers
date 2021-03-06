//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKViewModule.h"

@class LKButton;

@interface CEContentLibrarySpecifierModule : LKViewModule
{
    LKButton *_myMediaButton;
    LKButton *_audioButton;
    LKButton *_titlesButton;
    LKButton *_backgroundsButton;
    LKButton *_transitionsButton;
    BOOL _showSidebar;
    long long _currentlySelectedModuleIndex;
}

@property(nonatomic) long long currentlySelectedModuleIndex; // @synthesize currentlySelectedModuleIndex=_currentlySelectedModuleIndex;
- (id)workspaceModule;
- (void)doContentSpecifierTransitions:(id)arg1;
- (void)doContentSpecifierBackgrounds:(id)arg1;
- (void)doContentSpecifierTitles:(id)arg1;
- (void)doContentSpecifierAudio:(id)arg1;
- (void)doContentSpecifierMyMedia:(id)arg1;
- (void)selectContentModule:(long long)arg1;
- (void)_updateContentLibrarySpecifierButtonsWithModuleIndex:(long long)arg1;
- (void)viewDidLoad;
- (void)reloadSelectedSegment;
- (void)forceSelectionOfSegment:(long long)arg1;
- (id)_mediaDetailContainerModule;
- (id)sidebarContainer;
- (void)_updateSidebarVisibility;
- (void)_rememberSidebarVisibility;
- (BOOL)_isMusicModuleClass:(Class)arg1;
- (BOOL)_isMyMediaModuleClass:(Class)arg1;
- (BOOL)_shouldShowSidebar;
- (id)_sidebarContainerModule;
- (BOOL)wantsTransparentBackground;
- (BOOL)wantsFooterBar;
- (BOOL)wantsHeaderBar;
- (struct CGSize)viewMaxSize;
- (struct CGSize)viewMinSize;

@end

