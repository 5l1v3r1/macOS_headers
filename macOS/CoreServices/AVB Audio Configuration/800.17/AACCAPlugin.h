//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AudioServerApplication/ASAPlugin.h>

@class NSMutableArray;

@interface AACCAPlugin : ASAPlugin
{
    CDUnknownBlockType _boxesListenerBlock;
    NSMutableArray *_aacBoxes;
}

@property(retain, nonatomic) NSMutableArray *aacBoxes; // @synthesize aacBoxes=_aacBoxes;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateBoxList;
- (id)initWithBundleIdentifier:(id)arg1;

@end

