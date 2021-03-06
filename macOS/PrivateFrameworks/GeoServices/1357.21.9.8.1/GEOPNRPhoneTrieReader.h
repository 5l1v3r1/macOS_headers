//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface GEOPNRPhoneTrieReader : NSObject
{
    struct _CFBurstTrie *_trie;
    NSData *_phoneFile;
    unsigned char _maxPhoneNumLength;
    unsigned char _minPhoneNumLength;
}

@property(readonly, nonatomic) unsigned char minPhoneNumLength; // @synthesize minPhoneNumLength=_minPhoneNumLength;
@property(readonly, nonatomic) unsigned char maxPhoneNumLength; // @synthesize maxPhoneNumLength=_maxPhoneNumLength;
- (void).cxx_destruct;
- (BOOL)lookupPhoneNumber:(id)arg1 idResult:(unsigned int *)arg2;
- (void)dealloc;
- (id)initWithFile:(id)arg1;

@end

