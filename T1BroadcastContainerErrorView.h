//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/UIGestureRecognizerDelegate-Protocol.h>

@class NSLayoutConstraint, NSString, TFNButton, UIImageView, UILabel, UIStackView, UITapGestureRecognizer;
@protocol T1BroadcastContainerErrorConfiguration, T1BroadcastContainerErrorViewDelegate;

@interface T1BroadcastContainerErrorView : UIView <UIGestureRecognizerDelegate>
{
    id <T1BroadcastContainerErrorViewDelegate> _delegate;
    long long _style;
    long long _controlType;
    UIStackView *_stackView;
    TFNButton *_reloadButton;
    UILabel *_errorLabel;
    TFNButton *_geoPermissionsButton;
    UIImageView *_imageView;
    NSLayoutConstraint *_centerYConstraint;
    UITapGestureRecognizer *_tapRecognizer;
    id <T1BroadcastContainerErrorConfiguration> _configuration;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <T1BroadcastContainerErrorConfiguration> configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
@property(retain, nonatomic) NSLayoutConstraint *centerYConstraint; // @synthesize centerYConstraint=_centerYConstraint;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) TFNButton *geoPermissionsButton; // @synthesize geoPermissionsButton=_geoPermissionsButton;
@property(readonly, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(readonly, nonatomic) TFNButton *reloadButton; // @synthesize reloadButton=_reloadButton;
@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) long long controlType; // @synthesize controlType=_controlType;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) __weak id <T1BroadcastContainerErrorViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_t1_didTapErrorView:(id)arg1;
- (void)_t1_didTapReloadButton:(id)arg1;
- (void)_t1_didTapGeoButton:(id)arg1;
- (void)_t1_applyConfiguration;
- (void)_t1_updateButtonVisibility;
- (void)_t1_updateLabelVisibility;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
@property(copy, nonatomic) NSString *controlTitle;
@property(copy, nonatomic) NSString *labelText;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

