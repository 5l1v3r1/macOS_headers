//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBSerializable.h"
#import "NSCopying.h"

@class DBTEAMLOGSharedFolderLinkPolicy, NSNumber, NSString;

@interface DBTEAMLOGSharedFolderChangeLinkPolicyDetails : NSObject <DBSerializable, NSCopying>
{
    NSNumber *_targetIndex;
    NSString *_originalFolderName;
    NSString *_sharedFolderType;
    DBTEAMLOGSharedFolderLinkPolicy *_dNewValue;
    DBTEAMLOGSharedFolderLinkPolicy *_previousValue;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) DBTEAMLOGSharedFolderLinkPolicy *previousValue; // @synthesize previousValue=_previousValue;
@property(readonly, nonatomic) DBTEAMLOGSharedFolderLinkPolicy *dNewValue; // @synthesize dNewValue=_dNewValue;
@property(readonly, copy, nonatomic) NSString *sharedFolderType; // @synthesize sharedFolderType=_sharedFolderType;
@property(readonly, copy, nonatomic) NSString *originalFolderName; // @synthesize originalFolderName=_originalFolderName;
@property(readonly, nonatomic) NSNumber *targetIndex; // @synthesize targetIndex=_targetIndex;
- (void).cxx_destruct;
- (BOOL)isEqualToSharedFolderChangeLinkPolicyDetails:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithTargetIndex:(id)arg1 originalFolderName:(id)arg2 dNewValue:(id)arg3;
- (id)initWithTargetIndex:(id)arg1 originalFolderName:(id)arg2 dNewValue:(id)arg3 sharedFolderType:(id)arg4 previousValue:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

