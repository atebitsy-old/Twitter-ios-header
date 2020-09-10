//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/NSObject-Protocol.h>

@class NSString, PTVBroadcasterSurvey, PTVChatSectionCompositeView;

@protocol PTVChatSectionCompositeViewDelegate <NSObject>
- (void)chatSectionCompositeView:(PTVChatSectionCompositeView *)arg1 didSelectShowSurvey:(PTVBroadcasterSurvey *)arg2;

@optional
- (_Bool)chatSectionCompositeViewShouldHidePostBroadcastEdit:(PTVChatSectionCompositeView *)arg1;
- (_Bool)chatSectionCompositeViewShouldHideOverflowMenu:(PTVChatSectionCompositeView *)arg1;
- (void)chatSectionCompositeViewDidExitTheaterMode;
- (void)chatSectionCompositeViewDidSelectScrollChatToBottom:(PTVChatSectionCompositeView *)arg1;
- (void)chatSectionCompositeViewDidSelectShareBroadcastButton:(PTVChatSectionCompositeView *)arg1;
- (void)chatSectionCompositeViewDidSelectGiftHeartActionButton:(PTVChatSectionCompositeView *)arg1;
- (void)chatSectionCompositeViewDidSelectToggleCallInToBroadcast:(PTVChatSectionCompositeView *)arg1;
- (void)chatSectionCompositeViewDidSelectToggleRetweetBroadcast:(PTVChatSectionCompositeView *)arg1;
- (void)chatSectionCompositeViewDidEndComposingMessage:(PTVChatSectionCompositeView *)arg1;
- (void)chatSectionCompositeViewDidChangeMessage:(PTVChatSectionCompositeView *)arg1;
- (void)chatSectionCompositeViewDidBeginComposingMessage:(PTVChatSectionCompositeView *)arg1;
- (void)chatSectionCompositeViewDidSelectLearnMore:(PTVChatSectionCompositeView *)arg1;
- (void)chatSectionCompositeView:(PTVChatSectionCompositeView *)arg1 didCastModerationVote:(unsigned long long)arg2;
- (void)chatSectionCompositeViewDidSelectSendHeart:(PTVChatSectionCompositeView *)arg1;
- (void)chatSectionCompositeView:(PTVChatSectionCompositeView *)arg1 didFinishScrubbingAtSeekTime:(double)arg2;
- (void)chatSectionCompositeViewDidCancelScrubbing:(PTVChatSectionCompositeView *)arg1;
- (void)chatSectionCompositeViewWillBeginScrubbing:(PTVChatSectionCompositeView *)arg1;
- (void)chatSectionCompositeViewDidSelectFlipCamera:(PTVChatSectionCompositeView *)arg1;
- (void)chatSectionCompositeView:(PTVChatSectionCompositeView *)arg1 didPinchToScale:(double)arg2 velocity:(double)arg3;
- (void)chatSectionCompositeView:(PTVChatSectionCompositeView *)arg1 didSelectSendMessage:(NSString *)arg2 keyboardLanguage:(NSString *)arg3;
- (void)chatSectionCompositeViewDidSelectActionButton:(PTVChatSectionCompositeView *)arg1;
- (void)chatSectionCompositeViewDidSelectAudioScopeButton:(PTVChatSectionCompositeView *)arg1;
- (void)chatSectionCompositeViewDidSelectPauseReplay:(PTVChatSectionCompositeView *)arg1;
- (void)chatSectionCompositeViewDidSelectPlayReplay:(PTVChatSectionCompositeView *)arg1;
- (void)chatSectionCompositeViewDidSelectWatchLive:(PTVChatSectionCompositeView *)arg1;
- (void)chatSectionCompositeViewDidSelectPrivacySettings:(PTVChatSectionCompositeView *)arg1;
- (void)chatSectionCompositeViewDidSelectModerationReport:(PTVChatSectionCompositeView *)arg1;
- (void)chatSectionCompositeViewDidSelectEditBroadcast:(PTVChatSectionCompositeView *)arg1;
- (void)chatSectionCompositeViewDidSelectComposeMessage:(PTVChatSectionCompositeView *)arg1;
- (void)chatSectionCompositeViewDidSelectShowBroadcastDetails:(PTVChatSectionCompositeView *)arg1;
@end

