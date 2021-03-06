//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSSet;

@interface PGDejunkerDeduperFeature : NSObject <NSCopying>
{
    BOOL _isVideo;
    NSSet *_personLocalIdentifiers;
    NSSet *_peopleScenes;
}

@property(readonly) BOOL isVideo; // @synthesize isVideo=_isVideo;
@property(readonly) NSSet *peopleScenes; // @synthesize peopleScenes=_peopleScenes;
@property(readonly) NSSet *personLocalIdentifiers; // @synthesize personLocalIdentifiers=_personLocalIdentifiers;
- (void).cxx_destruct;
- (id)description;
@property(readonly) BOOL hasPeopleScenes;
@property(readonly) BOOL hasPersons;
- (long long)identicalSimilarity;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPersonLocalIdentifiers:(id)arg1 peopleScenes:(id)arg2 isVideo:(BOOL)arg3;

@end

