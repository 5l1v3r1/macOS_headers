//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXPreviewViewControllerManager-Protocol.h>

@class NSString, SXTangierController, SXViewport;
@protocol SXActionManager, SXComponentController, SXComponentInteractionManager, SXPreviewViewControllerManagerDelegate;

@interface SXPreviewViewControllerManager : NSObject <SXPreviewViewControllerManager>
{
    id <SXPreviewViewControllerManagerDelegate> delegate;
    SXTangierController *_tangierController;
    id <SXComponentController> _componentController;
    SXViewport *_viewport;
    id <SXComponentInteractionManager> _componentInteractionManager;
    id <SXActionManager> _actionManager;
    unsigned long long _previewType;
}

@property(nonatomic) unsigned long long previewType; // @synthesize previewType=_previewType;
@property(readonly, nonatomic) id <SXActionManager> actionManager; // @synthesize actionManager=_actionManager;
@property(readonly, nonatomic) id <SXComponentInteractionManager> componentInteractionManager; // @synthesize componentInteractionManager=_componentInteractionManager;
@property(readonly, nonatomic) SXViewport *viewport; // @synthesize viewport=_viewport;
@property(readonly, nonatomic) id <SXComponentController> componentController; // @synthesize componentController=_componentController;
@property(readonly, nonatomic) SXTangierController *tangierController; // @synthesize tangierController=_tangierController;
@property(nonatomic) __weak id <SXPreviewViewControllerManagerDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)willEndPreviewing;
- (void)willStartPreviewing;
- (BOOL)shouldStartPreviewing;
- (id)componentViewControllerForLocation:(struct CGPoint)arg1 previewContext:(id)arg2;
- (id)textLinkViewControllerForLocation:(struct CGPoint)arg1 previewContext:(id)arg2;
- (id)componentInteractionViewControllerForLocation:(struct CGPoint)arg1 previewContext:(id)arg2;
- (void)_previewingContext:(id)arg1 willDismissViewController:(id)arg2;
- (void)_previewingContext:(id)arg1 willPresentViewController:(id)arg2;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (void)previewGestureDidChange:(id)arg1;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (id)initWithTangierController:(id)arg1 componentController:(id)arg2 viewport:(id)arg3 componentInteractionManager:(id)arg4 actionManager:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

