//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <T1Twitter/T1DurationPickerViewDelegate-Protocol.h>
#import <T1Twitter/UITextFieldDelegate-Protocol.h>

@class NSMutableArray, NSMutableSet, NSString, T1AccordionButton, T1ComposePollingCardPreviewView, TFNButton, TFNPaddedButton, TFNTwitterAccount, TFNTwitterCompositionPollingCard, UITextField;
@protocol T1ComposePollingCardPreviewControllerDelegate;

@interface T1ComposePollingCardPreviewController : TFNViewController <UITextFieldDelegate, T1DurationPickerViewDelegate>
{
    id <T1ComposePollingCardPreviewControllerDelegate> _delegate;
    TFNTwitterCompositionPollingCard *_pollingCard;
    TFNTwitterAccount *_account;
    TFNPaddedButton *_removeButton;
    TFNButton *_addChoiceButton;
    T1AccordionButton *_durationButton;
    NSMutableArray *_textFields;
    NSMutableSet *_textFieldFocusMap;
    TFNButton *_altTextButton;
}

- (void).cxx_destruct;
@property(nonatomic) __weak TFNButton *altTextButton; // @synthesize altTextButton=_altTextButton;
@property(retain, nonatomic) NSMutableSet *textFieldFocusMap; // @synthesize textFieldFocusMap=_textFieldFocusMap;
@property(retain, nonatomic) NSMutableArray *textFields; // @synthesize textFields=_textFields;
@property(nonatomic) __weak T1AccordionButton *durationButton; // @synthesize durationButton=_durationButton;
@property(nonatomic) __weak TFNButton *addChoiceButton; // @synthesize addChoiceButton=_addChoiceButton;
@property(nonatomic) __weak TFNPaddedButton *removeButton; // @synthesize removeButton=_removeButton;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) TFNTwitterCompositionPollingCard *pollingCard; // @synthesize pollingCard=_pollingCard;
@property(nonatomic) __weak id <T1ComposePollingCardPreviewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)pickerView:(id)arg1 didChangeTimeInterval:(double)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)_updateCompositionText:(id)arg1 forTextField:(id)arg2;
- (void)_textFieldDidChange:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)_sendScribingWithElement:(id)arg1 action:(id)arg2;
- (void)removePollComposeViewAnimated:(_Bool)arg1;
- (void)_didTapRemoveButton:(id)arg1;
- (void)_didTapDurationButton:(id)arg1;
- (void)_didTapAddChoiceButton:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)_animateRemovePollComposeViewWithAnimations:(CDUnknownBlockType)arg1;
- (void)_animateShowPollComposeView;
- (void)_updateRemainingCountInTextField:(id)arg1 forString:(id)arg2;
- (void)_updateDurationButton;
- (void)_updateTextFields;
- (void)_updateView;
@property(readonly, nonatomic) UITextField *activeTextField;
@property(readonly, nonatomic) _Bool isFocused;
- (void)focusView;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) T1ComposePollingCardPreviewView *view; // @dynamic view;

@end

