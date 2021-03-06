//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@protocol UICoordinateSpace;

@interface PXCoordinatedRect : NSObject <NSCopying>
{
    NSObject<UICoordinateSpace> *_coordinateSpace;
    struct CGRect _rect;
}

@property(readonly, nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(readonly, nonatomic) NSObject<UICoordinateSpace> *coordinateSpace; // @synthesize coordinateSpace=_coordinateSpace;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGRect)rectInCoordinateSpace:(id)arg1;
- (id)initWithRect:(struct CGRect)arg1 inCoordinateSpace:(id)arg2;
- (id)init;

@end

