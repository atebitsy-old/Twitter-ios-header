//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1UsersViewController.h>

@class NSArray, TFNTwitterUserDataSource;

@interface T1SimilarToViewController : T1UsersViewController
{
    TFNTwitterUserDataSource *_userDataSource;
    NSArray *_preloadedRecommendations;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *preloadedRecommendations; // @synthesize preloadedRecommendations=_preloadedRecommendations;
@property(retain, nonatomic) TFNTwitterUserDataSource *userDataSource; // @synthesize userDataSource=_userDataSource;
- (id)scribeImpressionParameters;
- (id)scribePage;
- (id)scribe;
- (id)_topRecommendationIDs;
- (id)_topRecommendations;
- (_Bool)shouldShowBioForUserOrRecommendation:(id)arg1 atIndexPath:(id)arg2;
- (void)requestUsers;
- (id)navigationItem;
- (id)initWithAccount:(id)arg1;

@end

