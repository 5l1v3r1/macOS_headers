//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WebTextIteratorPrivate;

@interface WebTextIterator : NSObject
{
    WebTextIteratorPrivate *_private;
}

- (unsigned long long)currentTextLength;
- (const unsigned short *)currentTextPointer;
- (id)currentRange;
- (BOOL)atEnd;
- (void)advance;
- (id)initWithRange:(id)arg1;
- (void)dealloc;
- (id)currentText;
- (id)currentNode;

@end

