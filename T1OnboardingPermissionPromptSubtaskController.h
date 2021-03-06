//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1OnboardingSubtaskController.h>

@class T1OnboardingPromptDataSource, TFSTwitterOnboardingPermissionPromptSubtask;
@protocol T1OnboardingSubtaskControllerDelegate;

@interface T1OnboardingPermissionPromptSubtaskController : T1OnboardingSubtaskController
{
    T1OnboardingPromptDataSource *_promptDataSource;
    TFSTwitterOnboardingPermissionPromptSubtask *_subtask;
    long long _serviceType;
    id <T1OnboardingSubtaskControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)private_promptDataSourceForSubtask:(id)arg1 primaryAction:(CDUnknownBlockType)arg2 secondaryAction:(CDUnknownBlockType)arg3;
- (void)private_showPrepromptWithOkAction:(CDUnknownBlockType)arg1 cancelAction:(CDUnknownBlockType)arg2;
- (_Bool)canRestartForErrors;
- (void)private_requestAuthorizationWithForceGrant:(_Bool)arg1 forceDecline:(_Bool)arg2;
- (void)startWithNavigationContext:(id)arg1 navigationLink:(id)arg2;
- (id)initWithSubtask:(id)arg1 flowToken:(id)arg2 delegate:(id)arg3 serviceType:(long long)arg4;

@end

