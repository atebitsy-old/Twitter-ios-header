//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNButtonBarView.h>

@class T1DirectMessageComposeTextView, TFNButton, UIButton, _TtC9T1Twitter32DirectMessageSwipeToSendPillView;

__attribute__((visibility("hidden")))
@interface _TtC9T1Twitter27DirectMessageComposeToolbar : TFNButtonBarView
{
    // Error parsing type: , name: components
    // Error parsing type: , name: textView
    // Error parsing type: , name: swipeToSendPillView
    // Error parsing type: , name: voiceAttachButton
    // Error parsing type: , name: mediaAttachButton
    // Error parsing type: , name: foundMediaAttachButton
    // Error parsing type: , name: quickReplyRecallButton
    // Error parsing type: , name: sendButton
    // Error parsing type: , name: recordingState
    // Error parsing type: , name: mediaAttachButtonLongPressRecognizer
    // Error parsing type: , name: audioRecordLongPressRecognizer
    // Error parsing type: , name: $__lazy_storage_$_defaultHeight
}

- (void).cxx_destruct;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, readonly) TFNButton *sendButton; // @synthesize sendButton;
@property(nonatomic, readonly) TFNButton *mediaAttachButton; // @synthesize mediaAttachButton;
@property(nonatomic, readonly) UIButton *voiceAttachButton; // @synthesize voiceAttachButton;
@property(nonatomic, readonly) _TtC9T1Twitter32DirectMessageSwipeToSendPillView *swipeToSendPillView; // @synthesize swipeToSendPillView;
@property(nonatomic, readonly) T1DirectMessageComposeTextView *textView; // @synthesize textView;

@end

