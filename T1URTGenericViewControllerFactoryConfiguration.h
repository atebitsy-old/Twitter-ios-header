//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TFSTwitterScribeContext, TNLParameterCollection;

@interface T1URTGenericViewControllerFactoryConfiguration : NSObject
{
    // Error parsing type: , name: path
    // Error parsing type: , name: parameters
    // Error parsing type: , name: endpointConfig
    // Error parsing type: , name: uxConfig
    // Error parsing type: , name: cursorErrorTranslator
    // Error parsing type: , name: cacheID
    // Error parsing type: , name: scribeContext
    // Error parsing type: , name: renderPerformanceEventName
    // Error parsing type: , name: scrollPerformanceMetricScreenIdentifier
    // Error parsing type: , name: contentSuppressionSupport
    // Error parsing type: , name: actionExecutor
    // Error parsing type: , name: requestInitialTimeline
}

+ (id)topicLandingPageConfigurationWithTopicID:(id)arg1 asPeek:(_Bool)arg2 referringEvent:(id)arg3;
+ (id)topicsManagementConfigurationWithUserID:(long long)arg1;
+ (id)followedTopicsConfigurationForUsername:(id)arg1;
+ (id)followedTopicsConfigurationForUserID:(long long)arg1 username:(id)arg2;
+ (id)placePageConfigurationForPlaceID:(id)arg1 placeName:(id)arg2;
+ (id)draftTweetPreviewsTimelineConfigurationForParameters:(id)arg1 account:(id)arg2;
+ (id)listConfigurationForListID:(long long)arg1 title:(id)arg2 isPinned:(_Bool)arg3 account:(id)arg4;
+ (id)quoteTweetConfigurationForQuotedStatusID:(long long)arg1 geoDataProvider:(id)arg2;
+ (id)searchConfigurationForParameters:(id)arg1 resultFilter:(long long)arg2 tweetSearchMode:(long long)arg3 title:(id)arg4 emptyContentMessage:(id)arg5 scribeContext:(id)arg6 geoDataProvider:(id)arg7;
- (void).cxx_destruct;
- (id)init;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic, readonly) long long hash;
@property(nonatomic, readonly) NSString *renderPerformanceEventName;
@property(nonatomic, readonly) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext;
@property(nonatomic, readonly) NSString *cacheID;
@property(nonatomic, readonly) TNLParameterCollection *parameters; // @synthesize parameters;
@property(nonatomic, readonly) NSString *path;

@end

