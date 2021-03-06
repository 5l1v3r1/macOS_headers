//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButton.h"

@class NSTimer;

@interface SFDroppableButton : NSButton
{
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
- (void).cxx_destruct;
- (void)handleDropTimer:(id)arg1;
- (void)invalidateTimerIfActive;
- (void)activateTimer;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (void)awakeFromNib;
- (void)drawRect:(struct CGRect)arg1;

@end

