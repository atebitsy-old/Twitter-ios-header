//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNFormViewController.h>

#import <T1Twitter/T1MuteKeywordDurationViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1MuteKeywordFormViewControllerDelegate-Protocol.h>
#import <T1Twitter/TFNFormDelegate-Protocol.h>
#import <T1Twitter/TNLCommunicationAgentObserver-Protocol.h>

@class NSSet, NSString, T1KeywordForm, TFNDoneBarButtonItem, TFNStringDataViewAdapter, TFNTwitterAccount, TFSTwitterMutedKeyword, TFSTwitterScribeContext;
@protocol T1MuteKeywordFormViewControllerDelegate;

@interface T1MuteKeywordFormViewController : TFNFormViewController <TFNFormDelegate, TNLCommunicationAgentObserver, T1MuteKeywordDurationViewControllerDelegate, T1MuteKeywordFormViewControllerDelegate>
{
    TFSTwitterScribeContext *_scribeContext;
    T1KeywordForm *_form;
    TFNTwitterAccount *_account;
    id <T1MuteKeywordFormViewControllerDelegate> _delegate;
    TFNDoneBarButtonItem *_saveButton;
    TFNStringDataViewAdapter *_stringAdapter;
    TFSTwitterMutedKeyword *_keyword;
}

+ (id)textForDuration:(double)arg1;
+ (id)textForDate:(id)arg1;
+ (double)timeIntervalForDate:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) TFSTwitterMutedKeyword *keyword; // @synthesize keyword=_keyword;
@property(retain, nonatomic) TFNStringDataViewAdapter *stringAdapter; // @synthesize stringAdapter=_stringAdapter;
@property(retain, nonatomic) TFNDoneBarButtonItem *saveButton; // @synthesize saveButton=_saveButton;
@property(nonatomic) __weak id <T1MuteKeywordFormViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) T1KeywordForm *form; // @synthesize form=_form;
- (void)muteKeywordViewController:(id)arg1 didRefreshKeywordList:(id)arg2 forKeywordString:(id)arg3 action:(unsigned long long)arg4;
- (void)muteKeywordViewController:(id)arg1 handleErrorForKeywordString:(id)arg2 action:(unsigned long long)arg3 isUserInputFormError:(_Bool)arg4;
- (CDUnknownBlockType)private_submissionCompletionBlockForKeyword:(id)arg1;
- (_Bool)private_currentlyUnreachable;
- (void)private_dismiss;
- (void)form:(id)arg1 didChangeSubmittability:(_Bool)arg2;
- (void)_t1_createNewKeyword:(id)arg1 withDuration:(double)arg2 muteSurfaces:(unsigned long long)arg3 muteOptions:(unsigned long long)arg4;
- (void)_t1_updateKeyword:(id)arg1 withDuration:(double)arg2 muteSurfaces:(unsigned long long)arg3 muteOptions:(unsigned long long)arg4;
- (void)_t1_getListWithCompletion:(CDUnknownBlockType)arg1;
- (void)submitForm;
- (id)layout;
- (id)doneBarButtonItem;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (void)private_logAction:(id)arg1;
- (id)scribeElement;
- (id)scribeContext;
- (void)durationViewControllerWillDismissWithController:(id)arg1;
- (void)tnl_communicationAgent:(id)arg1 didUpdateReachabilityFromPreviousFlags:(unsigned int)arg2 previousStatus:(long long)arg3 toCurrentFlags:(unsigned int)arg4 currentStatus:(long long)arg5;
- (void)tnl_communicationAgent:(id)arg1 didRegisterObserverWithInitialReachabilityFlags:(unsigned int)arg2 status:(long long)arg3 carrierInfo:(id)arg4 WWANRadioAccessTechnology:(id)arg5 captivePortalStatus:(long long)arg6;
- (void)setSections:(id)arg1;
- (void)viewWillLayoutSubviews;
@property(retain, nonatomic) NSSet *discouragedKeywords;
- (void)deleteKeyword;
@property(readonly, nonatomic, getter=isUpdating) _Bool updating;
- (id)initWithAccount:(id)arg1 keywordString:(id)arg2 delegate:(id)arg3 scribeContext:(id)arg4;
- (id)initWithAccount:(id)arg1 keyword:(id)arg2 delegate:(id)arg3 scribeContext:(id)arg4;
- (id)initWithAccount:(id)arg1 delegate:(id)arg2 scribeContext:(id)arg3;
- (id)initWithForm:(id)arg1 appearance:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
