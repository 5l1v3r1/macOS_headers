//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@protocol BRItemSPIServiceV1
- (void)fetchDocumentRecordIDWithCompletionHandler:(void (^)(CKRecordID *, NSError *))arg1;
- (void)thumbnailChangedWithCompletion:(void (^)(NSError *))arg1;
- (void)fetchLastEditorDeviceNameWithCompletionHandler:(void (^)(NSString *, NSError *))arg1;
- (void)fetchAccountIdentifierWithCompletionHandler:(void (^)(NSString *, NSError *))arg1;
- (void)fetchCrossDeviceBookmarkStringWithCompletion:(void (^)(NSString *, NSError *))arg1;
@end

