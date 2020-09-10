//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1OnboardingSubtaskController.h>

#import <T1Twitter/T1EnterEmailViewControllerDelegate-Protocol.h>

@class NSString, TFSTwitterOnboardingEnterEmailSubtask, TFSTwitterOnboardingEnterEmailSubtaskState;
@protocol T1OnboardingSubtaskControllerDelegate;

@interface T1OnboardingEnterEmailSubtaskController : T1OnboardingSubtaskController <T1EnterEmailViewControllerDelegate>
{
    TFSTwitterOnboardingEnterEmailSubtask *_subtask;
    TFSTwitterOnboardingEnterEmailSubtaskState *_state;
    id <T1OnboardingSubtaskControllerDelegate> _delegate;
}

+ (id)supportedSubtaskClasses;
- (void).cxx_destruct;
- (void)enterEmailViewController:(id)arg1 didTapNextWithEmail:(id)arg2 discoverabilitySettingsValue:(_Bool)arg3;
- (void)enterEmailViewControllerDidTapSkip:(id)arg1;
- (id)subtaskData;
- (void)startWithNavigationContext:(id)arg1 navigationLink:(id)arg2;
- (id)initWithSubtask:(id)arg1 flowToken:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

