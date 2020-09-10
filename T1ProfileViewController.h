//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1ResizableHeaderContainerViewController.h>

#import <T1Twitter/T1ComposerPresenting-Protocol.h>
#import <T1Twitter/T1EditableProfileViewController-Protocol.h>
#import <T1Twitter/T1ProfileDisplayContentProviderDelegate-Protocol.h>
#import <T1Twitter/T1ProfileHeaderViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1ResizableHeaderContentDelegate-Protocol.h>
#import <T1Twitter/T1ResizableHeaderViewControllerDelegate-Protocol.h>
#import <T1Twitter/TFNModalSheetViewControllerLayoutDelegate-Protocol.h>
#import <T1Twitter/TFNNavigationControllerTransitionProvider-Protocol.h>
#import <T1Twitter/TFNPresentationInterceptor-Protocol.h>

@class NSArray, NSMapTable, NSString, T1AppNavigationContext, T1NavigationMetadata, T1ProfileDisplayContentProvider, T1ProfileDisplayNormalSubheaderContentProvider, T1ProfileHeaderViewController, T1ProfileSpriteAnimationBehavior, TFNTwitterStatus, TFSStopwatch, TFSTimer, TFSTwitterScribeContext;
@protocol T1ProfileDataSource;

@interface T1ProfileViewController : T1ResizableHeaderContainerViewController <T1ProfileDisplayContentProviderDelegate, TFNPresentationInterceptor, T1ResizableHeaderContentDelegate, T1ResizableHeaderViewControllerDelegate, T1ProfileHeaderViewControllerDelegate, T1ComposerPresenting, TFNModalSheetViewControllerLayoutDelegate, T1EditableProfileViewController, TFNNavigationControllerTransitionProvider>
{
    _Bool _headerZooming;
    _Bool _hasPerformedAccessibilityScroll;
    _Bool _didScribeReply;
    _Bool _didScribeProfileCompleteTime;
    _Bool _needsSubheaderUpdate;
    _Bool _shouldShowDeferredFollowConfirmation;
    _Bool _shouldShowDeferredProfileFavoriteTweets;
    _Bool _shouldShowDeferredTweetsWithReplies;
    _Bool _userTimelineDataReady;
    T1AppNavigationContext *_navigationContext;
    long long _headerButtonGroup;
    TFSTwitterScribeContext *_sourceScribeContext;
    TFNTwitterStatus *_sourceStatus;
    id <T1ProfileDataSource> _dataSource;
    double _lastLayoutWidth;
    NSArray *_displayContentProviders;
    NSMapTable *_subheaderEntriesByViewController;
    NSMapTable *_subheaderViewControllersByEntry;
    T1ProfileSpriteAnimationBehavior *_spriteAnimationBehavior;
    TFSStopwatch *_stopwatch;
    TFSTimer *_subheaderUpdateTimer;
    CDUnknownBlockType _showFollowersBlock;
    CDUnknownBlockType _enableAccountLinkDisplayActionBlock;
    T1ProfileDisplayContentProvider *_currentDisplayContentProvider;
    T1ProfileDisplayNormalSubheaderContentProvider *_normalSubheaderContentProvider;
    T1NavigationMetadata *_navigationMetadata;
    T1NavigationMetadata *_sourceNavigationMetadata;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) T1NavigationMetadata *sourceNavigationMetadata; // @synthesize sourceNavigationMetadata=_sourceNavigationMetadata;
@property(readonly, nonatomic) T1NavigationMetadata *navigationMetadata; // @synthesize navigationMetadata=_navigationMetadata;
@property(nonatomic) __weak T1ProfileDisplayNormalSubheaderContentProvider *normalSubheaderContentProvider; // @synthesize normalSubheaderContentProvider=_normalSubheaderContentProvider;
@property(nonatomic) __weak T1ProfileDisplayContentProvider *currentDisplayContentProvider; // @synthesize currentDisplayContentProvider=_currentDisplayContentProvider;
@property(copy, nonatomic) CDUnknownBlockType enableAccountLinkDisplayActionBlock; // @synthesize enableAccountLinkDisplayActionBlock=_enableAccountLinkDisplayActionBlock;
@property(copy, nonatomic) CDUnknownBlockType showFollowersBlock; // @synthesize showFollowersBlock=_showFollowersBlock;
@property(retain, nonatomic) TFSTimer *subheaderUpdateTimer; // @synthesize subheaderUpdateTimer=_subheaderUpdateTimer;
@property(retain, nonatomic) TFSStopwatch *stopwatch; // @synthesize stopwatch=_stopwatch;
@property(retain, nonatomic) T1ProfileSpriteAnimationBehavior *spriteAnimationBehavior; // @synthesize spriteAnimationBehavior=_spriteAnimationBehavior;
@property(retain, nonatomic) NSMapTable *subheaderViewControllersByEntry; // @synthesize subheaderViewControllersByEntry=_subheaderViewControllersByEntry;
@property(retain, nonatomic) NSMapTable *subheaderEntriesByViewController; // @synthesize subheaderEntriesByViewController=_subheaderEntriesByViewController;
@property(retain, nonatomic) NSArray *displayContentProviders; // @synthesize displayContentProviders=_displayContentProviders;
@property(nonatomic) double lastLayoutWidth; // @synthesize lastLayoutWidth=_lastLayoutWidth;
@property(nonatomic, getter=isUserTimelineDataReady) _Bool userTimelineDataReady; // @synthesize userTimelineDataReady=_userTimelineDataReady;
@property(nonatomic) _Bool shouldShowDeferredTweetsWithReplies; // @synthesize shouldShowDeferredTweetsWithReplies=_shouldShowDeferredTweetsWithReplies;
@property(nonatomic) _Bool shouldShowDeferredProfileFavoriteTweets; // @synthesize shouldShowDeferredProfileFavoriteTweets=_shouldShowDeferredProfileFavoriteTweets;
@property(nonatomic) _Bool shouldShowDeferredFollowConfirmation; // @synthesize shouldShowDeferredFollowConfirmation=_shouldShowDeferredFollowConfirmation;
@property(nonatomic) _Bool needsSubheaderUpdate; // @synthesize needsSubheaderUpdate=_needsSubheaderUpdate;
@property(nonatomic) _Bool didScribeProfileCompleteTime; // @synthesize didScribeProfileCompleteTime=_didScribeProfileCompleteTime;
@property(nonatomic) _Bool didScribeReply; // @synthesize didScribeReply=_didScribeReply;
@property(nonatomic) _Bool hasPerformedAccessibilityScroll; // @synthesize hasPerformedAccessibilityScroll=_hasPerformedAccessibilityScroll;
@property(nonatomic) _Bool headerZooming; // @synthesize headerZooming=_headerZooming;
@property(retain, nonatomic) id <T1ProfileDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) TFNTwitterStatus *sourceStatus; // @synthesize sourceStatus=_sourceStatus;
@property(copy, nonatomic) TFSTwitterScribeContext *sourceScribeContext; // @synthesize sourceScribeContext=_sourceScribeContext;
@property(nonatomic) long long headerButtonGroup; // @synthesize headerButtonGroup=_headerButtonGroup;
@property(retain, nonatomic) T1AppNavigationContext *navigationContext; // @synthesize navigationContext=_navigationContext;
- (void)presentDrafts;
- (void)presentComposer;
- (long long)dashContentItemType;
- (_Bool)t1_showsActionButton;
- (id)_confirmFollowMenuSheet;
- (id)_confirmFollowSheet;
- (void)showWithRepliesTab;
- (void)showProfileFavoritesTab;
- (void)showFollowConfirmation;
- (void)_updateCountAtIndex:(long long)arg1;
- (void)profileHeaderViewControllerDidTapClose:(id)arg1;
- (void)profileHeaderViewControllerDidTapBack:(id)arg1;
- (id)navigationControllerTransitionForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
- (void)_setChildContentViewControllersHidden:(_Bool)arg1;
- (void)_getAccessibilityItemNumbersForDataView:(in id)arg1 first:(out unsigned long long *)arg2 last:(out unsigned long long *)arg3 total:(out unsigned long long *)arg4;
- (id)_scrollingStringForAccessibility;
- (double)_yOffsetForAccessibilityScrollDirection:(long long)arg1 forScrollView:(id)arg2;
- (void)_cancelSubheaderUpdateTimer;
- (void)_setNeedsSubheaderUpdate;
- (void)_updateSubheaders;
- (double)preferredHeightForModalSheetViewController:(id)arg1 modalContentViewVisibleEdgeInsets:(struct UIEdgeInsets)arg2;
- (void)_t1_updateModalDisplayHeightAnimated:(_Bool)arg1;
- (void)_t1_initializeModalDisplay;
- (void)_updateDisplayForCurrentState;
- (_Bool)_isCurrentDisplayStateScrollable;
- (_Bool)_updateCurrentDisplayState;
- (void)private_didFocusElement:(id)arg1;
- (id)_addChildViewController:(id)arg1 toSubheaderArray:(id)arg2;
- (void)_allDataReady;
- (void)_checkAllDataReady;
- (void)_profileDataSourceDidInvalidateWithReason:(long long)arg1;
- (void)_profileDataSourceDidInvalidate:(id)arg1;
- (void)private_accountSettingsDidUpdate:(id)arg1;
- (void)_scribeSendReply;
- (void)_scribeReply;
- (id)scribeImpressionParameters;
- (id)scribeParameters;
- (id)scribeComponent;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (void)viewSafeAreaInsetsDidChange;
- (void)layoutGuidesDidChange:(long long)arg1;
- (_Bool)accessibilityScroll:(long long)arg1;
- (void)tfn_contentScrollViewDidScroll:(id)arg1 animate:(_Bool)arg2;
- (void)showQRProfileWithCompletion:(CDUnknownBlockType)arg1;
- (void)showMomentsWithCompletion:(CDUnknownBlockType)arg1;
- (void)showFollowersWithTab:(unsigned long long)arg1;
- (void)setNeedsModalDisplayHeightUpdateAnimated:(_Bool)arg1;
- (_Bool)isProfileForUserDataSource:(id)arg1;
- (_Bool)isProfileForUserReference:(id)arg1;
- (_Bool)isProfileForUser:(id)arg1;
- (id)viewControllerForDisplayContentProvider:(id)arg1;
- (_Bool)isUserDataDisplayableForDisplayContentProvider:(id)arg1;
- (_Bool)isDisplayContentProviderCurrent:(id)arg1;
- (void)displayContentProviderDidUpdateModalContentHeight:(id)arg1;
- (void)displayContentProviderDidUpdateSubheaderValidity:(id)arg1;
- (void)displayContentProvider:(id)arg1 didSelectMainEntry:(id)arg2;
- (void)displayContentProviderDidUpdateMainValidity:(id)arg1;
- (void)resizableHeaderContainerViewController:(id)arg1 didUpdateContentHeight:(double)arg2 fromContentHeight:(double)arg3;
- (id)resizableHeaderContainerViewController:(id)arg1 titleAtIndex:(long long)arg2;
- (id)resizableHeaderContainerViewController:(id)arg1 viewControllerAtIndex:(long long)arg2;
- (long long)numberOfEntriesForResizableHeaderContainerViewController:(id)arg1;
- (void)resizableHeaderContainerViewController:(id)arg1 didSelectViewController:(id)arg2 atIndex:(long long)arg3 indexChanged:(_Bool)arg4;
- (id)viewController:(id)arg1 willPresentWithPresentationInfo:(id)arg2;
- (void)resizableHeaderViewControllerDidUpdateActionButtons:(id)arg1;
- (void)resizableHeaderViewControllerDidFinishAnimatingSubheaders:(id)arg1;
- (void)resizableHeaderViewControllerDidStartAnimatingSubheaders:(id)arg1;
- (void)resizableHeaderViewControllerDidUpdateCurrentHeaderHeight:(id)arg1;
- (id)resizableHeaderSubheaderViewControllersForResizableHeaderViewController:(id)arg1;
- (double)bottomContentPadding;
- (void)refresh;
- (_Bool)isScrollViewAnimating;
- (_Bool)canCollapseHeader;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)editProfileActionWithSelectedEditField:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)editProfileActionWithCompletion:(CDUnknownBlockType)arg1;
- (void)enableAccountLinkDisplayActionWithAccountType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (void)dealloc;
- (id)initWithHeaderViewController:(id)arg1 contentDelegate:(id)arg2 account:(id)arg3;
- (id)initWithDataSource:(id)arg1 account:(id)arg2 sourceNavigationMetadata:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) T1ProfileHeaderViewController *headerViewController; // @dynamic headerViewController;
@property(readonly) Class superclass;

@end

