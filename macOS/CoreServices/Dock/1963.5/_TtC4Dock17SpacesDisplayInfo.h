//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _TtC4Dock12ManagedSpace;

@interface _TtC4Dock17SpacesDisplayInfo : NSObject
{
    // Error parsing type: , name: display
    // Error parsing type: , name: currentSpace
    // Error parsing type: , name: boundToAllSpaces
    // Error parsing type: , name: boundSpace
    // Error parsing type: , name: boundSpaceIndex
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic) long long boundSpaceIndex; // @synthesize boundSpaceIndex;
@property(nonatomic, retain) _TtC4Dock12ManagedSpace *boundSpace; // @synthesize boundSpace;
@property(nonatomic, readonly) BOOL boundToAllSpaces; // @synthesize boundToAllSpaces;
@property(nonatomic, readonly) _TtC4Dock12ManagedSpace *currentSpace; // @synthesize currentSpace;
@property(nonatomic, readonly) unsigned int display; // @synthesize display;

@end

