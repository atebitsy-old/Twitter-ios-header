//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <T1Twitter/CNContactPickerDelegate-Protocol.h>
#import <T1Twitter/CNContactViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1DashContentItem-Protocol.h>
#import <T1Twitter/T1Docking-Protocol.h>
#import <T1Twitter/T1ListsOwnerDelegate-Protocol.h>
#import <T1Twitter/TAVVisibilityExceptionProvider-Protocol.h>

@class NSString, T1AppSplitViewController, T1NavigationMetadata, T1TabNavigationController;
@protocol T1PanelNavigationController, T1TabBarIntegration;

@interface UIViewController (T1ModalProfileViewControllerPrivate) <TAVVisibilityExceptionProvider, T1DashContentItem, CNContactViewControllerDelegate, CNContactPickerDelegate, T1ListsOwnerDelegate, T1Docking>
+ (id)_t1_sharelessWebviewControllerWithTitle:(id)arg1 URL:(id)arg2 account:(id)arg3;
+ (id)t1_controllerToPresentForConversationContext:(id)arg1 hostViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4 profileHeaderButtonGroup:(long long)arg5 account:(id)arg6 previewing:(_Bool)arg7;
+ (id)navigationMetadataViewControllerForViewController:(id)arg1;
+ (id)currentNavigationMetadataViewController;
- (id)_t1_resizableHeaderContainerViewController;
- (id)tfn_modalProfileViewController;
@property(readonly, nonatomic) T1TabNavigationController *t1_tabNavigationController;
- (id)t1_showHiddenTweetsActionItemForStatus:(id)arg1 account:(id)arg2 scribeContext:(id)arg3;
- (id)t1_unhideTweetActionItemForStatus:(id)arg1 account:(id)arg2 scribeContext:(id)arg3;
- (id)t1_hideTweetActionItemForStatus:(id)arg1 account:(id)arg2 scribeContext:(id)arg3 shouldIncludeAMRSubtitlesIfNeeded:(_Bool)arg4;
- (id)t1_contributeToBirdwatchActionItemForStatus:(id)arg1 account:(id)arg2 scribeContext:(id)arg3;
- (id)t1_translationsSettingActionItemForStatus:(id)arg1 account:(id)arg2 scribeContext:(id)arg3;
- (id)t1_reportTweetActionItemForStatus:(id)arg1 account:(id)arg2 scribeContext:(id)arg3 shouldIncludeAMRSubtitlesIfNeeded:(_Bool)arg4;
- (id)t1_deleteTweetActionItemForStatus:(id)arg1 account:(id)arg2 isInlineSource:(_Bool)arg3 scribeContext:(id)arg4;
- (id)t1_muteConversationActionItemForStatus:(id)arg1 account:(id)arg2 scribeContext:(id)arg3 shouldIncludeAMRSubtitlesIfNeeded:(_Bool)arg4;
- (id)t1_taggingRemoveMeActionItemForStatus:(id)arg1 account:(id)arg2;
- (id)t1_sendViaDirectMessageActionItemForStatus:(id)arg1 account:(id)arg2 title:(id)arg3 source:(id)arg4 scribeContext:(id)arg5;
- (id)t1_shareWithRecentDMConversationActionItemForStatus:(id)arg1 account:(id)arg2 conversation:(id)arg3 source:(id)arg4 scribeContext:(id)arg5 index:(unsigned long long)arg6;
- (id)t1_copyLinkToTweetActionItemForStatus:(id)arg1 account:(id)arg2 scribeContext:(id)arg3;
- (id)t1_bookmarksActionItemForStatus:(id)arg1 account:(id)arg2 shouldReplaceAddWithRemoveBookmark:(_Bool)arg3 scribeContext:(id)arg4;
- (id)scribeImpressionCache;
- (id)scribeAssociations;
- (id)scribeElementForIndexPath:(id)arg1;
- (id)scribeElement;
- (id)scribeComponentForIndexPath:(id)arg1;
- (id)scribeComponent;
- (id)scribeSectionForIndexPath:(id)arg1;
- (id)scribeSection;
- (id)scribePage;
- (id)scribeSourceContext;
- (id)scribeContextForIndexPath:(id)arg1;
- (id)scribeContext;
- (id)scribeImpressionParametersForIndexPath:(id)arg1;
- (id)scribeItemForIndexPath:(id)arg1;
- (id)scribeImpressionParameters;
- (id)scribeParameters;
- (id)scribe;
- (void)scribeViewImpressionWithParameters:(id)arg1;
- (id)t1_menuSheetForTimelineModule:(id)arg1 actionItems:(id)arg2 dismissActionBlock:(CDUnknownBlockType)arg3 source:(id)arg4 account:(id)arg5 doneBlock:(CDUnknownBlockType)arg6;
- (_Bool)t1_isMainViewControllerForWindowScene;
- (id)_profileViewControllerForUserReference:(id)arg1 account:(id)arg2 sourceNavigationMetadata:(id)arg3 tabNavigationBlock:(CDUnknownBlockType)arg4;
- (id)t1_openURLParserResult:(id)arg1 account:(id)arg2 scribeContext:(id)arg3;
- (long long)_t1_mediaInfoIndexForStatus:(id)arg1 URL:(id)arg2 account:(id)arg3;
- (id)_t1_openURL:(id)arg1 expandedURL:(id)arg2 account:(id)arg3 scribeContext:(id)arg4 forceAuthenticateWebViewController:(_Bool)arg5 webviewFactory:(CDUnknownBlockType)arg6;
- (id)_t1_openURL:(id)arg1 expandedURL:(id)arg2 account:(id)arg3 scribeContext:(id)arg4 forceAuthenticateWebViewController:(_Bool)arg5;
- (id)_t1_openURL:(id)arg1 account:(id)arg2 scribeContext:(id)arg3 fromSourceStatus:(id)arg4 forceAuthenticateWebViewController:(_Bool)arg5;
- (id)t1_openURL:(id)arg1 account:(id)arg2 scribeContext:(id)arg3 fromCardDataSource:(id)arg4;
- (id)t1_openURL:(id)arg1 account:(id)arg2 scribeContext:(id)arg3 fromSourceDirectMessageEntry:(id)arg4;
- (id)t1_openURL:(id)arg1 account:(id)arg2 scribeContext:(id)arg3 fromSourceUser:(id)arg4;
- (id)t1_openURL:(id)arg1 account:(id)arg2 scribeContext:(id)arg3 fromSourceStatus:(id)arg4 forceAuthenticateWebViewController:(_Bool)arg5;
- (id)t1_openURL:(id)arg1 account:(id)arg2 scribeContext:(id)arg3 fromSourceStatus:(id)arg4;
- (id)t1_openURL:(id)arg1 account:(id)arg2 scribeContext:(id)arg3 forceAuthenticateWebViewController:(_Bool)arg4;
- (id)t1_openURL:(id)arg1 account:(id)arg2 scribeContext:(id)arg3 expandedURL:(id)arg4;
- (id)t1_openURL:(id)arg1 account:(id)arg2 scribeContext:(id)arg3;
- (id)t1_openURL:(id)arg1 account:(id)arg2;
- (id)t1_keyCommandsForActionButtonItemsWithAccount:(id)arg1;
- (_Bool)t1_actionButtonShouldShowEarlyUponDismissal;
- (_Bool)t1_actionButtonShouldAnimatePresentation;
- (_Bool)t1_showsActionButton;
- (struct UIEdgeInsets)t1_actionButtonMinimumInsets;
- (id)t1_standardActionButtonItemsWithAccount:(id)arg1;
- (id)t1_standardActionButtonItemCategoriesWithAccount:(id)arg1;
- (id)t1_buttonItemForCategory:(unsigned long long)arg1;
- (id)_t1_buttonItemForCategory:(unsigned long long)arg1 account:(id)arg2;
- (id)t1_actionButtonItemsWithAccount:(id)arg1;
- (id)t1_actionButtonItemCategoriesWithAccount:(id)arg1;
@property(readonly, nonatomic) _Bool tav_isPlayerViewAlwaysVisibile;
- (long long)dashContentItemType;
- (id)_t1_fullNameComponentsForName:(id)arg1;
- (void)_t1_showContactsPermissionErrorAlert;
- (void)_t1_presentNewPersonViewControllerForPerson:(id)arg1 scribeContext:(id)arg2;
- (void)_addToExistingContact:(id)arg1 withAvatar:(id)arg2 scribeContext:(id)arg3;
- (void)_createNewContactWithUserReference:(id)arg1 avatar:(id)arg2 scribeContext:(id)arg3 account:(id)arg4;
- (void)_t1_performAuthorizedContactsAction:(CDUnknownBlockType)arg1;
- (id)_t1_editExistingContactActionItemForUserReference:(id)arg1 withAvatar:(id)arg2 scribeContext:(id)arg3;
- (id)_t1_createNewContactActionItemWithUserReference:(id)arg1 avatar:(id)arg2 scribeContext:(id)arg3 account:(id)arg4;
- (id)t1_contactsMenuActionItemsWithUserReference:(id)arg1 avatar:(id)arg2 source:(id)arg3 scribeContext:(id)arg4 account:(id)arg5;
- (id)t1_contactsActionItemsWithUserReference:(id)arg1 avatar:(id)arg2 source:(id)arg3 scribeContext:(id)arg4 account:(id)arg5;
- (id)_t1_contactsActionSheetWithActionItems:(id)arg1 source:(id)arg2;
- (id)_t1_contactsMenuSheetWithActionItems:(id)arg1 source:(id)arg2;
- (id)t1_contactsMenuSheetWithUserReference:(id)arg1 avatar:(id)arg2 source:(id)arg3 scribeContext:(id)arg4 account:(id)arg5;
- (id)t1_contactsMenuActionSheetWithUserReference:(id)arg1 avatar:(id)arg2 source:(id)arg3 scribeContext:(id)arg4 account:(id)arg5;
- (_Bool)_hasDuplicateUsernameInPeoplePicker:(id)arg1 forSocialProfiles:(id)arg2;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (_Bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (CDUnknownBlockType)_t1_openURLActionForURL:(id)arg1 account:(id)arg2 scribeParameters:(id)arg3;
- (id)_t1_togglePinnedTweetActionItemWithStatus:(id)arg1 account:(id)arg2 scribePage:(id)arg3 scribeSection:(id)arg4 scribeComponent:(id)arg5;
- (id)_t1_adsInfoActionItem:(id)arg1 account:(id)arg2;
- (id)_t1_copyLinkToTweetActionItem:(id)arg1 account:(id)arg2;
- (id)_t1_mailTweetActionItem:(id)arg1 account:(id)arg2 scribeComponent:(id)arg3;
- (id)_t1_shareTweetActionItemsForStatus:(id)arg1 account:(id)arg2;
- (id)_t1_cardEntityUrlFromStatus:(id)arg1;
- (void)_t1_cardLogAppDownloadWithStatus:(id)arg1 account:(id)arg2 scribeAction:(id)arg3 page:(id)arg4 section:(id)arg5 component:(id)arg6 parameters:(id)arg7;
- (id)t1_offPlatformShareActivitiesForStatus:(id)arg1 type:(long long)arg2 source:(id)arg3 account:(id)arg4 options:(unsigned long long)arg5 scribeContext:(id)arg6;
- (id)_t1_activityViewControllerActivitiesForEntityURL:(id)arg1 account:(id)arg2 scribeContext:(id)arg3;
- (id)t1_activityViewControllerActivitiesFromActionItems:(id)arg1;
- (id)t1_mediaActivityViewActionItemsForStatus:(id)arg1 account:(id)arg2 image:(id)arg3;
- (id)_t1_activityViewControllerForSharableItem:(id)arg1 account:(id)arg2 actionItems:(id)arg3 image:(id)arg4 entityURL:(id)arg5 type:(long long)arg6 source:(id)arg7 scribeContext:(id)arg8 doneBlock:(CDUnknownBlockType)arg9;
- (id)t1_actionItemsForActivityViewController:(id)arg1;
- (id)t1_actionItemsForStatus:(id)arg1 account:(id)arg2 source:(id)arg3 options:(unsigned long long)arg4;
- (id)t1_activityViewControllerForStatus:(id)arg1 account:(id)arg2 actionItems:(id)arg3 image:(id)arg4 URL:(id)arg5 type:(long long)arg6 source:(id)arg7 scribeContext:(id)arg8 doneBlock:(CDUnknownBlockType)arg9;
- (CDUnknownBlockType)t1_shareViaActionBlockForStatus:(id)arg1 account:(id)arg2 actionItems:(id)arg3 urlString:(id)arg4 type:(long long)arg5 source:(id)arg6 scribeComponent:(id)arg7;
- (id)_t1_shareViaActionItemForStatus:(id)arg1 account:(id)arg2 actionItems:(id)arg3 urlString:(id)arg4 type:(long long)arg5 source:(id)arg6 scribeComponent:(id)arg7;
- (id)_t1_negativeFeedbackActionsForStatus:(id)arg1 account:(id)arg2;
- (id)t1_mediaActivityViewControllerForStatus:(id)arg1 account:(id)arg2 image:(id)arg3 URL:(id)arg4 type:(long long)arg5 source:(id)arg6 scribeContext:(id)arg7 doneBlock:(CDUnknownBlockType)arg8;
- (id)_t1_blockActionItemSubtitleForAccount:(id)arg1 isAlreadyBlockingUser:(_Bool)arg2 shouldIncludeAMRSubtitlesIfNeeded:(_Bool)arg3 isTweetAuthor:(_Bool)arg4;
- (id)_t1_muteActionItemSubtitleForAccount:(id)arg1 isAlreadyMutingUser:(_Bool)arg2 shouldIncludeAMRSubtitlesIfNeeded:(_Bool)arg3 isTweetAuthor:(_Bool)arg4 isFromUserUsernameless:(_Bool)arg5;
- (id)_t1_actionItemsForStatus:(id)arg1 account:(id)arg2 sharableEntity:(id)arg3 entityURL:(id)arg4 source:(id)arg5 options:(unsigned long long)arg6 scribeComponent:(id)arg7 doneBlock:(inout CDUnknownBlockType *)arg8;
- (id)t1_activityActionItemsForStatus:(id)arg1 account:(id)arg2 entityURL:(id)arg3 source:(id)arg4 scribeComponent:(id)arg5;
- (id)t1_activityViewControllerForLiveEvent:(id)arg1 account:(id)arg2 source:(id)arg3 scribeContext:(id)arg4 doneBlock:(CDUnknownBlockType)arg5;
- (id)t1_activityViewControllerForStatus:(id)arg1 account:(id)arg2 entityURL:(id)arg3 source:(id)arg4 scribeContext:(id)arg5 doneBlock:(CDUnknownBlockType)arg6;
- (id)t1_activityViewControllerForAccount:(id)arg1 entityURL:(id)arg2 source:(id)arg3 scribeContext:(id)arg4 doneBlock:(CDUnknownBlockType)arg5;
- (id)t1_actionsViewControllerForStatus:(id)arg1 account:(id)arg2 source:(id)arg3 options:(unsigned long long)arg4 doneBlock:(CDUnknownBlockType)arg5;
- (id)t1_actionSheetForStatus:(id)arg1 account:(id)arg2 source:(id)arg3 options:(unsigned long long)arg4 doneBlock:(CDUnknownBlockType)arg5;
- (id)t1_actionSheetForStatus:(id)arg1 account:(id)arg2 source:(id)arg3 doneBlock:(CDUnknownBlockType)arg4;
- (id)_t1_dismissMultiActionItemsForStatus:(id)arg1 account:(id)arg2 source:(id)arg3 options:(unsigned long long)arg4 dismissingBlock:(CDUnknownBlockType)arg5;
- (id)t1_dismissMultiMenuSheetForStatus:(id)arg1 account:(id)arg2 source:(id)arg3 options:(unsigned long long)arg4 dismissingBlock:(CDUnknownBlockType)arg5;
- (id)t1_dismissMultiActionSheetForStatus:(id)arg1 account:(id)arg2 source:(id)arg3 options:(unsigned long long)arg4 dismissingBlock:(CDUnknownBlockType)arg5;
- (id)t1_bookmarksActionItemsForStatus:(id)arg1 account:(id)arg2 source:(id)arg3 options:(unsigned long long)arg4 scribeParameters:(id)arg5 doneBlock:(CDUnknownBlockType)arg6;
- (id)t1_bookmarksMenuSheetForStatus:(id)arg1 account:(id)arg2 source:(id)arg3 options:(unsigned long long)arg4 scribeParameters:(id)arg5 doneBlock:(CDUnknownBlockType)arg6;
- (id)t1_undoRetweetMenuSheetForStatus:(id)arg1 account:(id)arg2 source:(id)arg3 scribeParameters:(id)arg4 undoRetweetBlock:(CDUnknownBlockType)arg5 doneBlock:(CDUnknownBlockType)arg6;
- (id)t1_undoRetweetMenuSheetForStatus:(id)arg1 account:(id)arg2 source:(id)arg3 doneBlock:(CDUnknownBlockType)arg4;
- (id)t1_undoRetweetMenuSheetForStatus:(id)arg1 account:(id)arg2 source:(id)arg3 undoRetweetBlock:(CDUnknownBlockType)arg4;
- (CDUnknownBlockType)_t1_undoRetweetActionForStatus:(id)arg1 account:(id)arg2 scribeSection:(id)arg3 scribeComponent:(id)arg4 scribeElement:(id)arg5 parameters:(id)arg6 undoRetweetBlock:(CDUnknownBlockType)arg7;
- (id)t1_undoRetweetActionSheetForStatus:(id)arg1 account:(id)arg2 source:(id)arg3 scribeParameters:(id)arg4 undoRetweetBlock:(CDUnknownBlockType)arg5 doneBlock:(CDUnknownBlockType)arg6;
- (id)t1_undoRetweetActionSheetForStatus:(id)arg1 account:(id)arg2 source:(id)arg3 doneBlock:(CDUnknownBlockType)arg4;
- (id)t1_undoRetweetActionSheetForStatus:(id)arg1 account:(id)arg2 source:(id)arg3 undoRetweetBlock:(CDUnknownBlockType)arg4;
- (id)t1_retweetMenuSheetForStatus:(id)arg1 account:(id)arg2 source:(id)arg3 scribeParameters:(id)arg4 willQuoteRetweetBlock:(CDUnknownBlockType)arg5 doneBlock:(CDUnknownBlockType)arg6;
- (id)t1_retweetMenuSheetForStatus:(id)arg1 account:(id)arg2 source:(id)arg3 doneBlock:(CDUnknownBlockType)arg4;
- (CDUnknownBlockType)_t1_fleetActionForStatus:(id)arg1 account:(id)arg2 scribePage:(id)arg3 scribeSection:(id)arg4 scribeComponent:(id)arg5 scribeElement:(id)arg6 parameters:(id)arg7;
- (CDUnknownBlockType)_t1_retweetWithCommentActionForStatus:(id)arg1 account:(id)arg2 scribePage:(id)arg3 scribeSection:(id)arg4 scribeComponent:(id)arg5 scribeElement:(id)arg6 parameters:(id)arg7 willQuoteRetweetBlock:(CDUnknownBlockType)arg8 articleNudgeScribeParameters:(id)arg9;
- (CDUnknownBlockType)_t1_retweetActionForStatus:(id)arg1 account:(id)arg2 scribePage:(id)arg3 scribeSection:(id)arg4 scribeComponent:(id)arg5 scribeElement:(id)arg6 parameters:(id)arg7 articleNudgeScribeParameters:(id)arg8;
- (id)t1_retweetActionSheetForStatus:(id)arg1 account:(id)arg2 source:(id)arg3 scribeParameters:(id)arg4 willQuoteRetweetBlock:(CDUnknownBlockType)arg5 doneBlock:(CDUnknownBlockType)arg6;
- (id)t1_retweetActionSheetForStatus:(id)arg1 account:(id)arg2 source:(id)arg3 doneBlock:(CDUnknownBlockType)arg4;
- (void)_t1_scribeArticleNudgeResult:(id)arg1 account:(id)arg2 parameters:(id)arg3;
- (void)_t1_scribeArticleNudgeAction:(id)arg1 elementIfRead:(id)arg2 elementIfDidNotRead:(id)arg3 urlEntity:(id)arg4 account:(id)arg5 status:(id)arg6 withParameters:(id)arg7;
- (void)_t1_scribeArticleNudgeDidCancelRetweetStatus:(id)arg1 withURL:(id)arg2 fromAccount:(id)arg3 withParameters:(id)arg4;
- (void)_t1_scribeArticleNudgeDidRetweetStatusWithComment:(id)arg1 withURL:(id)arg2 fromAccount:(id)arg3 withParameters:(id)arg4;
- (void)_t1_scribeArticleNudgeDidRetweetStatus:(id)arg1 withURL:(id)arg2 fromAccount:(id)arg3 withParameters:(id)arg4;
- (void)_t1_scribeArticleNudgeDidReadArticleFromAccount:(id)arg1 withParameters:(id)arg2;
- (void)_t1_scribeArticleNudgeImpressionForAccount:(id)arg1 withParameters:(id)arg2;
- (void)_t1_scribeAction:(id)arg1 forStatus:(id)arg2 scribeSection:(id)arg3 element:(id)arg4 impressionParameters:(id)arg5 cardEvent:(id)arg6 account:(id)arg7;
- (void)_t1_scribeProfileClickForStatus:(id)arg1 scribeSection:(id)arg2 element:(id)arg3 impressionParameters:(id)arg4 cardEvent:(id)arg5 account:(id)arg6;
- (void)t1_scribeUserRecommendationTapForStatus:(id)arg1 scribeSection:(id)arg2 scribeAction:(id)arg3 impressionParameters:(id)arg4 cardEvent:(id)arg5 account:(id)arg6;
- (void)t1_scribeNameTapForStatus:(id)arg1 scribeSection:(id)arg2 impressionParameters:(id)arg3 account:(id)arg4;
- (void)t1_scribeAvatarTapForStatus:(id)arg1 scribeSection:(id)arg2 impressionParameters:(id)arg3 account:(id)arg4;
- (id)_t1_muteItemForRange:(id)arg1 account:(id)arg2 status:(id)arg3;
- (id)_t1_searchItemForRange:(id)arg1 account:(id)arg2 status:(id)arg3;
- (id)_t1_composeTweetItemForRange:(id)arg1 account:(id)arg2;
- (void)_t1_handlePromotedEventForActiveRange:(id)arg1 inStatus:(id)arg2 account:(id)arg3;
- (CDUnknownBlockType)t1_previewActiveRange:(id)arg1 inStatus:(id)arg2 account:(id)arg3;
- (id)t1_didSelectActiveRange:(id)arg1 inStatus:(id)arg2 account:(id)arg3;
- (id)t1_actionItemsForActiveRange:(id)arg1 inStatus:(id)arg2 source:(id)arg3 account:(id)arg4;
- (id)t1_entityURLForActiveRange:(id)arg1;
- (id)t1_activityViewControllerForActiveRange:(id)arg1 inStatus:(id)arg2 source:(id)arg3 account:(id)arg4;
- (void)_t1_createListWithAccount:(id)arg1 fromViewController:(id)arg2;
- (id)t1_scribeParametersForUserReference:(id)arg1 context:(id)arg2 associatedStatus:(id)arg3 account:(id)arg4;
- (void)t1_setScribeSectionForFollowAction:(id)arg1;
- (id)t1_scribeSectionForFollowAction;
- (id)t1_menuSheetForElectionLabelWithURL:(id)arg1 account:(id)arg2 indexPath:(id)arg3 source:(id)arg4 doneBlock:(CDUnknownBlockType)arg5;
- (id)t1_menuSheetForUser:(id)arg1 userContext:(id)arg2 type:(long long)arg3 source:(id)arg4 associatedStatus:(id)arg5 account:(id)arg6;
- (id)t1_actionItemsForUser:(id)arg1 userContext:(id)arg2 type:(long long)arg3 source:(id)arg4 associatedStatus:(id)arg5 account:(id)arg6 scribeContext:(id)arg7;
- (id)t1_actionItemsForUser:(id)arg1 userContext:(id)arg2 type:(long long)arg3 source:(id)arg4 associatedStatus:(id)arg5 account:(id)arg6;
- (void)t1_showSuspendedAlertForAccount:(id)arg1 okOnly:(_Bool)arg2 phoneChallengeAcceptBlock:(CDUnknownBlockType)arg3;
- (void)t1_showSuspendedAlertForAccount:(id)arg1 withTitle:(id)arg2;
- (void)t1_showSuspendedAlertForAccount:(id)arg1;
- (void)t1_presentAgeGatingAlertViewWithTitle:(id)arg1 message:(id)arg2;
- (void)t1_followAttemptFailedForAccount:(id)arg1 withError:(id)arg2;
- (void)t1_unfollowUserReference:(id)arg1 promotedContent:(id)arg2 account:(id)arg3 scribeContext:(id)arg4 associatedStatus:(id)arg5 showConfirmation:(_Bool)arg6;
- (void)t1_followUserReference:(id)arg1 promotedContent:(id)arg2 account:(id)arg3 scribeContext:(id)arg4 showConfirmation:(_Bool)arg5;
- (id)t1_followActionItemForUser:(id)arg1 userContext:(id)arg2 account:(id)arg3 associatedStatus:(id)arg4 showConfirmation:(_Bool)arg5;
- (void)_t1_showSuspendedAlertForAccount:(id)arg1 withTitle:(id)arg2;
- (id)_topPresentedViewController:(id)arg1;
- (void)_t1_presentPhoneVerificationFlow:(id)arg1;
- (void)_t1_logScribeAction:(id)arg1 inElement:(id)arg2 scribeContext:(id)arg3 scribeParameters:(id)arg4;
- (id)_t1_retweetUndoView;
- (void)_t1_enableRetweetsForUserReference:(id)arg1 account:(id)arg2 promotedContent:(id)arg3 showUndo:(_Bool)arg4;
- (void)_t1_disableRetweetsForUserReference:(id)arg1 account:(id)arg2 promotedContent:(id)arg3 showUndo:(_Bool)arg4;
- (id)_t1_actionItemsForUser:(id)arg1 userContext:(id)arg2 type:(long long)arg3 account:(id)arg4 source:(id)arg5 associatedStatus:(id)arg6 scribeContext:(id)arg7;
- (id)t1_offPlatformShareActivitiesForUser:(id)arg1 source:(id)arg2 account:(id)arg3 associatedStatus:(id)arg4 scribeContext:(id)arg5;
- (id)_t1_shareUserActivityViewControllerForUserReference:(id)arg1 source:(id)arg2 account:(id)arg3 scribeContext:(id)arg4 scribeParameters:(id)arg5;
- (id)_t1_shareUserActionItemForUserReference:(id)arg1 account:(id)arg2 source:(id)arg3 scribeContext:(id)arg4 scribeParameters:(id)arg5;
- (id)_t1_showFullProfileActionItemForUserReference:(id)arg1 userContext:(id)arg2 account:(id)arg3 scribeContext:(id)arg4 scribeParameters:(id)arg5;
- (id)_t1_followActionItemForUser:(id)arg1 userContext:(id)arg2 account:(id)arg3 associatedStatus:(id)arg4 scribeContext:(id)arg5 showConfirmation:(_Bool)arg6;
- (void)t1_presentUserMomentsFromViewController:(id)arg1 userID:(long long)arg2 displayUsername:(id)arg3 account:(id)arg4;
- (id)_t1_viewMomentsActionItemForUser:(id)arg1 account:(id)arg2 scribeContext:(id)arg3 scribeParameters:(id)arg4;
- (id)_t1_viewListsActionItemForUserReference:(id)arg1 account:(id)arg2 scribeContext:(id)arg3 scribeParameters:(id)arg4;
- (id)t1_addToListsActionItemForUserReference:(id)arg1 account:(id)arg2 source:(id)arg3 scribeContext:(id)arg4 scribeParameters:(id)arg5;
- (id)_t1_showTopicsItemForUserReference:(id)arg1 account:(id)arg2 source:(id)arg3 scribeContext:(id)arg4 scribeParameters:(id)arg5;
- (id)_t1_directMessageActionForUserID:(long long)arg1 account:(id)arg2 scribeContext:(id)arg3 scribeParameters:(id)arg4;
- (id)_t1_reportActionItemForUser:(id)arg1 userContext:(id)arg2 account:(id)arg3 status:(id)arg4 scribeContext:(id)arg5 scribeParameters:(id)arg6;
- (id)_t1_toggleMuteActionItemForUser:(id)arg1 account:(id)arg2 status:(id)arg3 scribeContext:(id)arg4 scribeParameters:(id)arg5;
- (id)_t1_toggleBlockActionItemForUser:(id)arg1 userContext:(id)arg2 account:(id)arg3 promotedContent:(id)arg4 blockedByYou:(_Bool)arg5 status:(id)arg6 scribeContext:(id)arg7 scribeParameters:(id)arg8;
- (id)_t1_toggleRetweetActionItemForUser:(id)arg1 account:(id)arg2 promotedContent:(id)arg3 scribeContext:(id)arg4 scribeParameters:(id)arg5;
- (id)_t1_didSelectUserDataSource:(id)arg1 context:(id)arg2 associatedStatus:(id)arg3 selectionScribeContext:(id)arg4 referringScribeContext:(id)arg5 account:(id)arg6 displayInModal:(_Bool)arg7 sourceView:(id)arg8 sourceRect:(struct CGRect)arg9;
- (id)t1_didSelectUserDataSource:(id)arg1 context:(id)arg2 associatedStatus:(id)arg3 selectionScribeContext:(id)arg4 referringScribeContext:(id)arg5 account:(id)arg6;
- (id)t1_didSelectUserReference:(id)arg1 userContext:(id)arg2 associatedStatus:(id)arg3 selectionScribeContext:(id)arg4 referringScribeContext:(id)arg5 account:(id)arg6 displayInModal:(_Bool)arg7 sourceView:(id)arg8 sourceRect:(struct CGRect)arg9;
- (id)t1_didSelectUserReference:(id)arg1 associatedStatus:(id)arg2 associatedUserRecommendation:(id)arg3 selectionScribeContext:(id)arg4 referringScribeContext:(id)arg5 account:(id)arg6 displayInModal:(_Bool)arg7 sourceView:(id)arg8 sourceRect:(struct CGRect)arg9;
- (id)t1_didSelectUserReference:(id)arg1 associatedStatus:(id)arg2 associatedUserRecommendation:(id)arg3 selectionScribeContext:(id)arg4 referringScribeContext:(id)arg5 account:(id)arg6;
- (id)t1_didSelectUser:(id)arg1 associatedStatus:(id)arg2 associatedUserRecommendation:(id)arg3 selectionScribeContext:(id)arg4 referringScribeContext:(id)arg5 account:(id)arg6 displayInModal:(_Bool)arg7 sourceView:(id)arg8 sourceRect:(struct CGRect)arg9;
- (id)t1_didSelectUser:(id)arg1 associatedStatus:(id)arg2 associatedUserRecommendation:(id)arg3 selectionScribeContext:(id)arg4 referringScribeContext:(id)arg5 account:(id)arg6;
- (id)t1_didSelectUserReference:(id)arg1 associatedStatus:(id)arg2 associatedUserRecommendation:(id)arg3 selectionScribeContext:(id)arg4 account:(id)arg5;
- (id)t1_didSelectUser:(id)arg1 associatedStatus:(id)arg2 associatedUserRecommendation:(id)arg3 selectionScribeContext:(id)arg4 account:(id)arg5;
- (void)listsFollowsViewControllerDidCancel:(id)arg1;
- (void)listsFollowsViewController:(id)arg1 didAddToLists:(id)arg2 andRemovedFromLists:(id)arg3;
- (id)_urlForActiveRange:(id)arg1 status:(id)arg2 account:(id)arg3;
- (id)_urlScribeParametersForActiveRange:(id)arg1 status:(id)arg2 account:(id)arg3;
- (id)_scribeParametersForActiveRange:(id)arg1 status:(id)arg2 account:(id)arg3;
- (id)_scribeElementForActiveRange:(id)arg1;
- (id)_scribeActionForActiveRange:(id)arg1;
- (id)_t1_openActiveRange:(id)arg1 status:(id)arg2 user:(id)arg3 directMessageEntry:(id)arg4 scribeContext:(id)arg5 account:(id)arg6 profileModalEnabled:(_Bool)arg7;
- (id)t1_openActiveRange:(id)arg1 directMessageEntry:(id)arg2 account:(id)arg3;
- (id)t1_openActiveRange:(id)arg1 user:(id)arg2 account:(id)arg3 scribeContext:(id)arg4 profileModalEnabled:(_Bool)arg5;
- (id)t1_openActiveRange:(id)arg1 user:(id)arg2 account:(id)arg3;
- (id)t1_scribeContextForActiveRange:(id)arg1 status:(id)arg2 account:(id)arg3 withDefault:(id)arg4;
- (id)t1_openActiveRange:(id)arg1 status:(id)arg2 account:(id)arg3 profileModalEnabled:(_Bool)arg4;
- (id)t1_openActiveRange:(id)arg1 status:(id)arg2 account:(id)arg3;
- (_Bool)t1_showsToggleSideBarAction;
- (_Bool)t1_showsDashAction;
- (_Bool)t1_showsPeopleAction;
- (_Bool)t1_showsExpandedSearchBox;
@property(readonly, nonatomic) _Bool t1_statusBarAppearanceEnabledWhenAppSplitAppearanceTransitionBegan;
- (void)t1_appSplitExtendedContentAvailableDidChange:(_Bool)arg1;
- (void)t1_appSplitModeDidChangeFromPrevious:(long long)arg1 toCurrent:(long long)arg2;
@property(readonly, nonatomic) T1AppSplitViewController *t1_appSplitViewController;
- (void)t1_presentControllerForConversationContext:(id)arg1 sourceView:(id)arg2 sourceRect:(struct CGRect)arg3 profileHeaderButtonGroup:(long long)arg4 account:(id)arg5 sourceScribeContext:(id)arg6;
@property(readonly, nonatomic) UIViewController<T1PanelNavigationController> *t1_panelNavigationController;
- (struct CGRect)t1_footerViewBoundsForFooterViewModel:(id)arg1;
- (void)t1_configureItemsAndActionsForFooterViewModel:(id)arg1 nextAction:(SEL)arg2 skipAction:(SEL)arg3;
- (id)navigationMetadataViewController;
- (id)_t1_simpleNavigationMetadataStackForViewController:(id)arg1;
- (id)navigationMetadataStack;
@property(readonly, nonatomic) T1NavigationMetadata *sourceNavigationMetadata;
@property(readonly, nonatomic) T1NavigationMetadata *navigationMetadata;
- (void)_t1_hideStatus:(id)arg1 fromAccount:(id)arg2;
- (void)_t1_displayMessage:(id)arg1 errorMessage:(id)arg2 success:(_Bool)arg3;
- (void)hiddenRepliesEducationTakeoverViewControllerDidTapCancel:(id)arg1;
- (void)hiddenRepliesEducationTakeoverViewController:(id)arg1 didTapHideReply:(id)arg2;
- (void)hiddenRepliesConsumptionEducationTakeoverViewControllerDidTapTwitterSupportHandle:(id)arg1;
- (void)modalSheetViewControllerDidDismiss:(id)arg1 fromGesture:(_Bool)arg2;
- (void)showBlockAlertForStatus:(id)arg1 fromAccount:(id)arg2;
- (void)showHiddenRepliesConsumptionEducationWithAccount:(id)arg1 dismissCompletion:(CDUnknownBlockType)arg2;
- (_Bool)shouldShowHiddenRepliesConsumptionEducationWithAccount:(id)arg1;
- (void)showHiddenRepliesAuthorEducationWithAccount:(id)arg1 status:(id)arg2;
- (void)showHiddenRepliesForStatus:(id)arg1 account:(id)arg2 fromViewController:(id)arg3 scribeContext:(id)arg4;
- (void)unhideStatus:(id)arg1 account:(id)arg2 scribeContext:(id)arg3;
- (void)hideStatus:(id)arg1 account:(id)arg2 scribeContext:(id)arg3;
- (id)_t1_dockingController;
- (_Bool)t1_isViewDocked:(id)arg1;
- (_Bool)t1_isPlayerCorrespondingToSessionProducerDocked:(id)arg1;
- (id)t1_currentDockedViewController;
- (void)updateDockedViewVisibilityAnimated:(_Bool)arg1;
@property(nonatomic) long long t1_dockingPresentationOption;
- (void)tfn_presentDiscoverabilityOptionsFromSource:(id)arg1 scribePage:(id)arg2 account:(id)arg3;
- (void)tfn_setNeedsTabBarShadowHiddenUpdate;
@property(readonly, nonatomic) _Bool tfn_prefersTabBarShadowHidden;
@property(readonly, nonatomic) id <T1TabBarIntegration> t1_tabBarIntegration;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

