//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class CXElement<AXUiState>, NSString;

@protocol AXPresentation
- (NSString *)axGetVersion;
- (void)axSetAutoPlay:(BOOL)arg1;
- (BOOL)axAutoPlay;
- (void)axSetSelfContained:(BOOL)arg1;
- (BOOL)axIsSelfContained;
- (void)axUpdateUiState:(id <AXUiState>)arg1;
- (id <AXUiState>)axCreateUiState;
- (CXElement<AXUiState> *)axGetUiState;
- (id <AXSlideList>)axGetSlideList;
- (id <AXTheme>)axGetTheme;
@end

