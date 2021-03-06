//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol TSPCryptoInfo;

@interface TSPDataStorageWriteResult : NSObject
{
    BOOL _didCopyDataToPackage;
    BOOL _isMissingData;
    NSString *_filename;
    id <TSPCryptoInfo> _encryptionInfo;
}

@property(readonly, nonatomic) BOOL isMissingData; // @synthesize isMissingData=_isMissingData;
@property(readonly, nonatomic) BOOL didCopyDataToPackage; // @synthesize didCopyDataToPackage=_didCopyDataToPackage;
@property(readonly, nonatomic) id <TSPCryptoInfo> encryptionInfo; // @synthesize encryptionInfo=_encryptionInfo;
@property(readonly, nonatomic) NSString *filename; // @synthesize filename=_filename;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFilename:(id)arg1 encryptionInfo:(id)arg2 didCopyDataToPackage:(BOOL)arg3 isMissingData:(BOOL)arg4;

@end

