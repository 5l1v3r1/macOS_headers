//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NewsFoundation/NSObject-Protocol.h>

@class NSString, Protocol;

@protocol NFValidationResolver <NSObject>
- (void)ensureProtocol:(Protocol *)arg1 name:(NSString *)arg2;
- (void)ensureProtocol:(Protocol *)arg1;
- (void)ensureClass:(Class)arg1 name:(NSString *)arg2;
- (void)ensureClass:(Class)arg1;
@end

