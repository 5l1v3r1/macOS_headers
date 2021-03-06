//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, TSPPackage, TSUExtendedAttributeCollection;
@protocol TSPFileCoordinatorDelegate;

@interface TSPPackageConverter : NSObject
{
    id <TSPFileCoordinatorDelegate> _fileCoordinatorDelegate;
    TSUExtendedAttributeCollection *_extendedAttributeCollection;
    BOOL _isCancelled;
    TSPPackage *_package;
    NSURL *_URL;
}

+ (id)newPackageConverterWithURL:(id)arg1 preserveExtendedAttributes:(BOOL)arg2 error:(id *)arg3;
+ (id)newPackageConverterWithURL:(id)arg1 error:(id *)arg2;
+ (BOOL)convertDocumentAtURL:(id)arg1 toPackageType:(long long)arg2 error:(id *)arg3;
@property(readonly, nonatomic) BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) TSPPackage *package; // @synthesize package=_package;
- (void).cxx_destruct;
- (id)newWriteChannelAtPath:(id)arg1 lastModificationDate:(id)arg2 size:(unsigned long long)arg3 CRC:(unsigned int)arg4 packageWriter:(id)arg5 error:(id *)arg6;
- (BOOL)enumeratePackageEntriesWithZipArchive:(id)arg1 accessor:(CDUnknownBlockType)arg2;
- (unsigned long long)progressTotalUnitCountWithZipArchive:(id)arg1;
- (BOOL)isObjectArchivePath:(id)arg1;
- (BOOL)isDocumentPropertiesPath:(id)arg1;
- (BOOL)writeToURL:(id)arg1 packageType:(long long)arg2 error:(id *)arg3;
- (BOOL)checkPassword:(id)arg1;
@property(readonly, nonatomic) BOOL isPasswordProtected;
@property(readonly, nonatomic) BOOL isValid;
@property(readonly, nonatomic) long long packageType;
- (id)initWithURL:(id)arg1 package:(id)arg2 fileCoordinatorDelegate:(id)arg3 preserveExtendedAttributes:(BOOL)arg4 error:(id *)arg5;
- (id)init;

@end

