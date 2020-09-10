//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNComposableViewLayoutState.h>

#import <T1Twitter/T1ConversationContextLayoutState-Protocol.h>

@class NSString, TFNAttributedActiveTextModel;

@interface T1StandardStatusConversationContextViewLayoutState : TFNComposableViewLayoutState <T1ConversationContextLayoutState>
{
    _Bool _activeTextModelIsTappable;
    _Bool _conversationContextViewIsTappable;
    NSString *_htmlText;
    TFNAttributedActiveTextModel *_activeTextModel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool conversationContextViewIsTappable; // @synthesize conversationContextViewIsTappable=_conversationContextViewIsTappable;
@property(nonatomic) _Bool activeTextModelIsTappable; // @synthesize activeTextModelIsTappable=_activeTextModelIsTappable;
@property(retain, nonatomic) TFNAttributedActiveTextModel *activeTextModel; // @synthesize activeTextModel=_activeTextModel;
@property(retain, nonatomic) NSString *htmlText; // @synthesize htmlText=_htmlText;
@property(readonly, nonatomic) struct CGRect conversationContextTextFrame;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

