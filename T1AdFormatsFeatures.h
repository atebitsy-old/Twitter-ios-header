//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol TFNTwitterFeatureSwitches;

@interface T1AdFormatsFeatures : NSObject
{
    id <TFNTwitterFeatureSwitches> _featureSwitches;
}

+ (id)featuresWithSwitches:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <TFNTwitterFeatureSwitches> featureSwitches; // @synthesize featureSwitches=_featureSwitches;
- (double)_t1_mediaRatio:(id)arg1;
- (id)_t1_cardTypesToMapToUnifiedCards;
- (id)_t1_clientHardcodedCardTypesToMapToUnifiedCards;
- (long long)_t1_appMetadataLineTwoTypeForModel:(id)arg1;
- (_Bool)_t1_isPassingAppRatingsExperimentThresholdForModel:(id)arg1;
- (id)_t1_applyMAPExperimentsIfNecessary:(id)arg1;
- (id)_t1_applyClientUCExperiments:(id)arg1;
- (id)_t1_applyLegacyCardToUCMigrations:(id)arg1;
- (id)updateURLIfNecessaryForDestination:(id)arg1 promotedContent:(id)arg2;
- (id)_t1_urlAppendingTwitterClickID:(id)arg1 impressionID:(id)arg2;
- (_Bool)cardDataContainsUnifiedCardWhenTransformed:(id)arg1;
- (id)applyClientUCTransforms:(id)arg1;
@property(readonly, nonatomic) _Bool shouldRenderDockedAppInstallSixteenByNineForAllMedia;
@property(readonly, nonatomic) _Bool shouldAllowAppInstallDestinationsNotMatchingCurrentPlatform;
@property(readonly, nonatomic) _Bool isUnifiedCardEnabled;
- (unsigned long long)_t1_edgeToEdgePresentationFromString:(id)arg1;
- (unsigned long long)_t1_videoCarouselPresentationFromString:(id)arg1;
- (unsigned long long)_t1_carouselPresentationFromString:(id)arg1;
- (_Bool)_t1_legacyCard:(long long)arg1 enabledForKey:(id)arg2;
- (id)_t1_featureSwitchNameForCardDisplayMode:(long long)arg1;
- (_Bool)isUnifiedCardDestinationOfTypeEnabled:(unsigned long long)arg1;
- (_Bool)isUnifiedCardComponentOfTypeEnabled:(unsigned long long)arg1;
- (long long)_t1_mediaDestinationTypeFromString:(id)arg1;
- (long long)_t1_unifiedCardMediaDestinationType;
- (unsigned long long)_t1_ctaButtonVariation;
- (_Bool)_t1_isCTAButtonVariationsExperimentEnabled;
@property(readonly, nonatomic) long long unifiedCardAppMetadataLineTwoType;
@property(readonly, nonatomic) _Bool shouldShowRatingsForAppMetadata;
@property(readonly, nonatomic) _Bool shouldUseSingleLineTitleForAppMetadata;
@property(readonly, nonatomic) _Bool shouldShowAppIconForAppMetadata;
- (_Bool)legacyCardEnabled:(long long)arg1 forDisplayMode:(long long)arg2;
- (_Bool)shouldForceForwardDisplayModeRenderingForLegacyCard:(long long)arg1;
@property(readonly, nonatomic) _Bool useNonFSOCompatibleLegacyCardRegistryKeys;
@property(readonly, nonatomic, getter=isLegacyCardRegistryEnabled) _Bool legacyCardRegistryEnabled;
- (long long)_t1_mapRatingsTypeFromString:(id)arg1;
@property(readonly, nonatomic) long long unifiedCardAppRatingsType;
@property(readonly, nonatomic) unsigned long long edgeToEdgePresentation;
@property(readonly, nonatomic) unsigned long long videoCarouselPresentation;
@property(readonly, nonatomic) unsigned long long carouselPresentation;
@property(readonly, nonatomic) _Bool isTweetViewInGalleryEnabled;
@property(readonly, nonatomic) double promotedImageRatio;
@property(readonly, nonatomic) _Bool isAdDisplaySessionGranularityReduced;
@property(readonly, nonatomic) _Bool isAdDisplaySessionEnabled;
@property(readonly, nonatomic) _Bool isUnifiedCardDominantColorsWebsiteCardDetailsEnabled;
@property(readonly, nonatomic) _Bool isUnifiedCardDominantColorsButtonGroupEnabled;
@property(readonly, nonatomic) _Bool isUnifiedCardDominantColorsAppDetailsEnabled;
@property(readonly, nonatomic) _Bool isMediaAppCardRatingsViewEnabled;
@property(readonly, nonatomic) _Bool isSkipTalonURLVerificationEnabled;
@property(readonly, nonatomic) _Bool isAdImpressionScrollToTopHandlerEnabled;
@property(readonly, nonatomic) double unifiedCardsSafariVCPresentationAnimationDuration;
@property(readonly, nonatomic) unsigned long long unifiedCardsSafariVCPresentationStyle;
- (double)_t1_webViewDwellIntervalForKey:(id)arg1 withFallback:(double)arg2;
@property(readonly, nonatomic) double webViewDwellLongInterval;
@property(readonly, nonatomic) double webViewDwellMediumInterval;
@property(readonly, nonatomic) double webViewDwellShortInterval;
@property(readonly, nonatomic) _Bool isAppInstallCardSubtitleEnabled;
@property(readonly, nonatomic) _Bool isAppInstallCardLargerCTAEnabled;
@property(readonly, nonatomic) _Bool isAppInstallCardCTAHiddenEnabled;
@property(readonly, nonatomic) double appRatingThreshold;
- (id)init;
- (id)initWithFeatureSwitches:(id)arg1;

@end
