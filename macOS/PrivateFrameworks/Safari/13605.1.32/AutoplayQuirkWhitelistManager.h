//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WBSRemotePlistController;

__attribute__((visibility("hidden")))
@interface AutoplayQuirkWhitelistManager : NSObject
{
    WBSRemotePlistController *_remotePlistController;
}

- (void).cxx_destruct;
- (void)prepareForTermination;
- (void)quirksForDomain:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithBuiltInWhitelistURL:(id)arg1 downloadsDirectoryURL:(id)arg2 resourceName:(id)arg3 resourceVersion:(id)arg4 updateDateDefaultsKey:(id)arg5 updateInterval:(double)arg6;
- (id)init;

@end

