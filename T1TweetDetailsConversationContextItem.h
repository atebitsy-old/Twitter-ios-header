//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNActiveTextItem.h>

@class TFNTwitterAccount, TFNTwitterStatusConversationContext;

@interface T1TweetDetailsConversationContextItem : TFNActiveTextItem
{
    TFNTwitterStatusConversationContext *_conversationContext;
    TFNTwitterAccount *_account;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) TFNTwitterStatusConversationContext *conversationContext; // @synthesize conversationContext=_conversationContext;
- (void)didTapActiveRange:(id)arg1 presentingViewController:(id)arg2 source:(id)arg3 rect:(struct CGRect)arg4;
- (id)initWithConversationContext:(id)arg1 viewController:(id)arg2 account:(id)arg3;

@end

