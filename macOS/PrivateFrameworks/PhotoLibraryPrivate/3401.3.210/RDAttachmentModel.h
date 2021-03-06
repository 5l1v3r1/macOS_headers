//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDModel.h>

@class NSData, NSDate, NSString, RDAttachmentTable;

@interface RDAttachmentModel : RDModel
{
}

+ (Class)tableClass;
@property(nonatomic) long long volumeId;
@property(nonatomic) long long bookmarkId;
@property(copy, nonatomic) NSData *propertiesData;
@property(copy, nonatomic) NSData *fileAliasData;
@property(copy, nonatomic) NSString *filePath;
@property(copy, nonatomic) NSDate *fileModificationDate;
@property(nonatomic) double duration;
@property(copy, nonatomic) NSDate *inTrashDate;
@property(nonatomic) BOOL isInTrash;
@property(nonatomic) BOOL isMissing;
@property(nonatomic) BOOL fileIsReference;
@property(copy, nonatomic) NSString *filename;
@property(copy, nonatomic) NSString *propertyKey;
@property(copy, nonatomic) NSString *attachedToUuid;
@property(nonatomic) long long attachedToClassType;
@property(readonly, nonatomic) RDAttachmentTable *table;
@property(readonly, copy, nonatomic) NSString *fileVolumeUuid;

@end

