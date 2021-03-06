//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TouchBarButton.h"

@class NSString;

@interface TouchBarPlayItemButton : TouchBarButton
{
    BOOL _useFullTitle;
}

+ (id)buttonWithTarget:(id)arg1 action:(SEL)arg2 useFullTitle:(BOOL)arg3;
@property(nonatomic) BOOL useFullTitle; // @synthesize useFullTitle=_useFullTitle;
- (void)updateUI;
@property(readonly, nonatomic) NSString *titleForButton;
@property(readonly, nonatomic) NSString *fullTitle;
@property(readonly, nonatomic) BOOL shouldEnableButton;

@end

