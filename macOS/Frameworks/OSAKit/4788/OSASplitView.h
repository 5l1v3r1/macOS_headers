//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSSplitView.h"

@interface OSASplitView : NSSplitView
{
    BOOL _collapsed;
    double _originalPosition;
    double _minimumPosition;
}

- (void)mouseDown:(id)arg1;
@property double minimumPosition;
@property double originalPosition;
@property BOOL collapsed;
- (id)initWithFrame:(struct CGRect)arg1;

@end

