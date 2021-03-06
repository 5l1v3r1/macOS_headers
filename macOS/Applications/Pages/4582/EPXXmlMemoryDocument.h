//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "EPXXmlDocument.h"

@class EPXEntry, EPXMetadata, EPXSDocument, NSMutableData;
@protocol EPXTextContainer;

@interface EPXXmlMemoryDocument : EPXXmlDocument
{
    EPXEntry *mEntry;
    EPXMetadata *mMetadata;
    NSMutableData *mDataBuffer;
    id <EPXTextContainer> mText;
    EPXSDocument *_state;
}

@property EPXSDocument *state; // @synthesize state=_state;
- (BOOL)setup;
- (BOOL)tearDown;
- (id)createTextContainerWithState:(id)arg1;
- (id)entry;
- (id)buffer;
- (struct _xmlTextWriter *)streamAPI;
- (void)dealloc;
- (id)initWithTextWriter:(struct _xmlTextWriter *)arg1 buffer:(id)arg2 entry:(id)arg3 metadata:(id)arg4 state:(id)arg5;
- (BOOL)writeHeader;

@end

