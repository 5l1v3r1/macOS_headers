//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSString;

@interface NTPBLayoutAttributes : PBCodable <NSCopying>
{
    long long _accessoryContentMode;
    long long _borderSpecification;
    long long _columnSpan;
    long long _imagePosition;
    long long _numberOfSegments;
    long long _publisherLogoContentMode;
    long long _rowSpan;
    long long _segmentViewDirection;
    long long _titleNextToImageRangeLength;
    long long _titleNextToImageRangeLocation;
    long long _titleTextAlignment;
    float _accessoryBottomPadding;
    NSData *_accessoryFontColor;
    float _accessoryFontLineHeight;
    NSString *_accessoryFontName;
    float _accessoryFontSize;
    NSData *_accessoryIconColor;
    float _accessoryLeftPadding;
    float _accessoryRightPadding;
    float _accessoryTopPadding;
    float _accessoryViewHeight;
    float _accessoryViewWidth;
    float _accessoryViewX;
    float _accessoryViewY;
    NSData *_backgroundColor;
    float _backgroundColorInsetBottom;
    float _backgroundColorInsetLeft;
    float _backgroundColorInsetRight;
    float _backgroundColorInsetTop;
    int _cellType;
    float _contentInsetBottom;
    float _contentInsetLeft;
    float _contentInsetRight;
    float _contentInsetTop;
    NSString *_decorationKind;
    NSData *_excerptColor;
    float _excerptFontLineHeight;
    NSString *_excerptFontName;
    float _excerptFontSize;
    float _excerptFrameHeight;
    float _excerptFrameWidth;
    float _excerptFrameX;
    float _excerptFrameY;
    float _frameHeight;
    float _frameWidth;
    float _frameX;
    float _frameY;
    float _imageViewFrameHeight;
    float _imageViewFrameWidth;
    float _imageViewFrameX;
    float _imageViewFrameY;
    float _logoImageFrameHeight;
    float _logoImageFrameWidth;
    float _logoImageFrameX;
    float _logoImageFrameY;
    NSData *_numberedCircleColor;
    float _numberedCircleFrameHeight;
    float _numberedCircleFrameWidth;
    float _numberedCircleFrameX;
    float _numberedCircleFrameY;
    NSData *_publisherLogoColor;
    float _segmentViewFrameHeight;
    float _segmentViewFrameWidth;
    float _segmentViewFrameX;
    float _segmentViewFrameY;
    float _selectionCornerRadius;
    float _selectionInsetBottom;
    float _selectionInsetLeft;
    float _selectionInsetRight;
    float _selectionInsetTop;
    float _shadowOffsetX;
    float _shadowOffsetY;
    float _shadowOpacity;
    float _shadowRadius;
    float _sharrowFrameHeight;
    float _sharrowFrameWidth;
    float _sharrowFrameX;
    float _sharrowFrameY;
    float _subtitleFrameHeight;
    float _subtitleFrameWidth;
    float _subtitleFrameX;
    float _subtitleFrameY;
    NSData *_titleColor;
    float _titleFontLineHeight;
    NSString *_titleFontName;
    float _titleFontSize;
    float _titleFrameHeight;
    float _titleFrameWidth;
    float _titleFrameX;
    float _titleFrameY;
    BOOL _hasVideo;
    BOOL _isAccessoryViewCompactWidth;
    BOOL _showingAccessoryText;
    struct {
        unsigned int accessoryContentMode:1;
        unsigned int borderSpecification:1;
        unsigned int columnSpan:1;
        unsigned int imagePosition:1;
        unsigned int numberOfSegments:1;
        unsigned int publisherLogoContentMode:1;
        unsigned int rowSpan:1;
        unsigned int segmentViewDirection:1;
        unsigned int titleNextToImageRangeLength:1;
        unsigned int titleNextToImageRangeLocation:1;
        unsigned int titleTextAlignment:1;
        unsigned int accessoryBottomPadding:1;
        unsigned int accessoryFontLineHeight:1;
        unsigned int accessoryFontSize:1;
        unsigned int accessoryLeftPadding:1;
        unsigned int accessoryRightPadding:1;
        unsigned int accessoryTopPadding:1;
        unsigned int accessoryViewHeight:1;
        unsigned int accessoryViewWidth:1;
        unsigned int accessoryViewX:1;
        unsigned int accessoryViewY:1;
        unsigned int backgroundColorInsetBottom:1;
        unsigned int backgroundColorInsetLeft:1;
        unsigned int backgroundColorInsetRight:1;
        unsigned int backgroundColorInsetTop:1;
        unsigned int cellType:1;
        unsigned int contentInsetBottom:1;
        unsigned int contentInsetLeft:1;
        unsigned int contentInsetRight:1;
        unsigned int contentInsetTop:1;
        unsigned int excerptFontLineHeight:1;
        unsigned int excerptFontSize:1;
        unsigned int excerptFrameHeight:1;
        unsigned int excerptFrameWidth:1;
        unsigned int excerptFrameX:1;
        unsigned int excerptFrameY:1;
        unsigned int imageViewFrameHeight:1;
        unsigned int imageViewFrameWidth:1;
        unsigned int imageViewFrameX:1;
        unsigned int imageViewFrameY:1;
        unsigned int logoImageFrameHeight:1;
        unsigned int logoImageFrameWidth:1;
        unsigned int logoImageFrameX:1;
        unsigned int logoImageFrameY:1;
        unsigned int numberedCircleFrameHeight:1;
        unsigned int numberedCircleFrameWidth:1;
        unsigned int numberedCircleFrameX:1;
        unsigned int numberedCircleFrameY:1;
        unsigned int segmentViewFrameHeight:1;
        unsigned int segmentViewFrameWidth:1;
        unsigned int segmentViewFrameX:1;
        unsigned int segmentViewFrameY:1;
        unsigned int selectionCornerRadius:1;
        unsigned int selectionInsetBottom:1;
        unsigned int selectionInsetLeft:1;
        unsigned int selectionInsetRight:1;
        unsigned int selectionInsetTop:1;
        unsigned int shadowOffsetX:1;
        unsigned int shadowOffsetY:1;
        unsigned int shadowOpacity:1;
        unsigned int shadowRadius:1;
        unsigned int sharrowFrameHeight:1;
        unsigned int sharrowFrameWidth:1;
        unsigned int sharrowFrameX:1;
        unsigned int sharrowFrameY:1;
        unsigned int subtitleFrameHeight:1;
        unsigned int subtitleFrameWidth:1;
        unsigned int subtitleFrameX:1;
        unsigned int subtitleFrameY:1;
        unsigned int titleFontLineHeight:1;
        unsigned int titleFontSize:1;
        unsigned int titleFrameHeight:1;
        unsigned int titleFrameWidth:1;
        unsigned int titleFrameX:1;
        unsigned int titleFrameY:1;
        unsigned int hasVideo:1;
        unsigned int isAccessoryViewCompactWidth:1;
        unsigned int showingAccessoryText:1;
    } _has;
}

@property(nonatomic) float accessoryRightPadding; // @synthesize accessoryRightPadding=_accessoryRightPadding;
@property(nonatomic) float accessoryLeftPadding; // @synthesize accessoryLeftPadding=_accessoryLeftPadding;
@property(nonatomic) float accessoryTopPadding; // @synthesize accessoryTopPadding=_accessoryTopPadding;
@property(nonatomic) float accessoryBottomPadding; // @synthesize accessoryBottomPadding=_accessoryBottomPadding;
@property(nonatomic) long long segmentViewDirection; // @synthesize segmentViewDirection=_segmentViewDirection;
@property(nonatomic) long long numberOfSegments; // @synthesize numberOfSegments=_numberOfSegments;
@property(nonatomic) float segmentViewFrameHeight; // @synthesize segmentViewFrameHeight=_segmentViewFrameHeight;
@property(nonatomic) float segmentViewFrameWidth; // @synthesize segmentViewFrameWidth=_segmentViewFrameWidth;
@property(nonatomic) float segmentViewFrameY; // @synthesize segmentViewFrameY=_segmentViewFrameY;
@property(nonatomic) float segmentViewFrameX; // @synthesize segmentViewFrameX=_segmentViewFrameX;
@property(nonatomic) float shadowOffsetY; // @synthesize shadowOffsetY=_shadowOffsetY;
@property(nonatomic) float shadowOffsetX; // @synthesize shadowOffsetX=_shadowOffsetX;
@property(nonatomic) float shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;
@property(nonatomic) float shadowRadius; // @synthesize shadowRadius=_shadowRadius;
@property(nonatomic) long long titleNextToImageRangeLength; // @synthesize titleNextToImageRangeLength=_titleNextToImageRangeLength;
@property(nonatomic) long long titleNextToImageRangeLocation; // @synthesize titleNextToImageRangeLocation=_titleNextToImageRangeLocation;
@property(nonatomic) long long publisherLogoContentMode; // @synthesize publisherLogoContentMode=_publisherLogoContentMode;
@property(nonatomic) float selectionCornerRadius; // @synthesize selectionCornerRadius=_selectionCornerRadius;
@property(nonatomic) float selectionInsetRight; // @synthesize selectionInsetRight=_selectionInsetRight;
@property(nonatomic) float selectionInsetBottom; // @synthesize selectionInsetBottom=_selectionInsetBottom;
@property(nonatomic) float selectionInsetLeft; // @synthesize selectionInsetLeft=_selectionInsetLeft;
@property(nonatomic) float selectionInsetTop; // @synthesize selectionInsetTop=_selectionInsetTop;
@property(nonatomic) float sharrowFrameHeight; // @synthesize sharrowFrameHeight=_sharrowFrameHeight;
@property(nonatomic) float sharrowFrameWidth; // @synthesize sharrowFrameWidth=_sharrowFrameWidth;
@property(nonatomic) float sharrowFrameY; // @synthesize sharrowFrameY=_sharrowFrameY;
@property(nonatomic) float sharrowFrameX; // @synthesize sharrowFrameX=_sharrowFrameX;
@property(retain, nonatomic) NSData *numberedCircleColor; // @synthesize numberedCircleColor=_numberedCircleColor;
@property(nonatomic) float numberedCircleFrameHeight; // @synthesize numberedCircleFrameHeight=_numberedCircleFrameHeight;
@property(nonatomic) float numberedCircleFrameWidth; // @synthesize numberedCircleFrameWidth=_numberedCircleFrameWidth;
@property(nonatomic) float numberedCircleFrameY; // @synthesize numberedCircleFrameY=_numberedCircleFrameY;
@property(nonatomic) float numberedCircleFrameX; // @synthesize numberedCircleFrameX=_numberedCircleFrameX;
@property(retain, nonatomic) NSData *accessoryIconColor; // @synthesize accessoryIconColor=_accessoryIconColor;
@property(retain, nonatomic) NSData *publisherLogoColor; // @synthesize publisherLogoColor=_publisherLogoColor;
@property(nonatomic) BOOL isAccessoryViewCompactWidth; // @synthesize isAccessoryViewCompactWidth=_isAccessoryViewCompactWidth;
@property(nonatomic) BOOL showingAccessoryText; // @synthesize showingAccessoryText=_showingAccessoryText;
@property(nonatomic) long long accessoryContentMode; // @synthesize accessoryContentMode=_accessoryContentMode;
@property(retain, nonatomic) NSString *accessoryFontName; // @synthesize accessoryFontName=_accessoryFontName;
@property(retain, nonatomic) NSData *accessoryFontColor; // @synthesize accessoryFontColor=_accessoryFontColor;
@property(nonatomic) float accessoryFontLineHeight; // @synthesize accessoryFontLineHeight=_accessoryFontLineHeight;
@property(nonatomic) float accessoryFontSize; // @synthesize accessoryFontSize=_accessoryFontSize;
@property(nonatomic) long long titleTextAlignment; // @synthesize titleTextAlignment=_titleTextAlignment;
@property(retain, nonatomic) NSData *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSData *excerptColor; // @synthesize excerptColor=_excerptColor;
@property(retain, nonatomic) NSData *titleColor; // @synthesize titleColor=_titleColor;
@property(nonatomic) float excerptFontLineHeight; // @synthesize excerptFontLineHeight=_excerptFontLineHeight;
@property(nonatomic) float titleFontLineHeight; // @synthesize titleFontLineHeight=_titleFontLineHeight;
@property(nonatomic) float excerptFontSize; // @synthesize excerptFontSize=_excerptFontSize;
@property(nonatomic) float titleFontSize; // @synthesize titleFontSize=_titleFontSize;
@property(retain, nonatomic) NSString *excerptFontName; // @synthesize excerptFontName=_excerptFontName;
@property(retain, nonatomic) NSString *titleFontName; // @synthesize titleFontName=_titleFontName;
@property(nonatomic) int cellType; // @synthesize cellType=_cellType;
@property(nonatomic) float backgroundColorInsetRight; // @synthesize backgroundColorInsetRight=_backgroundColorInsetRight;
@property(nonatomic) float backgroundColorInsetBottom; // @synthesize backgroundColorInsetBottom=_backgroundColorInsetBottom;
@property(nonatomic) float backgroundColorInsetLeft; // @synthesize backgroundColorInsetLeft=_backgroundColorInsetLeft;
@property(nonatomic) float backgroundColorInsetTop; // @synthesize backgroundColorInsetTop=_backgroundColorInsetTop;
@property(nonatomic) float accessoryViewHeight; // @synthesize accessoryViewHeight=_accessoryViewHeight;
@property(nonatomic) float accessoryViewY; // @synthesize accessoryViewY=_accessoryViewY;
@property(nonatomic) float accessoryViewWidth; // @synthesize accessoryViewWidth=_accessoryViewWidth;
@property(nonatomic) float accessoryViewX; // @synthesize accessoryViewX=_accessoryViewX;
@property(nonatomic) long long rowSpan; // @synthesize rowSpan=_rowSpan;
@property(nonatomic) float contentInsetRight; // @synthesize contentInsetRight=_contentInsetRight;
@property(nonatomic) float contentInsetBottom; // @synthesize contentInsetBottom=_contentInsetBottom;
@property(nonatomic) float contentInsetLeft; // @synthesize contentInsetLeft=_contentInsetLeft;
@property(nonatomic) float contentInsetTop; // @synthesize contentInsetTop=_contentInsetTop;
@property(nonatomic) float subtitleFrameHeight; // @synthesize subtitleFrameHeight=_subtitleFrameHeight;
@property(nonatomic) float subtitleFrameWidth; // @synthesize subtitleFrameWidth=_subtitleFrameWidth;
@property(nonatomic) float subtitleFrameY; // @synthesize subtitleFrameY=_subtitleFrameY;
@property(nonatomic) float subtitleFrameX; // @synthesize subtitleFrameX=_subtitleFrameX;
@property(nonatomic) long long borderSpecification; // @synthesize borderSpecification=_borderSpecification;
@property(nonatomic) BOOL hasVideo; // @synthesize hasVideo=_hasVideo;
@property(retain, nonatomic) NSString *decorationKind; // @synthesize decorationKind=_decorationKind;
@property(nonatomic) float excerptFrameHeight; // @synthesize excerptFrameHeight=_excerptFrameHeight;
@property(nonatomic) float excerptFrameWidth; // @synthesize excerptFrameWidth=_excerptFrameWidth;
@property(nonatomic) float excerptFrameY; // @synthesize excerptFrameY=_excerptFrameY;
@property(nonatomic) float excerptFrameX; // @synthesize excerptFrameX=_excerptFrameX;
@property(nonatomic) float logoImageFrameHeight; // @synthesize logoImageFrameHeight=_logoImageFrameHeight;
@property(nonatomic) float logoImageFrameWidth; // @synthesize logoImageFrameWidth=_logoImageFrameWidth;
@property(nonatomic) float logoImageFrameY; // @synthesize logoImageFrameY=_logoImageFrameY;
@property(nonatomic) float logoImageFrameX; // @synthesize logoImageFrameX=_logoImageFrameX;
@property(nonatomic) float titleFrameHeight; // @synthesize titleFrameHeight=_titleFrameHeight;
@property(nonatomic) float titleFrameWidth; // @synthesize titleFrameWidth=_titleFrameWidth;
@property(nonatomic) float titleFrameY; // @synthesize titleFrameY=_titleFrameY;
@property(nonatomic) float titleFrameX; // @synthesize titleFrameX=_titleFrameX;
@property(nonatomic) float imageViewFrameHeight; // @synthesize imageViewFrameHeight=_imageViewFrameHeight;
@property(nonatomic) float imageViewFrameWidth; // @synthesize imageViewFrameWidth=_imageViewFrameWidth;
@property(nonatomic) float imageViewFrameY; // @synthesize imageViewFrameY=_imageViewFrameY;
@property(nonatomic) float imageViewFrameX; // @synthesize imageViewFrameX=_imageViewFrameX;
@property(nonatomic) long long imagePosition; // @synthesize imagePosition=_imagePosition;
@property(nonatomic) long long columnSpan; // @synthesize columnSpan=_columnSpan;
@property(nonatomic) float frameHeight; // @synthesize frameHeight=_frameHeight;
@property(nonatomic) float frameWidth; // @synthesize frameWidth=_frameWidth;
@property(nonatomic) float frameY; // @synthesize frameY=_frameY;
@property(nonatomic) float frameX; // @synthesize frameX=_frameX;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasAccessoryRightPadding;
@property(nonatomic) BOOL hasAccessoryLeftPadding;
@property(nonatomic) BOOL hasAccessoryTopPadding;
@property(nonatomic) BOOL hasAccessoryBottomPadding;
@property(nonatomic) BOOL hasSegmentViewDirection;
@property(nonatomic) BOOL hasNumberOfSegments;
@property(nonatomic) BOOL hasSegmentViewFrameHeight;
@property(nonatomic) BOOL hasSegmentViewFrameWidth;
@property(nonatomic) BOOL hasSegmentViewFrameY;
@property(nonatomic) BOOL hasSegmentViewFrameX;
@property(nonatomic) BOOL hasShadowOffsetY;
@property(nonatomic) BOOL hasShadowOffsetX;
@property(nonatomic) BOOL hasShadowOpacity;
@property(nonatomic) BOOL hasShadowRadius;
@property(nonatomic) BOOL hasTitleNextToImageRangeLength;
@property(nonatomic) BOOL hasTitleNextToImageRangeLocation;
@property(nonatomic) BOOL hasPublisherLogoContentMode;
@property(nonatomic) BOOL hasSelectionCornerRadius;
@property(nonatomic) BOOL hasSelectionInsetRight;
@property(nonatomic) BOOL hasSelectionInsetBottom;
@property(nonatomic) BOOL hasSelectionInsetLeft;
@property(nonatomic) BOOL hasSelectionInsetTop;
@property(nonatomic) BOOL hasSharrowFrameHeight;
@property(nonatomic) BOOL hasSharrowFrameWidth;
@property(nonatomic) BOOL hasSharrowFrameY;
@property(nonatomic) BOOL hasSharrowFrameX;
@property(readonly, nonatomic) BOOL hasNumberedCircleColor;
@property(nonatomic) BOOL hasNumberedCircleFrameHeight;
@property(nonatomic) BOOL hasNumberedCircleFrameWidth;
@property(nonatomic) BOOL hasNumberedCircleFrameY;
@property(nonatomic) BOOL hasNumberedCircleFrameX;
@property(readonly, nonatomic) BOOL hasAccessoryIconColor;
@property(readonly, nonatomic) BOOL hasPublisherLogoColor;
@property(nonatomic) BOOL hasIsAccessoryViewCompactWidth;
@property(nonatomic) BOOL hasShowingAccessoryText;
@property(nonatomic) BOOL hasAccessoryContentMode;
@property(readonly, nonatomic) BOOL hasAccessoryFontName;
@property(readonly, nonatomic) BOOL hasAccessoryFontColor;
@property(nonatomic) BOOL hasAccessoryFontLineHeight;
@property(nonatomic) BOOL hasAccessoryFontSize;
@property(nonatomic) BOOL hasTitleTextAlignment;
@property(readonly, nonatomic) BOOL hasBackgroundColor;
@property(readonly, nonatomic) BOOL hasExcerptColor;
@property(readonly, nonatomic) BOOL hasTitleColor;
@property(nonatomic) BOOL hasExcerptFontLineHeight;
@property(nonatomic) BOOL hasTitleFontLineHeight;
@property(nonatomic) BOOL hasExcerptFontSize;
@property(nonatomic) BOOL hasTitleFontSize;
@property(readonly, nonatomic) BOOL hasExcerptFontName;
@property(readonly, nonatomic) BOOL hasTitleFontName;
@property(nonatomic) BOOL hasCellType;
@property(nonatomic) BOOL hasBackgroundColorInsetRight;
@property(nonatomic) BOOL hasBackgroundColorInsetBottom;
@property(nonatomic) BOOL hasBackgroundColorInsetLeft;
@property(nonatomic) BOOL hasBackgroundColorInsetTop;
@property(nonatomic) BOOL hasAccessoryViewHeight;
@property(nonatomic) BOOL hasAccessoryViewY;
@property(nonatomic) BOOL hasAccessoryViewWidth;
@property(nonatomic) BOOL hasAccessoryViewX;
@property(nonatomic) BOOL hasRowSpan;
@property(nonatomic) BOOL hasContentInsetRight;
@property(nonatomic) BOOL hasContentInsetBottom;
@property(nonatomic) BOOL hasContentInsetLeft;
@property(nonatomic) BOOL hasContentInsetTop;
@property(nonatomic) BOOL hasSubtitleFrameHeight;
@property(nonatomic) BOOL hasSubtitleFrameWidth;
@property(nonatomic) BOOL hasSubtitleFrameY;
@property(nonatomic) BOOL hasSubtitleFrameX;
@property(nonatomic) BOOL hasBorderSpecification;
@property(nonatomic) BOOL hasHasVideo;
@property(readonly, nonatomic) BOOL hasDecorationKind;
@property(nonatomic) BOOL hasExcerptFrameHeight;
@property(nonatomic) BOOL hasExcerptFrameWidth;
@property(nonatomic) BOOL hasExcerptFrameY;
@property(nonatomic) BOOL hasExcerptFrameX;
@property(nonatomic) BOOL hasLogoImageFrameHeight;
@property(nonatomic) BOOL hasLogoImageFrameWidth;
@property(nonatomic) BOOL hasLogoImageFrameY;
@property(nonatomic) BOOL hasLogoImageFrameX;
@property(nonatomic) BOOL hasTitleFrameHeight;
@property(nonatomic) BOOL hasTitleFrameWidth;
@property(nonatomic) BOOL hasTitleFrameY;
@property(nonatomic) BOOL hasTitleFrameX;
@property(nonatomic) BOOL hasImageViewFrameHeight;
@property(nonatomic) BOOL hasImageViewFrameWidth;
@property(nonatomic) BOOL hasImageViewFrameY;
@property(nonatomic) BOOL hasImageViewFrameX;
@property(nonatomic) BOOL hasImagePosition;
@property(nonatomic) BOOL hasColumnSpan;

@end

