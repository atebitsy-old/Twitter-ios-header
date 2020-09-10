//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/PTVActionSheetController.h>

#import <PeriscopeSDK/PTVChatActionHeaderViewDelegate-Protocol.h>
#import <PeriscopeSDK/PTVChatActionSheetViewDelegate-Protocol.h>
#import <PeriscopeSDK/PTVGuestCalledInTableViewCellDelegate-Protocol.h>

@class NSArray, NSObject, NSString, PTVGuestCallerController;
@protocol PTVChatActionSheetControllerDelegate, PTVLoggedInUserProtocol;

@interface PTVChatActionSheetController : PTVActionSheetController <PTVChatActionSheetViewDelegate, PTVGuestCalledInTableViewCellDelegate, PTVChatActionHeaderViewDelegate>
{
    PTVChatActionSheetController *_weakSelf;
    NSArray *_carouselMessages;
    unsigned long long _currentMessagePosition;
    _Bool _hasAcceptCallIn;
    _Bool _hasReply;
    NSObject<PTVLoggedInUserProtocol> *_loggedInUser;
    PTVGuestCallerController *_guestCallerController;
    _Bool _reportButtonsVisible;
    id <PTVChatActionSheetControllerDelegate> _chatActionSheetDelegate;
}

+ (void)addMessageWithAggregationIfNecessary:(id)arg1 toMessageArray:(id)arg2 shouldAddJoinAggregate:(_Bool)arg3 shouldBePutInFrontOfArray:(_Bool)arg4;
+ (id)carouselMessagesFromArray:(id)arg1 withCurrentMessage:(id)arg2;
+ (_Bool)canDisplayMessageInChatCarousel:(id)arg1;
+ (id)AttributesForMessage;
- (void).cxx_destruct;
@property(nonatomic) _Bool reportButtonsVisible; // @synthesize reportButtonsVisible=_reportButtonsVisible;
@property(nonatomic) __weak id <PTVChatActionSheetControllerDelegate> chatActionSheetDelegate; // @synthesize chatActionSheetDelegate=_chatActionSheetDelegate;
- (void)chatTableViewCell:(id)arg1 didTapMessage:(id)arg2;
- (void)guestCalledInCell:(id)arg1 addGuestButtonDidCompleteCountdown:(id)arg2;
- (void)guestCalledInCell:(id)arg1 didSelectAddGuestButton:(id)arg2;
- (void)setCandyStyleForCurrentCarouselMessage;
- (id)currentMessage;
- (id)chatActionSheetView;
- (id)commentViewForChatMessage:(id)arg1;
- (void)didPressUnmute;
- (void)didPressMute;
- (void)didPressReport;
- (void)didPressBlockUser;
- (void)didPressViewProfile;
- (void)didPressReply;
- (void)didPressAcceptCallIn;
- (id)initWithDelegate:(id)arg1 attributedMessage:(id)arg2 hasReply:(_Bool)arg3 hasAcceptCallIn:(_Bool)arg4 canBlock:(_Bool)arg5 canModerate:(_Bool)arg6 carouselMessages:(id)arg7 currentMessagePosition:(unsigned long long)arg8 currentMessageUsername:(id)arg9 dismissTitle:(id)arg10 loggedInUser:(id)arg11 guestCallerController:(id)arg12;
- (void)chatActionHeaderViewDidEndScroll;
- (id)chatActionHeaderViewMessageAtCurrentIndex;
- (void)chatActionHeaderViewDidChangeMessageViewIndex:(unsigned long long)arg1;
- (void)chatActionSheetDidPressReportOtherReason;
- (void)chatActionSheetDidPressReportSexualContent;
- (void)chatActionSheetDidPressReportSpam;
- (void)chatActionSheetDidPressReportAbuse;
- (void)dismissButtonPressedOnActionSheetView:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

