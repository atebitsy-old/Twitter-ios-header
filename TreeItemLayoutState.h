//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNComposableViewLayoutState.h>

@protocol TFNTwitterStatusConversationTreeContext;

@interface TreeItemLayoutState : TFNComposableViewLayoutState
{
    id <TFNTwitterStatusConversationTreeContext> _conversationTreeContext;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <TFNTwitterStatusConversationTreeContext> conversationTreeContext; // @synthesize conversationTreeContext=_conversationTreeContext;
- (id)initWithConversationTreeContext:(id)arg1;
- (id)init;

@end

