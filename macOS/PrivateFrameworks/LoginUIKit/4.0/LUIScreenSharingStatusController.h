//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <LoginUIKit/LUIController.h>

@interface LUIScreenSharingStatusController : LUIController
{
    BOOL _registered;
}

+ (id)controllerWithStyle:(int)arg1;
- (void)dealloc;
- (id)initWithStyle:(int)arg1;
- (void)tearDownController;
- (void)resumeController;
- (void)pauseController;
- (void)_updateContentView;
- (void)_setupContentView;
- (id)_colorForStyle;

@end

