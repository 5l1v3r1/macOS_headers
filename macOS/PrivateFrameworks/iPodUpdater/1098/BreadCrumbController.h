//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class Pod;

__attribute__((visibility("hidden")))
@interface BreadCrumbController : NSObject
{
    struct {
        unsigned int sig;
        unsigned short version;
        unsigned short numberCrumbs;
        unsigned short crumbSize;
    } _headerRec;
    Pod *_pod;
    unsigned char _mode;
}

- (int)writeHeader;
- (int)readHeader;
- (id)newBreadCrumb;
- (id)breadCrumbs;
- (void)dealloc;
- (id)initWithPod:(id)arg1 mode:(unsigned char)arg2;

@end

