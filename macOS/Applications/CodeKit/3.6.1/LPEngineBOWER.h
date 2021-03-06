//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LPCompiler, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface LPEngineBOWER : NSObject
{
    LPCompiler *_rootCompiler;
    NSString *_pathToBower;
    NSURL *_bowerJSONTemplateFileURL;
}

- (id)version;
- (void)createBowerJSONFileIfNeededInFolder:(id)arg1 resultInfo:(id)arg2;
- (void)recursivelyFlattenInstalledComponentsBowerOutputStartingWithDictionary:(id)arg1 fillDictionary:(id *)arg2;
- (void)flattenInstallResultsOutput:(id)arg1 fillDictionary:(id *)arg2;
- (void)uninstallComponentsWithOptions:(id)arg1 inProject:(id)arg2 taskGroup:(id)arg3;
- (void)installComponentsWithOptions:(id)arg1 inProject:(id)arg2 taskGroup:(id)arg3;
- (void)determineInstalledComponentsInProject:(id)arg1 taskGroup:(id)arg2;
- (void)fetchComponentsListFromTaskGroup:(id)arg1 overrideCache:(BOOL)arg2;
- (void)dealloc;
- (id)initWithRootCompiler:(id)arg1;

@end

