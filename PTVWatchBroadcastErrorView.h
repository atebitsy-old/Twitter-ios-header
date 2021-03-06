//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PeriscopeSDK/PTVLoadingImageViewDelegate-Protocol.h>

@class NSString, PTVBlurredImageView, PTVProfileImageView, UILabel;
@protocol PTVWatchBroadcastErrorViewDelegate;

@interface PTVWatchBroadcastErrorView : UIView <PTVLoadingImageViewDelegate>
{
    PTVBlurredImageView *_backgroundView;
    UIView *_backgroundShadeView;
    PTVProfileImageView *_profileImageView;
    UILabel *_displayNameLabel;
    UILabel *_errorLabel;
    _Bool _didFailToConnect;
    id <PTVWatchBroadcastErrorViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool didFailToConnect; // @synthesize didFailToConnect=_didFailToConnect;
@property(nonatomic) __weak id <PTVWatchBroadcastErrorViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateErrorLabel;
- (void)didTapProfile:(id)arg1;
- (void)configureWithBroadcast:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)loadingImageViewLoadedImageDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

