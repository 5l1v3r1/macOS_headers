//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface TorrentGroup : NSObject
{
    long long fGroup;
    NSMutableArray *fTorrents;
}

- (double)downloadRate;
- (double)uploadRate;
- (double)ratio;
- (id)torrents;
- (long long)groupOrderValue;
- (long long)groupIndex;
- (id)description;
- (void)dealloc;
- (id)initWithGroup:(long long)arg1;

@end

