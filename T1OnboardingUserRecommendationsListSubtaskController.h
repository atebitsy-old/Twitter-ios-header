//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1OnboardingSubtaskController.h>

#import <T1Twitter/T1OnboardingUserRecommendationsListViewControllerDelegate-Protocol.h>

@class NSString, T1OnboardingUserRecommendationsListViewController, TFSTwitterOnboardingUserRecommendationsListSubtask, TFSTwitterOnboardingUserRecommendationsListSubtaskState;
@protocol T1OnboardingSubtaskControllerDelegate;

@interface T1OnboardingUserRecommendationsListSubtaskController : T1OnboardingSubtaskController <T1OnboardingUserRecommendationsListViewControllerDelegate>
{
    TFSTwitterOnboardingUserRecommendationsListSubtask *_subtask;
    TFSTwitterOnboardingUserRecommendationsListSubtaskState *_state;
    NSString *_flowToken;
    id <T1OnboardingSubtaskControllerDelegate> _delegate;
    T1OnboardingUserRecommendationsListViewController *_viewController;
    _Bool _isCurrentlyFetchingUserRecommendations;
}

+ (id)supportedSubtaskClasses;
- (void).cxx_destruct;
@property(nonatomic) _Bool isCurrentlyFetchingUserRecommendations; // @synthesize isCurrentlyFetchingUserRecommendations=_isCurrentlyFetchingUserRecommendations;
- (id)nextLabelForUserRecommendationsListViewController:(id)arg1 enabled:(_Bool)arg2;
- (void)userRecommendationsListViewControllerDidTapSkip:(id)arg1;
- (void)userRecommendationsListViewController:(id)arg1 didTapNextWithUserIDs:(id)arg2;
- (void)userRecommendationListViewControllerDidChangeUserSelection:(id)arg1;
- (void)fetchRecommendationsForUserRecommendationListViewController:(id)arg1;
- (id)private_locationStringForFetchUserRecommendationsLocation;
- (void)private_fetchUserRecommendationsWithFollows:(id)arg1 responseBlock:(CDUnknownBlockType)arg2;
- (id)subtaskData;
- (void)startWithNavigationContext:(id)arg1 navigationLink:(id)arg2;
- (id)initWithSubtask:(id)arg1 flowToken:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

