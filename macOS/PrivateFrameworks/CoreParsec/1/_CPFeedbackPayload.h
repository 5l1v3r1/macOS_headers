//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSCopying-Protocol.h>

@class NSData, _CPCPEndNetworkSearchFeedback, _CPCacheHitFeedback, _CPCardSectionEngagementFeedback, _CPCardViewDisappearFeedback, _CPClearInputFeedback, _CPConnectionInvalidatedFeedback, _CPCustomFeedback, _CPDidGoToSiteFeedback, _CPEndLocalSearchFeedback, _CPEndNetworkSearchFeedback, _CPEndSearchFeedback, _CPErrorFeedback, _CPFeedback, _CPLateSectionsAppendedFeedback, _CPMapsCardSectionEngagementFeedback, _CPRankingFeedback, _CPResultEngagementFeedback, _CPResultGradingFeedback, _CPResultsReceivedAfterTimeoutFeedback, _CPSearchViewAppearFeedback, _CPSearchViewDisappearFeedback, _CPSectionEngagementFeedback, _CPSessionEndFeedback, _CPSessionMissingResultsFeedback, _CPSessionMissingSuggestionsFeedback, _CPSkipSearchFeedback, _CPStartLocalSearchFeedback, _CPStartNetworkSearchFeedback, _CPStartSearchFeedback, _CPSuggestionEngagementFeedback, _CPVisibleResultsFeedback, _CPVisibleSectionHeaderFeedback, _CPVisibleSuggestionsFeedback;
@protocol SFProcessableFeedback;

@interface _CPFeedbackPayload : PBCodable <NSCopying>
{
    _CPCacheHitFeedback *_cacheHitFeedback;
    _CPCardSectionEngagementFeedback *_cardSectionEngagementFeedback;
    _CPCardViewDisappearFeedback *_cardViewDisappearFeedback;
    _CPClearInputFeedback *_clearInputFeedback;
    _CPConnectionInvalidatedFeedback *_connectionInvalidatedFeedback;
    _CPCPEndNetworkSearchFeedback *_cpEndNetworkSearchFeedback;
    _CPCustomFeedback *_customFeedback;
    _CPDidGoToSiteFeedback *_didGoToSiteFeedback;
    _CPEndLocalSearchFeedback *_endLocalSearchFeedback;
    _CPEndSearchFeedback *_endSearchFeedback;
    _CPErrorFeedback *_errorFeedback;
    _CPFeedback *_genericFeedback;
    _CPLateSectionsAppendedFeedback *_lateSectionsAppendedFeedback;
    _CPMapsCardSectionEngagementFeedback *_mapsCardSectionEngagmentFeedback;
    _CPRankingFeedback *_rankingFeedback;
    _CPResultEngagementFeedback *_resultEngagementFeedback;
    _CPResultGradingFeedback *_resultGradingFeedback;
    _CPResultsReceivedAfterTimeoutFeedback *_resultsReceivedAfterTimeoutFeedback;
    _CPSearchViewAppearFeedback *_searchViewAppearFeedback;
    _CPSearchViewDisappearFeedback *_searchViewDisappearFeedback;
    _CPSectionEngagementFeedback *_sectionEngagementFeedback;
    _CPSessionEndFeedback *_sessionEndFeedback;
    _CPSessionMissingResultsFeedback *_sessionMissingResultsFeedback;
    _CPSessionMissingSuggestionsFeedback *_sessionMissingSuggestionsFeedback;
    _CPEndNetworkSearchFeedback *_sfEndNetworkSearchFeedback;
    _CPSkipSearchFeedback *_skipSearchFeedback;
    _CPStartLocalSearchFeedback *_startLocalSearchFeedback;
    _CPStartNetworkSearchFeedback *_startNetworkSearchFeedback;
    _CPStartSearchFeedback *_startSearchFeedback;
    _CPSuggestionEngagementFeedback *_suggestionEngagementFeedback;
    int _type;
    NSData *_unknownFeedback;
    _CPVisibleResultsFeedback *_visibleResultsFeedback;
    _CPVisibleSectionHeaderFeedback *_visibleSectionHeaderFeedback;
    _CPVisibleSuggestionsFeedback *_visibleSuggestionsFeedback;
}

@property(retain, nonatomic) NSData *unknownFeedback; // @synthesize unknownFeedback=_unknownFeedback;
@property(retain, nonatomic) _CPResultGradingFeedback *resultGradingFeedback; // @synthesize resultGradingFeedback=_resultGradingFeedback;
@property(retain, nonatomic) _CPMapsCardSectionEngagementFeedback *mapsCardSectionEngagmentFeedback; // @synthesize mapsCardSectionEngagmentFeedback=_mapsCardSectionEngagmentFeedback;
@property(retain, nonatomic) _CPCacheHitFeedback *cacheHitFeedback; // @synthesize cacheHitFeedback=_cacheHitFeedback;
@property(retain, nonatomic) _CPVisibleResultsFeedback *visibleResultsFeedback; // @synthesize visibleResultsFeedback=_visibleResultsFeedback;
@property(retain, nonatomic) _CPFeedback *genericFeedback; // @synthesize genericFeedback=_genericFeedback;
@property(retain, nonatomic) _CPEndNetworkSearchFeedback *sfEndNetworkSearchFeedback; // @synthesize sfEndNetworkSearchFeedback=_sfEndNetworkSearchFeedback;
@property(retain, nonatomic) _CPConnectionInvalidatedFeedback *connectionInvalidatedFeedback; // @synthesize connectionInvalidatedFeedback=_connectionInvalidatedFeedback;
@property(retain, nonatomic) _CPDidGoToSiteFeedback *didGoToSiteFeedback; // @synthesize didGoToSiteFeedback=_didGoToSiteFeedback;
@property(retain, nonatomic) _CPSessionMissingSuggestionsFeedback *sessionMissingSuggestionsFeedback; // @synthesize sessionMissingSuggestionsFeedback=_sessionMissingSuggestionsFeedback;
@property(retain, nonatomic) _CPSessionMissingResultsFeedback *sessionMissingResultsFeedback; // @synthesize sessionMissingResultsFeedback=_sessionMissingResultsFeedback;
@property(retain, nonatomic) _CPVisibleSectionHeaderFeedback *visibleSectionHeaderFeedback; // @synthesize visibleSectionHeaderFeedback=_visibleSectionHeaderFeedback;
@property(retain, nonatomic) _CPSectionEngagementFeedback *sectionEngagementFeedback; // @synthesize sectionEngagementFeedback=_sectionEngagementFeedback;
@property(retain, nonatomic) _CPSkipSearchFeedback *skipSearchFeedback; // @synthesize skipSearchFeedback=_skipSearchFeedback;
@property(retain, nonatomic) _CPSessionEndFeedback *sessionEndFeedback; // @synthesize sessionEndFeedback=_sessionEndFeedback;
@property(retain, nonatomic) _CPClearInputFeedback *clearInputFeedback; // @synthesize clearInputFeedback=_clearInputFeedback;
@property(retain, nonatomic) _CPLateSectionsAppendedFeedback *lateSectionsAppendedFeedback; // @synthesize lateSectionsAppendedFeedback=_lateSectionsAppendedFeedback;
@property(retain, nonatomic) _CPResultsReceivedAfterTimeoutFeedback *resultsReceivedAfterTimeoutFeedback; // @synthesize resultsReceivedAfterTimeoutFeedback=_resultsReceivedAfterTimeoutFeedback;
@property(retain, nonatomic) _CPCustomFeedback *customFeedback; // @synthesize customFeedback=_customFeedback;
@property(retain, nonatomic) _CPVisibleSuggestionsFeedback *visibleSuggestionsFeedback; // @synthesize visibleSuggestionsFeedback=_visibleSuggestionsFeedback;
@property(retain, nonatomic) _CPEndSearchFeedback *endSearchFeedback; // @synthesize endSearchFeedback=_endSearchFeedback;
@property(retain, nonatomic) _CPStartSearchFeedback *startSearchFeedback; // @synthesize startSearchFeedback=_startSearchFeedback;
@property(retain, nonatomic) _CPCardViewDisappearFeedback *cardViewDisappearFeedback; // @synthesize cardViewDisappearFeedback=_cardViewDisappearFeedback;
@property(retain, nonatomic) _CPSuggestionEngagementFeedback *suggestionEngagementFeedback; // @synthesize suggestionEngagementFeedback=_suggestionEngagementFeedback;
@property(retain, nonatomic) _CPErrorFeedback *errorFeedback; // @synthesize errorFeedback=_errorFeedback;
@property(retain, nonatomic) _CPCardSectionEngagementFeedback *cardSectionEngagementFeedback; // @synthesize cardSectionEngagementFeedback=_cardSectionEngagementFeedback;
@property(retain, nonatomic) _CPResultEngagementFeedback *resultEngagementFeedback; // @synthesize resultEngagementFeedback=_resultEngagementFeedback;
@property(retain, nonatomic) _CPRankingFeedback *rankingFeedback; // @synthesize rankingFeedback=_rankingFeedback;
@property(retain, nonatomic) _CPSearchViewDisappearFeedback *searchViewDisappearFeedback; // @synthesize searchViewDisappearFeedback=_searchViewDisappearFeedback;
@property(retain, nonatomic) _CPSearchViewAppearFeedback *searchViewAppearFeedback; // @synthesize searchViewAppearFeedback=_searchViewAppearFeedback;
@property(retain, nonatomic) _CPEndLocalSearchFeedback *endLocalSearchFeedback; // @synthesize endLocalSearchFeedback=_endLocalSearchFeedback;
@property(retain, nonatomic) _CPStartLocalSearchFeedback *startLocalSearchFeedback; // @synthesize startLocalSearchFeedback=_startLocalSearchFeedback;
@property(retain, nonatomic) _CPCPEndNetworkSearchFeedback *cpEndNetworkSearchFeedback; // @synthesize cpEndNetworkSearchFeedback=_cpEndNetworkSearchFeedback;
@property(retain, nonatomic) _CPStartNetworkSearchFeedback *startNetworkSearchFeedback; // @synthesize startNetworkSearchFeedback=_startNetworkSearchFeedback;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasUnknownFeedback;
@property(readonly, nonatomic) BOOL hasResultGradingFeedback;
@property(readonly, nonatomic) BOOL hasMapsCardSectionEngagmentFeedback;
@property(readonly, nonatomic) BOOL hasCacheHitFeedback;
@property(readonly, nonatomic) BOOL hasVisibleResultsFeedback;
@property(readonly, nonatomic) BOOL hasGenericFeedback;
@property(readonly, nonatomic) BOOL hasSfEndNetworkSearchFeedback;
@property(readonly, nonatomic) BOOL hasConnectionInvalidatedFeedback;
@property(readonly, nonatomic) BOOL hasDidGoToSiteFeedback;
@property(readonly, nonatomic) BOOL hasSessionMissingSuggestionsFeedback;
@property(readonly, nonatomic) BOOL hasSessionMissingResultsFeedback;
@property(readonly, nonatomic) BOOL hasVisibleSectionHeaderFeedback;
@property(readonly, nonatomic) BOOL hasSectionEngagementFeedback;
@property(readonly, nonatomic) BOOL hasSkipSearchFeedback;
@property(readonly, nonatomic) BOOL hasSessionEndFeedback;
@property(readonly, nonatomic) BOOL hasClearInputFeedback;
@property(readonly, nonatomic) BOOL hasLateSectionsAppendedFeedback;
@property(readonly, nonatomic) BOOL hasResultsReceivedAfterTimeoutFeedback;
@property(readonly, nonatomic) BOOL hasCustomFeedback;
@property(readonly, nonatomic) BOOL hasVisibleSuggestionsFeedback;
@property(readonly, nonatomic) BOOL hasEndSearchFeedback;
@property(readonly, nonatomic) BOOL hasStartSearchFeedback;
@property(readonly, nonatomic) BOOL hasCardViewDisappearFeedback;
@property(readonly, nonatomic) BOOL hasSuggestionEngagementFeedback;
@property(readonly, nonatomic) BOOL hasErrorFeedback;
@property(readonly, nonatomic) BOOL hasCardSectionEngagementFeedback;
@property(readonly, nonatomic) BOOL hasResultEngagementFeedback;
@property(readonly, nonatomic) BOOL hasRankingFeedback;
@property(readonly, nonatomic) BOOL hasSearchViewDisappearFeedback;
@property(readonly, nonatomic) BOOL hasSearchViewAppearFeedback;
@property(readonly, nonatomic) BOOL hasEndLocalSearchFeedback;
@property(readonly, nonatomic) BOOL hasStartLocalSearchFeedback;
@property(readonly, nonatomic) BOOL hasCpEndNetworkSearchFeedback;
@property(readonly, nonatomic) BOOL hasStartNetworkSearchFeedback;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
- (void)process:(id)arg1;
@property(readonly, nonatomic) id <SFProcessableFeedback> feedback;
- (void)setFeedback:(id)arg1;
- (id)initWithFeedback:(id)arg1;

@end

