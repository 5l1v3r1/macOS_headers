//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (BomPathAdditions)
+ (id)_commonParentOfPaths:(id)arg1;
- (BOOL)_isAppleDoublePath;
- (id)_appleDoublePath;
- (id)_relativeStringByDeletingBomPathPrefix;
- (id)_relativeString;
- (id)_absoluteStringByDeletingBomPathPrefix;
- (id)_absoluteString;
- (id)_stringByInsertingBomPathPrefix;
- (id)_stringByDeletingVolumePath;
- (id)_systemVolumePath;
- (id)_dataVolumePath;
- (id)_volumePath;
- (id)_rootVolumePath;
- (long long)_numericCompare:(id)arg1;
- (id)stringByExpandingSymlinksInPath;
- (id)stringByReallyResolvingSymlinksInPath;
@end

