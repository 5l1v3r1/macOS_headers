//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface NSCGSDockMessageHandlers : NSObject
{
    NSMutableDictionary *_handlersByMessageID;
}

- (id)handlersForMessageID:(unsigned int)arg1;
- (void)addHandlerForMessage:(unsigned int)arg1 order:(long long)arg2 block:(id)arg3;

@end

