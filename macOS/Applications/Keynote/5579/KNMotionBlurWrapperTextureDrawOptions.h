//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface KNMotionBlurWrapperTextureDrawOptions : NSObject
{
    BOOL _isHidden;
    BOOL _wantsBackFaceCulling;
    BOOL _isBackground;
    BOOL _isForeground;
    BOOL _isEffect;
    BOOL _isMoving;
    double _opacity;
    struct CATransform3D _MVPMatrix;
    struct CATransform3D _previousMVPMatrix;
}

@property(nonatomic) struct CATransform3D previousMVPMatrix; // @synthesize previousMVPMatrix=_previousMVPMatrix;
@property(nonatomic) struct CATransform3D MVPMatrix; // @synthesize MVPMatrix=_MVPMatrix;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic) BOOL isMoving; // @synthesize isMoving=_isMoving;
@property(nonatomic) BOOL isEffect; // @synthesize isEffect=_isEffect;
@property(nonatomic) BOOL isForeground; // @synthesize isForeground=_isForeground;
@property(nonatomic) BOOL isBackground; // @synthesize isBackground=_isBackground;
@property(nonatomic) BOOL wantsBackFaceCulling; // @synthesize wantsBackFaceCulling=_wantsBackFaceCulling;
@property(nonatomic) BOOL isHidden; // @synthesize isHidden=_isHidden;
- (id)description;

@end

