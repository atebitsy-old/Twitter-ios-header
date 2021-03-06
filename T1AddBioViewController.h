//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <T1Twitter/T1AddBioFieldDelegate-Protocol.h>
#import <T1Twitter/T1InterestPickerInterestItemAdapterDelegate-Protocol.h>

@class NSMutableArray, NSString, T1AddBioField, T1AddBioInterestsCollectionViewBackground, T1AddBioInterestsCollectionViewController, T1OnboardingFooterViewModel, T1OnboardingHeaderViewModel, TFNBarButtonItem, TFNTwitterAccount, UIView;
@protocol T1AddBioViewControllerDelegate, T1OnboardingHeaderSpec;

@interface T1AddBioViewController : TFNViewController <T1AddBioFieldDelegate, T1InterestPickerInterestItemAdapterDelegate>
{
    id <T1OnboardingHeaderSpec> _headerSpec;
    NSString *_hintText;
    NSString *_accessibilityLabel;
    NSString *_charactersRemainingAccessibilityLabel;
    long long _maxLength;
    struct CGRect _keyboardFrame;
    T1OnboardingFooterViewModel *_footerViewModel;
    T1OnboardingHeaderViewModel *_headerViewModel;
    long long _keyboardType;
    _Bool _secureTextEntry;
    _Bool _multiline;
    _Bool _supportInterests;
    _Bool _autofocusBio;
    CDUnknownBlockType _nextAction;
    CDUnknownBlockType _skipAction;
    _Bool _editing;
    NSString *_bio;
    TFNTwitterAccount *_account;
    UIView *_headerView;
    T1AddBioField *_addBioField;
    TFNBarButtonItem *_nextBarButtonItem;
    NSMutableArray *_customConstraints;
    T1AddBioInterestsCollectionViewController *_interestsCollectionViewController;
    T1AddBioInterestsCollectionViewBackground *_interestsCollectionViewBackground;
    id <T1AddBioViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <T1AddBioViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) T1AddBioInterestsCollectionViewBackground *interestsCollectionViewBackground; // @synthesize interestsCollectionViewBackground=_interestsCollectionViewBackground;
@property(retain, nonatomic) T1AddBioInterestsCollectionViewController *interestsCollectionViewController; // @synthesize interestsCollectionViewController=_interestsCollectionViewController;
@property(retain, nonatomic) NSMutableArray *customConstraints; // @synthesize customConstraints=_customConstraints;
@property(retain, nonatomic) TFNBarButtonItem *nextBarButtonItem; // @synthesize nextBarButtonItem=_nextBarButtonItem;
@property(retain, nonatomic) T1AddBioField *addBioField; // @synthesize addBioField=_addBioField;
@property(readonly, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(nonatomic) _Bool editing; // @synthesize editing=_editing;
@property(retain, nonatomic) NSString *bio; // @synthesize bio=_bio;
- (void)private_updateNextButton;
- (void)private_keyboardWillHide:(id)arg1;
- (void)private_keyboardWillChangeFrame:(id)arg1;
- (_Bool)private_isValidText:(id)arg1;
- (void)interestAdapter:(id)arg1 didSelectInterest:(id)arg2 atIndexPath:(id)arg3;
- (void)addBioField:(id)arg1 didReturn:(id)arg2;
- (void)addBioFieldDidEndEditing:(id)arg1;
- (void)addBioFieldDidBeginEditing:(id)arg1;
- (void)addBioField:(id)arg1 didChangeText:(id)arg2;
- (id)scribeSection;
- (id)scribePage;
@property(readonly, nonatomic) _Bool hasInterests;
- (void)_nextTapped;
- (void)_skipTapped;
- (_Bool)tfn_logoTitleViewShown;
- (_Bool)tfn_prefersNavigationBarShadowHidden;
- (long long)tfn_preferredToolbarVisibility;
- (void)_updateConstraints;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithAccount:(id)arg1 headerSpec:(id)arg2 footerSpec:(id)arg3 hintText:(id)arg4 defaultText:(id)arg5 accessibilityLabel:(id)arg6 charactersRemainingAccessibilityLabel:(id)arg7 maxLength:(long long)arg8 keyboardType:(long long)arg9 secureTextEntry:(_Bool)arg10 multiline:(_Bool)arg11 supportInterests:(_Bool)arg12 autofocusBio:(_Bool)arg13 nextAction:(CDUnknownBlockType)arg14 skipAction:(CDUnknownBlockType)arg15;
- (id)initWithAccount:(id)arg1 headerSpec:(id)arg2 footerSpec:(id)arg3 hintText:(id)arg4 defaultText:(id)arg5 accessibilityLabel:(id)arg6 charactersRemainingAccessibilityLabel:(id)arg7 maxLength:(long long)arg8 keyboardType:(long long)arg9 secureTextEntry:(_Bool)arg10 multiline:(_Bool)arg11 supportInterests:(_Bool)arg12 autofocusBio:(_Bool)arg13 delegate:(id)arg14;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

