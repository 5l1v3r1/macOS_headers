//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OABReaderClient.h"

__attribute__((visibility("hidden")))
@interface PBOfficeArtReaderClient : NSObject <OABReaderClient>
{
}

+ (id)readDrawableFromPackagePart:(id)arg1 foundInObject:(id)arg2 state:(id)arg3;
+ (int)oadSchemeColorValueForEshSchemeColorIndex:(unsigned short)arg1 state:(id)arg2;
+ (BOOL)xmlEquivalentOfDrawableCanBeUsed;
+ (BOOL)tablesAreAllowed;
+ (BOOL)escherIsFullySupported;
+ (void)readClientDataFromTableCell:(id)arg1 toTableCell:(id)arg2 state:(id)arg3;
+ (void)readClientDataFromGroup:(id)arg1 toGroup:(id)arg2 state:(id)arg3;
+ (void)readClientDataFromShape:(id)arg1 toGraphic:(id)arg2 state:(id)arg3;
+ (BOOL)readClientTextBoxFromShape:(id)arg1 toGraphic:(id)arg2 clientData:(id)arg3 state:(id)arg4;
+ (id)readClientTextBoxFromShape:(id)arg1 toTextBody:(id)arg2 state:(id)arg3;
+ (id)newBuildFromBuildType:(int)arg1;
+ (int)directionFromFlyDirection:(int)arg1;
+ (int)presetIdFromFlyMethod:(int)arg1 isEntrance:(BOOL)arg2;
+ (id)newTargetFromDrawable:(id)arg1 clientData:(id)arg2 buildType:(int)arg3;
+ (BOOL)readPlaceholderInfo:(id)arg1 clientData:(id)arg2 toGraphic:(id)arg3 presentationState:(id)arg4;
+ (BOOL)readOleFromClientDataHolder:(id)arg1 toGraphic:(id)arg2 tgtClientData:(id)arg3 state:(id)arg4;
+ (void)addRecolorSpec:(const struct PptRecolorSpec *)arg1 toDictionary:(id)arg2 state:(id)arg3;
+ (BOOL)readRecolorInfoFromClientDataHolder:(id)arg1 toClientData:(id)arg2 state:(id)arg3;
+ (void)readHyperlinkFromShapeContainerHolder:(id)arg1 toDrawable:(id)arg2 state:(id)arg3;
+ (void)readClientAnchorFromContainer:(id)arg1 toDrawable:(id)arg2 state:(id)arg3;

@end

