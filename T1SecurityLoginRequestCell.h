//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTableViewCell.h>

@class TFSTwitterLoginRequest, UIButton, UILabel;
@protocol T1SecurityLoginRequestCellDelegate;

@interface T1SecurityLoginRequestCell : TFNTableViewCell
{
    UILabel *_messageLabel;
    UIButton *_acceptButton;
    UIButton *_denyButton;
    TFSTwitterLoginRequest *_loginRequest;
    id <T1SecurityLoginRequestCellDelegate> _delegate;
}

+ (void)_getAcceptButtonFrame:(struct CGRect *)arg1 denyButtonFrame:(struct CGRect *)arg2 forContentRect:(struct CGRect)arg3;
+ (double)heightForLoginRequest:(id)arg1 tableWidth:(double)arg2 contentPadding:(struct UIEdgeInsets)arg3;
- (void).cxx_destruct;
@property(nonatomic) __weak id <T1SecurityLoginRequestCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TFSTwitterLoginRequest *loginRequest; // @synthesize loginRequest=_loginRequest;
- (void)_denyButtonTapped;
- (void)_acceptButtonTapped;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

