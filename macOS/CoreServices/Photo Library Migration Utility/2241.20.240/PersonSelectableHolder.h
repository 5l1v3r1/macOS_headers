//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

@interface PersonSelectableHolder : NSObject
{
    struct IPPersonSelectable *mPerson;
    BOOL mDeleteOnDealloc;
}

+ (id)hold:(struct IPPersonSelectable *)arg1 deleteOnDealloc:(BOOL)arg2;
+ (id)hold:(struct IPPersonSelectable *)arg1;
- (struct IPPersonSelectable *)person;
- (void)dealloc;
- (id)initWithPerson:(struct IPPersonSelectable *)arg1 deleteOnDealloc:(BOOL)arg2;

@end

