//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSUtility/NSFastEnumeration-Protocol.h>

@interface TSUCFSetEnumerator : NSObject <NSFastEnumeration>
{
    void *mInlineObjects[16];
    const void **mObjects;
    long long mCount;
    long long mIndex;
}

- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)allObjects;
- (id)nextObject;
- (id)initWithCFSet:(struct __CFSet *)arg1;
- (void)dealloc;

@end

