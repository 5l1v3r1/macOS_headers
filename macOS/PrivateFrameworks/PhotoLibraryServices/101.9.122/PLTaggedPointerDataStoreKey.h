//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoFoundation/PFTaggedPointer.h>

#import <PhotoLibraryServices/PLChooserKeyProperties-Protocol.h>
#import <PhotoLibraryServices/PLResourceDataStoreKey-Protocol.h>
#import <PhotoLibraryServices/PLTableThumbResourceKey-Protocol.h>

@class NSString;

@interface PLTaggedPointerDataStoreKey : PFTaggedPointer <PLResourceDataStoreKey, PLTableThumbResourceKey, PLChooserKeyProperties>
{
}

+ (id)keyWithKeyStruct:(const void *)arg1 keyLength:(unsigned long long)arg2 forStoreClassID:(unsigned int)arg3 inLibraryWithID:(id)arg4;
- (id)descriptionForAssetID:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToKey:(id)arg1;
- (unsigned int)recipeIDForAssetID:(id)arg1;
- (BOOL)isDerivative;
- (unsigned int)resourceVersion;
- (unsigned int)resourceType;
- (void)tableType:(unsigned int *)arg1 index:(int *)arg2;
- (BOOL)representsSquareResource;
- (id)uniformTypeIdentifier;
- (id)keyData;
- (id)initWithKeyStruct:(const void *)arg1;
- (id)fileURLForAssetID:(id)arg1;
- (id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2;
- (id)_heapAllocatedRepresentationInLibraryWithID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

