//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TAVUIAutoplayFilterPolicy-Protocol.h>
#import <T1Twitter/TFNViewControllerEventObserver-Protocol.h>

@class NSString, TFNViewController;

@interface T1AutoplayViewControllerEventFilterPolicy : NSObject <TAVUIAutoplayFilterPolicy, TFNViewControllerEventObserver>
{
    _Bool _isPerformingFullscreenMediaTransition;
    TFNViewController *_observedViewController;
    CDUnknownBlockType _autoplayConditionsDidChangeBlock;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPerformingFullscreenMediaTransition; // @synthesize isPerformingFullscreenMediaTransition=_isPerformingFullscreenMediaTransition;
@property(copy, nonatomic) CDUnknownBlockType autoplayConditionsDidChangeBlock; // @synthesize autoplayConditionsDidChangeBlock=_autoplayConditionsDidChangeBlock;
@property(nonatomic) __weak TFNViewController *observedViewController; // @synthesize observedViewController=_observedViewController;
- (void)presentedActivityViewControllerDidDismissNotification:(id)arg1;
- (void)presentedDidDismissViewControllerNotification:(id)arg1;
- (void)viewControllerViewDidFullyAppear:(id)arg1;
- (void)viewControllerViewWillFullyDisappear:(id)arg1;
- (_Bool)autoplayableIsEligibleForAutoplayWithAutoplayable:(id)arg1 environment:(id)arg2;
- (void)didJoinAutoplayPipelineWithAutoplayConditionsDidChangeBlock:(CDUnknownBlockType)arg1;
- (void)transitionToFullScreenMediaPresentationDidEnd:(id)arg1;
- (void)transitionFromFullscreenMediaPresentationDidBegin:(id)arg1;
- (void)transitionFromFullScreenMediaPresentationDidEnd:(id)arg1;
- (void)transitionToFullscreenMediaPresentationDidBegin:(id)arg1;
- (void)dealloc;
- (id)initWithObservedViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
