//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNForm.h>

#import <T1Twitter/TFNAttributedTextViewDelegate-Protocol.h>

@class NSString, T1AuthenticationFormTogglePasswordTextView, T1SignUpFormField, TFSTwitterOnboardingUserIdentifierCollection;

@interface T1EnterPasswordForm : TFNForm <TFNAttributedTextViewDelegate>
{
    _Bool _showConfirmation;
    _Bool _skipValidation;
    NSString *_hintText;
    NSString *_confirmationHintText;
    NSString *_confirmationMismatchMessage;
    TFSTwitterOnboardingUserIdentifierCollection *_userIdentifierCollection;
    long long _userIdentifierDisplayType;
    T1SignUpFormField *_identifierField;
    T1SignUpFormField *_passwordField;
    T1SignUpFormField *_confirmationField;
    T1AuthenticationFormTogglePasswordTextView *_togglePasswordField;
}

- (void).cxx_destruct;
@property(retain, nonatomic) T1AuthenticationFormTogglePasswordTextView *togglePasswordField; // @synthesize togglePasswordField=_togglePasswordField;
@property(retain, nonatomic) T1SignUpFormField *confirmationField; // @synthesize confirmationField=_confirmationField;
@property(retain, nonatomic) T1SignUpFormField *passwordField; // @synthesize passwordField=_passwordField;
@property(retain, nonatomic) T1SignUpFormField *identifierField; // @synthesize identifierField=_identifierField;
- (void)_textFieldTextDidChange:(id)arg1;
- (void)attributedTextView:(id)arg1 didTapRange:(id)arg2 rect:(struct CGRect)arg3;
@property(retain, nonatomic) NSString *password;
- (id)sections;
- (id)initWithUserIdentifierCollection:(id)arg1 userIdentifierDisplayType:(long long)arg2 hintText:(id)arg3 confirmationHintText:(id)arg4 confirmationMismatchMessage:(id)arg5 showConfirmation:(_Bool)arg6 skipValidation:(_Bool)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

