//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface FCCKRecordSchema : NSObject
{
    NSDictionary *_fieldSchemasByName;
    NSString *_clientRecordType;
    NSString *_serverRecordType;
}

+ (id)recordWithClientType:(id)arg1 serverType:(id)arg2 fields:(id)arg3;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *serverRecordType; // @synthesize serverRecordType=_serverRecordType;
@property(readonly, copy, nonatomic) NSString *clientRecordType; // @synthesize clientRecordType=_clientRecordType;
- (BOOL)isFieldEncrypted:(id)arg1;
- (BOOL)isFieldKnown:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *allUnencryptedFieldNames;
@property(readonly, copy, nonatomic) NSArray *allEncryptedFieldNames;
@property(readonly, nonatomic) BOOL hasEncryptedFields;
- (id)initWithClientRecordType:(id)arg1 serverRecordType:(id)arg2 fieldSchemas:(id)arg3;
- (id)init;

@end

