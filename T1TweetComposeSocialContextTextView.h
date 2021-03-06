//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/TFNAttributedTextViewDelegate-Protocol.h>

@class NSString, TFNAttributedTextView;
@protocol T1TweetComposeSocialContextTextViewDelegate;

@interface T1TweetComposeSocialContextTextView : UIView <TFNAttributedTextViewDelegate>
{
    id <T1TweetComposeSocialContextTextViewDelegate> _delegate;
    NSString *_text;
    TFNAttributedTextView *_textView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TFNAttributedTextView *textView; // @synthesize textView=_textView;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) __weak id <T1TweetComposeSocialContextTextViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)attributedTextView:(id)arg1 didTapRange:(id)arg2 rect:(struct CGRect)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)_t1_private_updateAccessibilityValue;
- (void)_t1_private_updateTextView;
- (void)encodeWithCoder:(id)arg1;
- (void)_t1_composeSocialContextTextView_initialize;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

