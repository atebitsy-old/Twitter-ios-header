//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

#import <T1Twitter/TFNFormDelegate-Protocol.h>
#import <T1Twitter/TFNFormFieldCellDelegate-Protocol.h>
#import <T1Twitter/TFNFormViewAdapterAppearanceProvider-Protocol.h>
#import <T1Twitter/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, TFNButton, TFNForm, TFNFormAppearance, TFNFormField, TFNFormFieldCell, TFNFormView, UIBarButtonItem, UICollectionViewFlowLayout;

@interface TFNFormViewController : TFNItemsDataViewController <TFNFormViewAdapterAppearanceProvider, TFNFormFieldCellDelegate, UICollectionViewDelegateFlowLayout, TFNFormDelegate>
{
    struct CGRect _keyboardFrame;
    _Bool _includesSubmitButtonAsItem;
    _Bool _addsDoneBarButtonButtonItemToNavigationBar;
    _Bool _disableContentOffsetAdjustment;
    _Bool _rotating;
    _Bool _insetting;
    _Bool _settingSections;
    TFNButton *_submitButton;
    unsigned long long _inputRequiredBehavior;
    unsigned long long _keyboardDismissTriggers;
    TFNForm *_form;
    TFNFormAppearance *_appearance;
    NSArray *_footerItems;
    double _topInset;
    TFNButton *_preparedSubmitButton;
    UIBarButtonItem *_preparedDoneBarButtonItem;
    double _keyboardAnimationDuration;
    NSMutableDictionary *_sectionTitleWidths;
    TFNFormFieldCell *_currentFormFieldCell;
    struct _NSRange _selectedAutocompleteRange;
    struct CGRect _additionalGutterFrame;
    struct CGRect _topGutterFrame;
}

+ (Class)collectionViewClass;
- (void).cxx_destruct;
@property(nonatomic) struct _NSRange selectedAutocompleteRange; // @synthesize selectedAutocompleteRange=_selectedAutocompleteRange;
@property(retain, nonatomic) TFNFormFieldCell *currentFormFieldCell; // @synthesize currentFormFieldCell=_currentFormFieldCell;
@property(readonly, nonatomic) NSMutableDictionary *sectionTitleWidths; // @synthesize sectionTitleWidths=_sectionTitleWidths;
@property(readonly, nonatomic) double keyboardAnimationDuration; // @synthesize keyboardAnimationDuration=_keyboardAnimationDuration;
@property(retain, nonatomic) UIBarButtonItem *preparedDoneBarButtonItem; // @synthesize preparedDoneBarButtonItem=_preparedDoneBarButtonItem;
@property(retain, nonatomic) TFNButton *preparedSubmitButton; // @synthesize preparedSubmitButton=_preparedSubmitButton;
@property(nonatomic) struct CGRect topGutterFrame; // @synthesize topGutterFrame=_topGutterFrame;
@property(nonatomic, getter=isSettingSections) _Bool settingSections; // @synthesize settingSections=_settingSections;
@property(nonatomic, getter=isInsetting) _Bool insetting; // @synthesize insetting=_insetting;
@property(nonatomic, getter=isRotating) _Bool rotating; // @synthesize rotating=_rotating;
@property(readonly, nonatomic) struct CGRect additionalGutterFrame; // @synthesize additionalGutterFrame=_additionalGutterFrame;
@property(readonly, nonatomic) double topInset; // @synthesize topInset=_topInset;
@property(readonly, nonatomic) NSArray *footerItems; // @synthesize footerItems=_footerItems;
@property(retain, nonatomic) TFNFormAppearance *appearance; // @synthesize appearance=_appearance;
@property(readonly, nonatomic) TFNForm *form; // @synthesize form=_form;
@property(readonly, nonatomic) unsigned long long keyboardDismissTriggers; // @synthesize keyboardDismissTriggers=_keyboardDismissTriggers;
@property(readonly, nonatomic) unsigned long long inputRequiredBehavior; // @synthesize inputRequiredBehavior=_inputRequiredBehavior;
@property(nonatomic) _Bool disableContentOffsetAdjustment; // @synthesize disableContentOffsetAdjustment=_disableContentOffsetAdjustment;
@property(readonly, nonatomic) _Bool addsDoneBarButtonButtonItemToNavigationBar; // @synthesize addsDoneBarButtonButtonItemToNavigationBar=_addsDoneBarButtonButtonItemToNavigationBar;
@property(readonly, nonatomic) _Bool includesSubmitButtonAsItem; // @synthesize includesSubmitButtonAsItem=_includesSubmitButtonAsItem;
@property(readonly, nonatomic) TFNButton *submitButton; // @synthesize submitButton=_submitButton;
- (void)layoutMetricsDidChange:(id)arg1 to:(id)arg2;
- (double)formFieldCell:(id)arg1 maximumWidthForTitleAtIndexPath:(id)arg2;
- (_Bool)formFieldCellShouldBecomeFirstResponderOnAppearance:(id)arg1;
- (_Bool)formFieldCellShouldAnimateHighlight:(id)arg1;
- (_Bool)formFieldShouldShowRequiredHint:(id)arg1;
- (_Bool)formFieldCellShouldShowRequiredHint:(id)arg1;
- (void)formFieldCell:(id)arg1 willAnimateToShowError:(_Bool)arg2;
- (_Bool)formFieldShouldReturn:(id)arg1 withSelectNextFieldAction:(CDUnknownBlockType)arg2 stopEditingAction:(CDUnknownBlockType)arg3;
- (_Bool)formFieldCell:(id)arg1 textFieldShouldReturn:(id)arg2;
- (void)formFieldDidEndEditingUserInput:(id)arg1;
- (void)formFieldCell:(id)arg1 textFieldDidEndEditingValid:(_Bool)arg2;
- (void)formFieldDidUpdateUserInput:(id)arg1;
- (void)formFieldCell:(id)arg1 textField:(id)arg2 didChangeText:(id)arg3;
- (void)formFieldDidBeginEditingUserInput:(id)arg1 withStopEditingAction:(CDUnknownBlockType)arg2;
- (void)formFieldCellTextFieldDidBeginEditing:(id)arg1;
- (void)form:(id)arg1 didChangeSubmittability:(_Bool)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setSections:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidChangeFrame:(id)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)update:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_updateFormViewDisableContentOffsetAdjustment;
- (void)_scrollFormViewToTop;
- (void)_addDoneBarButtonItem;
- (void)_tfn_applyAppearance;
- (void)_dismissKeyboard;
- (id)_firstFormFieldCellPassingTest:(CDUnknownBlockType)arg1;
- (void)_updateFormFieldForUserInput:(id)arg1;
- (void)_resetSectionTitleWidths;
- (id)_nextFormFieldCellForFormFieldCell:(id)arg1;
- (double)_formFieldTitleWidthForSection:(unsigned long long)arg1;
- (void)_animateFormViewForFormFieldCell:(id)arg1;
- (void)_adjustFormViewIfNecessaryForFormFieldCell:(id)arg1;
@property(readonly, nonatomic) TFNFormView *formView;
@property(readonly, nonatomic) struct CGRect bottomGutterFrame;
@property(readonly, nonatomic) UICollectionViewFlowLayout *layout;
@property(readonly, nonatomic) UIBarButtonItem *doneBarButtonItem;
- (id)cellForFormItem:(id)arg1;
@property(readonly, nonatomic) TFNFormField *focusedFormField;
- (void)removeFocusFromAllFormFields;
- (void)focusOnFirstFormFieldPassingTest:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)focusOnFirstFormFieldRequiringInput;
- (void)submitForm;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)init;
- (id)initWithBasicForm:(id)arg1;
- (id)initWithForm:(id)arg1 appearance:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

