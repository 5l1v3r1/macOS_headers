//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTouchBarColorPickerSlider;

@protocol NSTouchBarColorPickerSliderMinimizationDelegate <NSObject>
- (void)colorPickerSliderCompletedInteraction:(NSTouchBarColorPickerSlider *)arg1;
- (BOOL)colorPickerSliderWantsToBeUnminimized:(NSTouchBarColorPickerSlider *)arg1 completionHandler:(void (^)(void))arg2;
@end

