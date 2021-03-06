//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol T1ListCopyStringsProvider, TFNTwitterFeatureSwitches;

@interface T1SphereFeatures : NSObject
{
    id <T1ListCopyStringsProvider> _stringsProvider;
    id <TFNTwitterFeatureSwitches> _featureSwitches;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <TFNTwitterFeatureSwitches> featureSwitches; // @synthesize featureSwitches=_featureSwitches;
@property(readonly, nonatomic) id <T1ListCopyStringsProvider> stringsProvider; // @synthesize stringsProvider=_stringsProvider;
@property(readonly, nonatomic, getter=isDetailPageMutingEnabledUnsafePeek) _Bool detailPageMutingEnabledUnsafePeek;
@property(readonly, nonatomic, getter=isDetailPageMutingEnabled) _Bool detailPageMutingEnabled;
@property(readonly, nonatomic) double spheresUserRecommendationRemovalInterval;
@property(readonly, nonatomic, getter=isAddRemoveFromListsTimelineEnabled) _Bool addRemoveFromListsTimelineEnabled;
@property(readonly, nonatomic, getter=isPinnedListCarouselEnabled) _Bool pinnedListCarouselEnabled;
@property(readonly, nonatomic, getter=isBackendStorageMigrationEnabled) _Bool backendStorageMigrationEnabled;
@property(readonly, nonatomic) double backendStorageWriteDelaySecs;
@property(readonly, nonatomic) double backendStorageColdstartTTLSecs;
@property(readonly, nonatomic, getter=isBackendStorageEnabled) _Bool backendStorageEnabled;
@property(readonly, nonatomic, getter=isSpheresURTListManagementPageEnabled) _Bool spheresURTListManagementPageEnabled;
@property(readonly, nonatomic, getter=isSpheresRankingModeControlEnabled) _Bool spheresRankingModeControlEnabled;
@property(readonly, nonatomic, getter=isSphereDetailsPageReportListEnabled) _Bool sphereDetailsPageReportListEnabled;
@property(readonly, nonatomic, getter=isSphereDetailsPageSharingEnabled) _Bool sphereDetailsPageSharingEnabled;
@property(readonly, nonatomic, getter=isSphereSearchDescriptionEnabled) _Bool sphereSearchDescriptionEnabled;
@property(readonly, nonatomic, getter=isSphereSearchTypeaheadEnabled) _Bool sphereSearchTypeaheadEnabled;
- (id)initWithFeatureSwitches:(id)arg1;
- (id)init;

@end

