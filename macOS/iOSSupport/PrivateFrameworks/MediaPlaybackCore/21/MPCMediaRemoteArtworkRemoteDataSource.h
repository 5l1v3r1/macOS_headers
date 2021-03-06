//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPArtworkDataSource-Protocol.h>

@class MPCMediaRemoteController, NSString;

@interface MPCMediaRemoteArtworkRemoteDataSource : NSObject <MPArtworkDataSource>
{
    MPCMediaRemoteController *_controller;
}

@property(readonly, nonatomic) __weak MPCMediaRemoteController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;
- (id)existingRepresentationForArtworkCatalog:(id)arg1;
- (BOOL)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;
- (BOOL)areRepresentationsAvailableForCatalog:(id)arg1;
- (id)initWithController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

