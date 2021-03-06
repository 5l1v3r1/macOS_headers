//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface IconStorage : NSObject
{
    NSMutableDictionary *ivar_iconDictionary;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)getIconImages;
- (id)addBadge:(id)arg1 toIcon:(id)arg2;
- (id)addRsrcBadgeToIcon:(id)arg1;
- (id)addAliasBadgeToIcon:(id)arg1;
- (id)genericApplicationIcon;
- (id)genericExecutableIcon;
- (id)genericFolderIcon;
- (id)genericFileIcon;
- (id)iconForURL:(id)arg1;
- (id)iconForPathExtension:(id)arg1 isDirectory:(BOOL)arg2;
- (id)iconForUTI:(id)arg1;
- (id)iconForItem:(id)arg1;
- (id)init;

@end

