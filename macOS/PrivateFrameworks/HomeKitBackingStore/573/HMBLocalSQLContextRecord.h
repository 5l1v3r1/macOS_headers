//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class HMBModel, NSData;

__attribute__((visibility("hidden")))
@interface HMBLocalSQLContextRecord : HMFObject
{
    HMBModel *_model;
    NSData *_externalID;
}

@property(readonly, nonatomic) NSData *externalID; // @synthesize externalID=_externalID;
@property(readonly, nonatomic) HMBModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithModel:(id)arg1 externalID:(id)arg2;

@end

