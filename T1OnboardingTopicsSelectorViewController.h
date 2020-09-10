//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1OnboardingItemsDataViewController.h>

#import <T1Twitter/T1OnboardingSearchViewDelegate-Protocol.h>
#import <T1Twitter/T1OnboardingTopicCategoryBranchViewDelegate-Protocol.h>
#import <T1Twitter/T1OnboardingTopicCategoryRowViewDelegate-Protocol.h>
#import <T1Twitter/T1OnboardingTopicViewDelegate-Protocol.h>
#import <T1Twitter/T1OnboardingTopicsSelectorViewControllerDelegate-Protocol.h>
#import <T1Twitter/TFNModalSheetViewControllerDelegate-Protocol.h>
#import <T1Twitter/TFNModalSheetViewControllerLayoutDelegate-Protocol.h>

@class NSArray, NSHashTable, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, T1FlexibleLayoutView, T1OnboardingHeaderViewModel, T1OnboardingSearchView, TFNBadgeView, TFNButton, UIActivityIndicatorView, UIView;
@protocol T1OnboardingTopicsSelectorViewControllerDelegate;

@interface T1OnboardingTopicsSelectorViewController : T1OnboardingItemsDataViewController <T1OnboardingTopicCategoryRowViewDelegate, T1OnboardingTopicCategoryBranchViewDelegate, T1OnboardingTopicsSelectorViewControllerDelegate, T1OnboardingTopicViewDelegate, T1OnboardingSearchViewDelegate, TFNModalSheetViewControllerDelegate, TFNModalSheetViewControllerLayoutDelegate>
{
    id <T1OnboardingTopicsSelectorViewControllerDelegate> _delegate;
    _Bool _hasBecomeVisible;
    _Bool _hasBecomeFullyVisible;
    _Bool _hasChangedCategory;
    _Bool _wasSearchModeActive;
    NSArray *_defaultCategories;
    NSHashTable *_topicViews;
    NSMapTable *_categoryForRowViewTable;
    NSMutableArray *_categoryRowViews;
    NSMutableArray *_selectedTopics;
    NSMutableArray *_cachedSearchResults;
    NSMutableDictionary *_savedSortToTopStateByTopicIdentifier;
    NSMutableDictionary *_topicSelectionLocation;
    NSMutableDictionary *_fetchedResultsByKeyPath;
    NSMutableSet *_expandedTreeCategoryKeypaths;
    NSString *_cartDoneLabel;
    NSString *_deselectLabel;
    NSString *_searchHint;
    NSString *_selectLabel;
    NSString *_searchDoneLabel;
    T1FlexibleLayoutView *_floatingHeaderContentContainer;
    UIView *_floatingHeaderView;
    T1OnboardingHeaderViewModel *_cartHeaderViewModel;
    T1OnboardingHeaderViewModel *_headerViewModel;
    T1OnboardingSearchView *_searchView;
    long long _style;
    TFNBadgeView *_cartBadgeView;
    TFNButton *_cartButton;
    UIActivityIndicatorView *_loadingView;
    UIView *_headerDividerView;
}

- (void).cxx_destruct;
- (void)private_updateTopicsDisplayForced:(_Bool)arg1;
- (void)private_updateTopicViewSelection;
- (id)private_prepareLoadingViewForDisplay:(id)arg1;
- (id)private_indexAsNumberIfFound:(long long)arg1;
- (CDUnknownBlockType)private_fetchCompletionBlockWithCachedSearchResults:(id)arg1 keyPath:(id)arg2 validation:(CDUnknownBlockType)arg3;
- (void)private_fetchTreeChildItemsForCategory:(id)arg1 keyPath:(id)arg2;
- (void)private_fetchPillTopics;
- (void)private_fetchSearchOrCartTopics;
- (void)private_addChildRowViewsForCategory:(id)arg1;
- (id)private_generateRowViewForCategory:(id)arg1 level:(long long)arg2;
- (id)private_keyPath:(id)arg1 byAddingNode:(id)arg2;
- (id)private_fullKeyPathForUserInfo:(id)arg1;
- (id)private_keyPathForUserInfo:(id)arg1;
- (id)private_nodeForUserInfo:(id)arg1;
- (id)private_userInfoForNode:(id)arg1 keyPath:(id)arg2;
- (CDUnknownBlockType)private_updateDataItemIdentifierBlock;
- (void)private_updateSections:(id)arg1 animated:(_Bool)arg2;
- (id)private_actionButtonDataItemWithTitle:(id)arg1 strength:(unsigned long long)arg2 target:(id)arg3 action:(SEL)arg4 initialization:(CDUnknownBlockType)arg5;
- (CDUnknownBlockType)private_topicDataItemProviderWithLevel:(long long)arg1 firstTopicBorderless:(_Bool)arg2 firstTopicTopInset:(double)arg3 topInset:(double)arg4 bottomInset:(double)arg5;
- (id)private_fetchedDataItemsForKeyPath:(id)arg1 noResultsMessage:(id)arg2 categoryDataItemProvider:(CDUnknownBlockType)arg3 topicDataItemProvider:(CDUnknownBlockType)arg4 loadingTopInset:(double)arg5 loadingViewProvider:(CDUnknownBlockType)arg6;
- (id)private_treeNodeDataItemsForKeyPath:(id)arg1 level:(long long)arg2;
- (id)private_treeCategoryDataItemForCategory:(id)arg1 keyPath:(id)arg2 level:(long long)arg3 expanded:(_Bool)arg4;
- (id)private_treeDataItemsForCategory:(id)arg1 keyPath:(id)arg2 level:(long long)arg3;
- (id)private_treeDataItems;
- (id)private_treeHeaderDividerItem;
- (id)private_searchOrCartTopicDataItems;
- (id)private_pillTopicDataItems;
- (id)private_pillCategoryDataItems;
- (void)private_showCartList:(id)arg1;
- (void)private_updateCartButton;
- (_Bool)private_isCartList;
- (_Bool)private_isSearchModeActive;
- (id)private_selectedTopicsByLocation;
- (void)submit;
- (void)abandon;
- (void)searchViewDidStartEditing:(id)arg1;
- (void)searchViewDidEndEditing:(id)arg1;
- (void)searchView:(id)arg1 didChangeText:(id)arg2;
- (void)topicsSelectorViewController:(id)arg1 didDeselectTopic:(id)arg2 withRowIndex:(id)arg3 location:(long long)arg4 selectedTopicsByLocation:(id)arg5;
- (void)topicsSelectorViewController:(id)arg1 didSelectTopic:(id)arg2 withRowIndex:(id)arg3 location:(long long)arg4 selectedTopicsByLocation:(id)arg5;
- (id)topicsSelectorViewController:(id)arg1 subtitleForTopic:(id)arg2;
- (id)topicsSelectorViewController:(id)arg1 titleForTopic:(id)arg2;
- (id)topicsSelectorViewController:(id)arg1 categoryForFetchResult:(id)arg2;
- (id)topicsSelectorViewController:(id)arg1 topicForFetchResult:(id)arg2;
- (void)topicsSelectorViewController:(id)arg1 fetchResultsForSearchText:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)topicsSelectorViewController:(id)arg1 fetchResultsForCategory:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)topicsSelectorViewController:(id)arg1 titleForCategory:(id)arg2;
- (id)topicsSelectorViewController:(id)arg1 childCategoriesForCategory:(id)arg2;
- (void)topicsSelectorViewControllerDidTapSkip:(id)arg1;
- (void)topicsSelectorViewController:(id)arg1 didTapNextWithSelectedTopicsByLocation:(id)arg2;
- (void)topicsSelectorViewControllerDidBecomeVisible:(id)arg1;
- (id)private_indexOfDisplayedTopicView:(id)arg1;
- (void)topicViewDidDeselectTopic:(id)arg1;
- (void)topicViewDidSelectTopic:(id)arg1;
- (void)categoryRowViewDidScroll:(id)arg1;
- (void)categoryRowView:(id)arg1 didSelectCategoryWithIndex:(long long)arg2 userInfo:(id)arg3;
- (id)private_indexOfDisplayedBranchView:(id)arg1;
- (id)private_indexableItemsForTopicsAndTreeCategories;
- (void)topicCategoryViewDidUnexpand:(id)arg1;
- (void)topicCategoryViewDidExpand:(id)arg1;
- (double)preferredHeightForModalSheetViewController:(id)arg1 modalContentViewVisibleEdgeInsets:(struct UIEdgeInsets)arg2;
- (void)modalSheetViewController:(id)arg1 didPanToCurrentHeight:(double)arg2 preferredHeight:(double)arg3 maximumHeight:(double)arg4 mode:(long long)arg5;
- (double)contentBreakLength;
- (void)update:(_Bool)arg1;
- (long long)tfn_preferredToolbarVisibility;
- (_Bool)tfn_logoTitleViewShown;
- (_Bool)tfn_prefersNavigationBarShadowHidden;
- (_Bool)tfn_prefersNavigationBarHidden;
- (void)viewDidFullyAppear:(_Bool)arg1;
- (void)dataViewDidUpdate:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewControllerWillDismissAnimated:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithHeaderViewModel:(id)arg1 cartHeaderViewModel:(id)arg2 topBarTitle:(id)arg3 nextLabel:(id)arg4 skipLabel:(id)arg5 selectLabel:(id)arg6 deselectLabel:(id)arg7 cartDoneLabel:(id)arg8 searchDoneLabel:(id)arg9 searchHint:(id)arg10 defaultCategories:(id)arg11 selectedTopics:(id)arg12 style:(long long)arg13 delegate:(id)arg14;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

