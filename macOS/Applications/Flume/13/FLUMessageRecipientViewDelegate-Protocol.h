//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FLUMessageRecipientView, NSString;

@protocol FLUMessageRecipientViewDelegate <NSObject>

@optional
- (void)flu_messageRecipientViewDidRequestSelection:(FLUMessageRecipientView *)arg1;
- (void)flu_messageRecipientViewDidRequestDelete:(FLUMessageRecipientView *)arg1 replaceWithText:(NSString *)arg2;
@end

