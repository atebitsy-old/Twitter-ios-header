//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class T1DirectMessageTypingIndicatorController, TFNDirectMessageUser;

@protocol T1DirectMessageTypingIndicatorControllerDelegate
- (void)typingIndicatorControllerConversationDidUpdate:(T1DirectMessageTypingIndicatorController *)arg1;
- (void)typingIndicatorController:(T1DirectMessageTypingIndicatorController *)arg1 userDidStopTyping:(TFNDirectMessageUser *)arg2 didReceiveMessage:(_Bool)arg3;
- (void)typingIndicatorController:(T1DirectMessageTypingIndicatorController *)arg1 userDidStartTyping:(TFNDirectMessageUser *)arg2;
@end

