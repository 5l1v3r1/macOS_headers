//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AudioServerDriver/NSObject-Protocol.h>

@class ASDObject;

@protocol ASDDeviceConfigurationChangeDelegate <NSObject>
- (BOOL)requestConfigurationChangeForDevice:(ASDObject *)arg1 withBlock:(void (^)(void))arg2;
@end

