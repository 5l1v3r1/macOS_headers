//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface IMNicknameEncryptionPlainRecordField : NSObject
{
    NSString *_fieldName;
    NSData *_plainData;
}

@property(readonly, nonatomic) NSData *plainData; // @synthesize plainData=_plainData;
@property(readonly, nonatomic) NSString *fieldName; // @synthesize fieldName=_fieldName;
- (id)description;
- (void)dealloc;
- (id)initWithFieldName:(id)arg1 plainData:(id)arg2;

@end

