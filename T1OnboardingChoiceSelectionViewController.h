//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1OnboardingItemsDataViewController.h>

#import <T1Twitter/TFNAttributedTextViewDelegate-Protocol.h>

@class NSArray, NSMutableSet, NSString, T1FlexibleLayoutView, TFSTwitterOnboardingNavigationLinkOptions;
@protocol T1OnboardingChoiceSelectionViewControllerDelegate;

@interface T1OnboardingChoiceSelectionViewController : T1OnboardingItemsDataViewController <TFNAttributedTextViewDelegate>
{
    id <T1OnboardingChoiceSelectionViewControllerDelegate> _delegate;
    TFSTwitterOnboardingNavigationLinkOptions *_nextLinkOptions;
    T1FlexibleLayoutView *_detailTextContainerView;
    long long _selectionType;
    NSArray *_choices;
    NSMutableSet *_selectedChoices;
}

- (void).cxx_destruct;
- (id)private_expandedRichText:(id)arg1;
- (void)private_handleSelectionOfChoice:(id)arg1 forBooleanItem:(id)arg2;
- (id)private_dataViewItemsForChoices:(id)arg1;
- (void)private_updateNextButton;
- (void)attributedTextView:(id)arg1 didTapRange:(id)arg2 rect:(struct CGRect)arg3;
- (void)abandon;
- (void)submit;
- (void)update:(_Bool)arg1;
- (id)calculatedLayoutMetrics;
- (void)viewDidLayoutSubviews;
- (id)initWithHeaderViewModel:(id)arg1 choices:(id)arg2 selectionType:(long long)arg3 nextLinkLabel:(id)arg4 nextLinkOptions:(id)arg5 skipLinkLabel:(id)arg6 detailText:(id)arg7 activeRanges:(id)arg8 delegate:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

