//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/NSCopying-Protocol.h>

@class NSArray, TFNTwitterUnifiedCardAppStoreData;

@interface TFNTwitterUnifiedCard : NSObject <NSCopying>
{
    _Bool _shouldHideBorder;
    NSArray *_components;
    TFNTwitterUnifiedCardAppStoreData *_appStoreData;
    CDUnknownBlockType _scribeCustomization;
}

+ (id)_tfn_matchJSONIds:(id)arg1 toComponentModels:(id)arg2;
+ (id)_tfn_mediaModelsFromJSONDict:(id)arg1;
+ (id)_tfn_destinationModelsFromJSONDict:(id)arg1 mediaEntitiesDict:(id)arg2 appStoreData:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldHideBorder; // @synthesize shouldHideBorder=_shouldHideBorder;
@property(readonly, copy, nonatomic) CDUnknownBlockType scribeCustomization; // @synthesize scribeCustomization=_scribeCustomization;
@property(readonly, nonatomic) TFNTwitterUnifiedCardAppStoreData *appStoreData; // @synthesize appStoreData=_appStoreData;
@property(readonly, copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (id)_t1_unifiedCardConvertingComponentsUsing:(CDUnknownBlockType)arg1;
- (id)_t1_unifiedCardConvertingComponentsOfType:(unsigned long long)arg1 using:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool hasCarouselComponent;
@property(readonly, nonatomic) _Bool hasFullBleedComponent;
@property(readonly, nonatomic) NSArray *allUsers;
- (id)convertingButtonWithCTAButtonVariation:(unsigned long long)arg1;
- (id)convertingButtonsAndDetailsToDominantColorConfig:(id)arg1 forComponentType:(unsigned long long)arg2;
- (id)convertingButtonsToStrength:(unsigned long long)arg1;
- (id)modifyingMediaDestinationTo:(long long)arg1;
- (id)addingWebsiteCTA;
- (id)convertingUCAppStoreDetailsToUseAppStoreAsSubtitle:(_Bool)arg1;
- (id)convertingUCAppStoreDetailsToAppMetadataConfig:(id)arg1;
- (id)convertingCarouselsToSingleMedia;
- (id)_tfn_componentModelsFromJSONDict:(id)arg1 destinationsDict:(id)arg2 mediaEntitiesDict:(id)arg3 appStoreData:(id)arg4 promotedContent:(id)arg5 usersDict:(id)arg6;
- (id)withPromotedContent:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 promotedContent:(id)arg2;
- (id)initWithComponents:(id)arg1 promotedContent:(id)arg2 appStoreData:(id)arg3 scribeCustomization:(CDUnknownBlockType)arg4 shouldHideBorder:(_Bool)arg5;
- (id)videoSourceComponent;
- (_Bool)hasDockedMedia;
- (_Bool)containsVideo;
- (_Bool)_t1_isValidImageCardWithAppStoreDetailsAndInstallButton;
- (_Bool)_t1_isValidImageOrVideoCardWithAppStoreDetailsAndInstallButton;
- (_Bool)meetsExperiment10772CriteriaForAppCard;
- (_Bool)meetsExperiment10772CriteriaForWebsiteCard;
- (_Bool)meetsExperiment10576Criteria;
- (_Bool)_t1_isValidWebsiteCardWithVideoAndDetails;
- (_Bool)_t1_isValidWebsiteCardWithImageAndDetails;
- (id)detailsComponentModel;
- (id)buttonGroupComponentModel;
- (id)mediaComponentModel;
- (id)appStoreDetailComponentModel;
- (_Bool)meetsExperiment10890Criteria;
- (_Bool)meetsExperiment10193And10536Criteria;
- (_Bool)meetsExperiment10704CriteriaForImageWebsiteCards;
- (_Bool)meetsExperiment10704CriteriaForImageAppCards;
- (_Bool)temp_blueButtonValidator;

@end

