//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/T1PromptView-Protocol.h>

@class NSArray, NSString, T1PromptImageSpec, T1PromptTextSpec, TFNAttributedTextView, UIButton, UIImageView;

@interface T1FullPromptView : UIView <T1PromptView>
{
    UIImageView *_logoImageView;
    UIImageView *_imageView;
    long long _textViewFontSizeOffset;
    _Bool _showDismissOption;
    _Bool _showLogo;
    T1PromptImageSpec *_imageSpec;
    T1PromptTextSpec *_primaryTextSpec;
    TFNAttributedTextView *_primaryTextView;
    T1PromptTextSpec *_secondaryTextSpec;
    TFNAttributedTextView *_secondaryTextView;
    T1PromptTextSpec *_detailTextSpec;
    TFNAttributedTextView *_detailTextView;
    NSArray *_buttonSpecs;
    NSArray *_buttons;
    unsigned long long _dismissOptionType;
    CDUnknownBlockType _dismissOptionAction;
    UIButton *_dismissButton;
}

+ (id)private_adjustFontSize:(id)arg1 byOffset:(long long)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(readonly, copy, nonatomic) CDUnknownBlockType dismissOptionAction; // @synthesize dismissOptionAction=_dismissOptionAction;
@property(readonly, nonatomic) _Bool showLogo; // @synthesize showLogo=_showLogo;
@property(nonatomic) unsigned long long dismissOptionType; // @synthesize dismissOptionType=_dismissOptionType;
@property(readonly, nonatomic) _Bool showDismissOption; // @synthesize showDismissOption=_showDismissOption;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) NSArray *buttonSpecs; // @synthesize buttonSpecs=_buttonSpecs;
@property(retain, nonatomic) TFNAttributedTextView *detailTextView; // @synthesize detailTextView=_detailTextView;
@property(retain, nonatomic) T1PromptTextSpec *detailTextSpec; // @synthesize detailTextSpec=_detailTextSpec;
@property(retain, nonatomic) TFNAttributedTextView *secondaryTextView; // @synthesize secondaryTextView=_secondaryTextView;
@property(retain, nonatomic) T1PromptTextSpec *secondaryTextSpec; // @synthesize secondaryTextSpec=_secondaryTextSpec;
@property(retain, nonatomic) TFNAttributedTextView *primaryTextView; // @synthesize primaryTextView=_primaryTextView;
@property(retain, nonatomic) T1PromptTextSpec *primaryTextSpec; // @synthesize primaryTextSpec=_primaryTextSpec;
@property(retain, nonatomic) T1PromptImageSpec *imageSpec; // @synthesize imageSpec=_imageSpec;
- (_Bool)protected_shouldCenterLogo;
- (double)protected_bottomInsetForLayoutMetrics:(id)arg1 spacingMultiplier:(double)arg2;
- (double)protected_topInsetForLayoutMetrics:(id)arg1 spacingMultiplier:(double)arg2;
- (_Bool)private_hasMinimumFontSize:(id)arg1 forTextSpec:(id)arg2;
- (void)private_dismissAction:(id)arg1;
- (_Bool)private_layoutSubviewsWithLogo:(_Bool)arg1 spacingMultiplier:(double)arg2 fontSizeOffset:(long long)arg3 imageScale:(double)arg4;
- (void)layoutSubviews;
- (void)setShowLogo:(_Bool)arg1;
- (void)setShowDismissOption:(_Bool)arg1 action:(CDUnknownBlockType)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) unsigned long long buttonLayout;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

