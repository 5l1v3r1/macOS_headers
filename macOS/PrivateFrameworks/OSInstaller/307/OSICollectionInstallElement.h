//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OSInstaller/OSIInstallQueueElement.h>

@class NSArray, OSInstallOptions;

@interface OSICollectionInstallElement : OSIInstallQueueElement
{
    NSArray *_relativePackagePaths;
    OSInstallOptions *_installOptions;
}

- (void).cxx_destruct;
@property(retain) OSInstallOptions *installOptions; // @synthesize installOptions=_installOptions;
@property(retain) NSArray *relativePackagePaths; // @synthesize relativePackagePaths=_relativePackagePaths;
- (id)operationName;
- (double)estimatedTimeToComplete;
- (BOOL)runReturningError:(id *)arg1;
- (id)initWithOptions:(id)arg1 relativePackagePaths:(id)arg2;

@end

