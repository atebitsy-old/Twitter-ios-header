//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/PTVBlockedAlertTableViewCell.h>

@class PTVMessage;

@interface PTVBlockedAlertTableViewCellKVO : PTVBlockedAlertTableViewCell
{
    PTVMessage *_alert;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PTVMessage *alert; // @synthesize alert=_alert;
- (void)handleTap;
- (void)executeState;

@end

