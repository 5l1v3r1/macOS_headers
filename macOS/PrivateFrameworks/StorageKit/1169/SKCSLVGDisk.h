//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StorageKit/SKDisk.h>

@class NSArray, NSString;

@interface SKCSLVGDisk : SKDisk
{
    NSString *_csLVGUUID;
    NSArray *_csPVChildrenUUIDs;
}

- (void).cxx_destruct;
@property(retain) NSArray *csPVChildrenUUIDs; // @synthesize csPVChildrenUUIDs=_csPVChildrenUUIDs;
@property(retain) NSString *csLVGUUID; // @synthesize csLVGUUID=_csLVGUUID;
- (void)addChildVolumeToEmptyLVGWithProgress:(CDUnknownBlockType)arg1 completetionBlock:(CDUnknownBlockType)arg2;
- (id)physicalVolumes;
- (id)children;
- (id)description;
- (BOOL)canResize;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (BOOL)matchesDictionary:(id)arg1;
- (id)minimalDictionaryRepresentation;

@end

