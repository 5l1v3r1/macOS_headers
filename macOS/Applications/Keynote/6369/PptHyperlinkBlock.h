//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ESDContainer, ESDObject;

@interface PptHyperlinkBlock : NSObject
{
    ESDContainer *mInteractiveInfoContainerHolder;
    ESDObject *mTxInteractiveInfoAtomHolder;
}

- (void).cxx_destruct;
- (void)setTxInteractiveInfoAtomHolder:(id)arg1;
- (struct PptTxInteracInfoAtom *)txtInteractiveInfoAtom;
- (void)setInteractiveInfoContainerHolder:(id)arg1;
- (id)interactiveInfoContainerHolder;

@end

