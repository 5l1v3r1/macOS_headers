//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LICollection.h"

@class NSArray;

@interface LISystemCollection : LICollection
{
    NSArray *_iconsMetadata;
}

+ (id)systemCollectionWithName:(id)arg1 andIconsMetadata:(id)arg2;
+ (id)systemCollectionsFromURL:(id)arg1;
@property(retain, nonatomic) NSArray *iconsMetadata; // @synthesize iconsMetadata=_iconsMetadata;
- (void).cxx_destruct;
- (void)loadIcons:(CDUnknownBlockType)arg1;
- (long long)type;
- (id)initWithName:(id)arg1 andIconsMetadata:(id)arg2;

@end

