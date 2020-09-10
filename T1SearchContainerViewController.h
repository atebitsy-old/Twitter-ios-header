//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <T1Twitter/T1JumpBackToHomeTimelineBehavior-Protocol.h>
#import <T1Twitter/T1SearchFiltersViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1SearchKeyCommandSupportProtocol-Protocol.h>
#import <T1Twitter/T1SearchTypeaheadViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1URTGenericViewControllerCollectionDelegate-Protocol.h>
#import <T1Twitter/T1ViewControllerPerformanceTesting-Protocol.h>
#import <T1Twitter/TFNLayoutMetricsEnvironment-Protocol.h>
#import <T1Twitter/TFNTooltipDelegate-Protocol.h>
#import <T1Twitter/TFNTwitterCompositionSource-Protocol.h>
#import <T1Twitter/UITextFieldDelegate-Protocol.h>

@class NSArray, NSString, T1SearchFeatures, T1SearchFiltersViewController, T1SearchResultsParameters, T1SearchTextView, T1SearchTypeaheadViewController, T1SearchViewContainerView, T1URTGenericViewControllerCollection, TFNTwitterAccount, TFSTwitterScribeContext, UIViewController;

@interface T1SearchContainerViewController : TFNViewController <UITextFieldDelegate, T1URTGenericViewControllerCollectionDelegate, T1SearchTypeaheadViewControllerDelegate, T1SearchFiltersViewControllerDelegate, T1ViewControllerPerformanceTesting, TFNTooltipDelegate, T1SearchKeyCommandSupportProtocol, TFNTwitterCompositionSource, TFNLayoutMetricsEnvironment, T1JumpBackToHomeTimelineBehavior>
{
    _Bool _focusSearchFieldOnNextAppear;
    _Bool _shouldShowComposeTooltip;
    _Bool _didGrowSearchTextFieldContainer;
    _Bool _tfn_prefersNavigationBarHidden;
    _Bool _searchInputEnabled;
    TFSTwitterScribeContext *_scribeContext;
    unsigned long long _selectedTab;
    TFNTwitterAccount *_account;
    T1SearchResultsParameters *_searchParameters;
    T1SearchTextView *_searchTextView;
    NSString *_scribeParameterContext;
    T1SearchFeatures *_searchFeatures;
    T1SearchTypeaheadViewController *_typeaheadVC;
    UIViewController *_visibleViewController;
    NSArray *_typeheadRightBarButtonItems;
    TFNViewController *_searchResultsViewController;
    T1SearchFiltersViewController *_filtersController;
    NSArray *_tabScribeElements;
    T1URTGenericViewControllerCollection *_searchResultsTabs;
    T1SearchViewContainerView *_searchTextFieldContainerView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool searchInputEnabled; // @synthesize searchInputEnabled=_searchInputEnabled;
@property(nonatomic) _Bool tfn_prefersNavigationBarHidden; // @synthesize tfn_prefersNavigationBarHidden=_tfn_prefersNavigationBarHidden;
@property(readonly, nonatomic) T1SearchViewContainerView *searchTextFieldContainerView; // @synthesize searchTextFieldContainerView=_searchTextFieldContainerView;
@property(retain, nonatomic) T1URTGenericViewControllerCollection *searchResultsTabs; // @synthesize searchResultsTabs=_searchResultsTabs;
@property(copy, nonatomic) NSArray *tabScribeElements; // @synthesize tabScribeElements=_tabScribeElements;
@property(retain, nonatomic) T1SearchFiltersViewController *filtersController; // @synthesize filtersController=_filtersController;
@property(retain, nonatomic) TFNViewController *searchResultsViewController; // @synthesize searchResultsViewController=_searchResultsViewController;
@property(retain, nonatomic) NSArray *typeheadRightBarButtonItems; // @synthesize typeheadRightBarButtonItems=_typeheadRightBarButtonItems;
@property(retain, nonatomic) UIViewController *visibleViewController; // @synthesize visibleViewController=_visibleViewController;
@property(retain, nonatomic) T1SearchTypeaheadViewController *typeaheadVC; // @synthesize typeaheadVC=_typeaheadVC;
@property(nonatomic) _Bool didGrowSearchTextFieldContainer; // @synthesize didGrowSearchTextFieldContainer=_didGrowSearchTextFieldContainer;
@property(readonly, nonatomic) T1SearchFeatures *searchFeatures; // @synthesize searchFeatures=_searchFeatures;
@property(copy, nonatomic) NSString *scribeParameterContext; // @synthesize scribeParameterContext=_scribeParameterContext;
@property(nonatomic) _Bool shouldShowComposeTooltip; // @synthesize shouldShowComposeTooltip=_shouldShowComposeTooltip;
@property(nonatomic) _Bool focusSearchFieldOnNextAppear; // @synthesize focusSearchFieldOnNextAppear=_focusSearchFieldOnNextAppear;
@property(readonly, nonatomic) T1SearchTextView *searchTextView; // @synthesize searchTextView=_searchTextView;
@property(readonly, nonatomic) T1SearchResultsParameters *searchParameters; // @synthesize searchParameters=_searchParameters;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void)handleSearchKeyCommand;
- (_Bool)canHandleSearchKeyCommand;
- (void)_t1_donateShortcuts;
- (void)tooltipDidTap:(id)arg1;
- (id)_t1_scribeParameterSearchDetails;
- (id)scribeSection;
- (id)scribePage;
- (id)scribeImpressionParameters;
@property(copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
- (id)scribe;
- (_Bool)t1_showsActionButton;
- (_Bool)tfn_isContentScrolledToBottom;
- (_Bool)tfn_prefersNavigationBarExpandedWhenScrolledToBottom;
- (_Bool)tfn_supportsNavigationBarCollapsing;
- (_Bool)tfn_prefersNavigationBarShadowHidden;
- (long long)preferredStatusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (id)_t1_queryHashTags;
- (id)_t1_composerTooltipText;
- (id)composition;
- (void)genericViewControllerCollectionWithDidSelectContentViewController:(id)arg1 at:(long long)arg2 indexChanged:(_Bool)arg3;
- (void)_t1_showLocationErrorPrompt;
- (void)_t1_pushNewSearchWithParameters:(id)arg1 selectedTab:(unsigned long long)arg2;
- (void)searchTypeaheadViewController:(id)arg1 didTapAheadWithTerm:(id)arg2;
- (void)_t1_presentTypeaheadSearchForTerm:(id)arg1 source:(id)arg2 selectedTab:(unsigned long long)arg3;
- (void)searchTypeaheadViewController:(id)arg1 didSelectEvent:(id)arg2;
- (void)searchTypeaheadViewController:(id)arg1 didSelectTopic:(id)arg2;
- (void)searchTypeaheadViewController:(id)arg1 didSelectSavedSearch:(id)arg2;
- (void)searchTypeaheadViewController:(id)arg1 didSelectRecentSearch:(id)arg2;
- (void)searchTypeaheadViewController:(id)arg1 didSelectUser:(id)arg2;
- (void)searchTypeaheadViewControllerViewWillBeginDragging:(id)arg1;
- (void)_t1_openProfileViewControllerWithTypeaheadViewController:(id)arg1 userReference:(id)arg2;
- (void)textDidChange:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
@property(readonly, nonatomic, getter=isShowingTypeahead) _Bool showingTypeahead;
- (void)_t1_addFadeTransitionAnimationToView:(id)arg1;
- (void)_t1_setVisibleViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_t1_swapToSearchViewControllerAnimated:(_Bool)arg1;
- (void)_t1_swapToTypeaheadViewControllerAnimated:(_Bool)arg1;
- (void)_t1_swapToViewController:(id)arg1 searchContainerViewHidden:(_Bool)arg2 animated:(_Bool)arg3;
- (void)searchFiltersControllerDidChangeFilters:(id)arg1;
- (void)_t1_applyFilterChange;
- (void)_t1_cancelFilterChange;
- (void)_t1_presentFilterMenu:(id)arg1;
- (void)_t1_typeaheadCancelled;
- (void)_t1_performSearchWithFollowingFilterEnabled:(_Bool)arg1 locationFilterEnabled:(_Bool)arg2;
- (id)_t1_rightBarButtonItems;
- (void)_t1_updateSearchNavigationBar:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)_t1_hasScopedVC;
@property(nonatomic) unsigned long long selectedTab; // @synthesize selectedTab=_selectedTab;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)viewDidFullyAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_t1_triggerComposerTooltip;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (_Bool)shouldNavigateInSearchControllerWithParameters:(id)arg1;
- (void)dealloc;
- (id)initWithParameters:(id)arg1 account:(id)arg2 searchInputEnabled:(_Bool)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
