//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@class NSString, UIPasteConfiguration, UITextInputMode;

__attribute__((visibility("hidden")))
@interface _TtC17TwitterTextEditor8TextView : UITextView
{
    // Error parsing type: , name: preferredTextInputModePrimaryLanguage
    // Error parsing type: , name: shouldWorkaroundTextInputModeBug
    // Error parsing type: , name: changeTextWritingDirectionActionsEnabled
    // Error parsing type: , name: pasteboardObserverCache
    // Error parsing type: , name: preferredTextInputModeContextIdentifier
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (_Bool)canPasteItemProviders:(id)arg1;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (void)unmarkText;
@property(nonatomic, readonly) UITextInputMode *textInputMode;
@property(nonatomic, readonly) NSString *textInputContextIdentifier;
- (_Bool)becomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
@property(nonatomic, retain) UIPasteConfiguration *pasteConfiguration;

@end

