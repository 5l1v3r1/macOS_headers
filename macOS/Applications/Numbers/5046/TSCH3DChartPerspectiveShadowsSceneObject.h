//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSCH3DChartShadowsSceneObject.h"

@interface TSCH3DChartPerspectiveShadowsSceneObject : TSCH3DChartShadowsSceneObject
{
}

+ (id)blurParametersArray;
- (id)createShadowsRenderer;
- (void)updateShadowPlane:(id)arg1 texcoords:(id)arg2 scene:(id)arg3 blurslack:(float)arg4 angle:(float)arg5 quality:(float)arg6 planePadding:(box_a3bd9649)arg7;
- (void)updateCoordsAndTexcoords:(const box_a3bd9649 *)arg1 camera:(id)arg2 quad:(id)arg3 texcoords:(id)arg4;
- (id)createCamera;

@end

