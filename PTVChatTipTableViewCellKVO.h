//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/PTVChatTipTableViewCell.h>

@class PTVMessage;

@interface PTVChatTipTableViewCellKVO : PTVChatTipTableViewCell
{
    PTVMessage *_message;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PTVMessage *message; // @synthesize message=_message;
- (void)handleTap;
- (void)setUseLargeChatFont:(_Bool)arg1;
- (void)executeState;

@end

