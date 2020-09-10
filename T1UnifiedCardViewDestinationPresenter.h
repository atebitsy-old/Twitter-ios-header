//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface T1UnifiedCardViewDestinationPresenter : NSObject
{
}

+ (struct CGRect)imageTransitionViewController:(id)arg1 previewImageHostViewFrameInWindow:(id)arg2 forObject:(id)arg3;
+ (void)setPreviewImageHidden:(_Bool)arg1 forImageTransitionViewController:(id)arg2 object:(id)arg3;
+ (struct CGRect)imageTransitionViewController:(id)arg1 previewImageFrameInWindow:(id)arg2 forObject:(id)arg3;
+ (void)_t1_scribeActionForDestination:(id)arg1 scribeContext:(id)arg2 account:(id)arg3 result:(id)arg4;
+ (id)_t1_itemUniquelyIdentifyingPlayerForPresentingViewController:(id)arg1 presentingCell:(id)arg2;
+ (void)_t1_openDeeplinkOrPresentDockedVideoAppStoreViewControllerForDestination:(id)arg1 componentViewEvent:(id)arg2 presentingViewController:(id)arg3 account:(id)arg4 sourceStatus:(id)arg5 promotedContent:(id)arg6 completion:(CDUnknownBlockType)arg7;
+ (id)_t1_websiteVideoViewControllerForMediaDestination:(id)arg1 componentViewEvent:(id)arg2 presentingViewController:(id)arg3 presentedContentViewController:(id)arg4 account:(id)arg5 promotedContent:(id)arg6 sourceStatus:(id)arg7;
+ (id)imageHeaderModelForMediaDestination:(id)arg1 componentViewEvent:(id)arg2 promotedContent:(id)arg3 account:(id)arg4;
+ (id)videoHeaderModelForMediaDestination:(id)arg1 componentViewEvent:(id)arg2 promotedContent:(id)arg3 account:(id)arg4;
+ (id)_t1_openBrowserWithMediaDestination:(id)arg1 componentViewEvent:(id)arg2 presentingViewController:(id)arg3 scribeContext:(id)arg4 sourceStatus:(id)arg5 promotedContent:(id)arg6 account:(id)arg7;
+ (id)_t1_openBrowserDestination:(id)arg1 presentingViewController:(id)arg2 scribeContext:(id)arg3 sourceStatus:(id)arg4 account:(id)arg5;
+ (id)_t1_openFullScreenMediaDestination:(id)arg1 componentViewEvent:(id)arg2 presentingViewController:(id)arg3 scribeContext:(id)arg4 sourceStatus:(id)arg5 promotedContent:(id)arg6 account:(id)arg7;
+ (void)_t1_handleSideEffectForAppStoreDestination:(id)arg1 componentViewEvent:(id)arg2 presentingViewController:(id)arg3 scribeContext:(id)arg4 sourceStatus:(id)arg5 promotedContent:(id)arg6 account:(id)arg7 completion:(CDUnknownBlockType)arg8;
+ (void)_t1_handleSideEffectForTweetComposerDestination:(id)arg1 componentViewEvent:(id)arg2 presentingViewController:(id)arg3 scribeContext:(id)arg4 sourceStatus:(id)arg5 promotedContent:(id)arg6 account:(id)arg7 completion:(CDUnknownBlockType)arg8;
+ (void)handleSideEffectForDestination:(id)arg1 componentViewEvent:(id)arg2 presentingViewController:(id)arg3 scribeContext:(id)arg4 sourceStatus:(id)arg5 promotedContent:(id)arg6 account:(id)arg7 completion:(CDUnknownBlockType)arg8;
+ (id)openDestination:(id)arg1 componentViewEvent:(id)arg2 presentingViewController:(id)arg3 scribeContext:(id)arg4 sourceStatus:(id)arg5 promotedContent:(id)arg6 account:(id)arg7;
+ (void)handleDestination:(id)arg1 componentViewEvent:(id)arg2 presentingViewController:(id)arg3 scribeContext:(id)arg4 sourceStatus:(id)arg5 account:(id)arg6 promotedContent:(id)arg7 completion:(CDUnknownBlockType)arg8;

@end
