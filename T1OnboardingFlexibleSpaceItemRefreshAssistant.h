//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TFNItemsDataViewController;

@interface T1OnboardingFlexibleSpaceItemRefreshAssistant : NSObject
{
    TFNItemsDataViewController *_viewController;
    _Bool _isSizeTransitioning;
    CDUnknownBlockType _action;
}

- (void).cxx_destruct;
- (void)handleViewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)private_keyboardWillChangeFrame:(id)arg1;
- (id)initWithItemsDataViewController:(id)arg1 refreshAction:(CDUnknownBlockType)arg2;

@end

