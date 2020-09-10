//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, T1TweetDraftsDraftAttachmentsView, T1TweetDraftsDraftCompositionViewLayout, TFNAttributedTextView, TFNTwitterComposition, UIImageView, UILabel;

@interface T1TweetDraftsDraftCompositionView : UIView
{
    _Bool _animatedLivePhotoEnabled;
    _Bool _mixedMediaBadgeEnabled;
    NSString *_accountID;
    TFNTwitterComposition *_composition;
    double _widthForCachedLayout;
    T1TweetDraftsDraftCompositionViewLayout *_cachedLayout;
    UIImageView *_errorMessageIconImageView;
    UILabel *_errorMessageLabel;
    TFNAttributedTextView *_textView;
    T1TweetDraftsDraftAttachmentsView *_attachmentsView;
    UIImageView *_pollIconImageView;
    UILabel *_replyChainMessageLabel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UILabel *replyChainMessageLabel; // @synthesize replyChainMessageLabel=_replyChainMessageLabel;
@property(readonly, nonatomic) UIImageView *pollIconImageView; // @synthesize pollIconImageView=_pollIconImageView;
@property(readonly, nonatomic) T1TweetDraftsDraftAttachmentsView *attachmentsView; // @synthesize attachmentsView=_attachmentsView;
@property(readonly, nonatomic) TFNAttributedTextView *textView; // @synthesize textView=_textView;
@property(readonly, nonatomic) UILabel *errorMessageLabel; // @synthesize errorMessageLabel=_errorMessageLabel;
@property(readonly, nonatomic) UIImageView *errorMessageIconImageView; // @synthesize errorMessageIconImageView=_errorMessageIconImageView;
@property(copy, nonatomic) T1TweetDraftsDraftCompositionViewLayout *cachedLayout; // @synthesize cachedLayout=_cachedLayout;
@property(nonatomic) double widthForCachedLayout; // @synthesize widthForCachedLayout=_widthForCachedLayout;
@property(retain, nonatomic) TFNTwitterComposition *composition; // @synthesize composition=_composition;
@property(nonatomic, getter=isMixedMediaBadgeEnabled) _Bool mixedMediaBadgeEnabled; // @synthesize mixedMediaBadgeEnabled=_mixedMediaBadgeEnabled;
@property(nonatomic, getter=isAnimatedLivePhotoEnabled) _Bool animatedLivePhotoEnabled; // @synthesize animatedLivePhotoEnabled=_animatedLivePhotoEnabled;
@property(copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (id)_t1_main_layoutForWidth:(double)arg1;
- (id)_t1_main_cachedLayoutForWidth:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_t1_main_update;
- (void)_t1_tweetDraftsDraftView_initialize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

