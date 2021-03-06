//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1AutocompleteTextInputChangeObserver-Protocol.h>

@class NSArray, NSSet, NSString, T1AutocompleteResultsController, T1ComposeTypeaheadResult, T1TweetComposeSingleTweetViewController, TFNTwitterSearchTypeaheadStore, TFSTokenDictionary;
@protocol T1AutocompleteControllerDelegate, T1AutocompleteTextInput;

@interface T1AutocompleteController : NSObject <T1AutocompleteTextInputChangeObserver>
{
    _Bool _includesContextText;
    _Bool _autocompleting;
    _Bool _forcedNameAutocomplete;
    _Bool _forcedHashtagAutocomplete;
    id <T1AutocompleteControllerDelegate> _delegate;
    long long _autocompleteType;
    TFNTwitterSearchTypeaheadStore *_typeaheadStore;
    unsigned long long _typeaheadSourceType;
    NSString *_autocompletePrefix;
    NSArray *_participants;
    NSSet *_excludedUserIDs;
    id <T1AutocompleteTextInput> _textInput;
    NSString *_typeaheadString;
    T1ComposeTypeaheadResult *_typeaheadResult;
    TFSTokenDictionary *_tokenizedParticipants;
    unsigned long long _numberOfNonDirectionControlsBeforeInsertLocation;
    T1AutocompleteResultsController *_resultsController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) T1AutocompleteResultsController *resultsController; // @synthesize resultsController=_resultsController;
@property(nonatomic) _Bool forcedHashtagAutocomplete; // @synthesize forcedHashtagAutocomplete=_forcedHashtagAutocomplete;
@property(nonatomic) _Bool forcedNameAutocomplete; // @synthesize forcedNameAutocomplete=_forcedNameAutocomplete;
@property(nonatomic) unsigned long long numberOfNonDirectionControlsBeforeInsertLocation; // @synthesize numberOfNonDirectionControlsBeforeInsertLocation=_numberOfNonDirectionControlsBeforeInsertLocation;
@property(retain, nonatomic) TFSTokenDictionary *tokenizedParticipants; // @synthesize tokenizedParticipants=_tokenizedParticipants;
@property(retain, nonatomic) T1ComposeTypeaheadResult *typeaheadResult; // @synthesize typeaheadResult=_typeaheadResult;
@property(copy, nonatomic) NSString *typeaheadString; // @synthesize typeaheadString=_typeaheadString;
@property(readonly, nonatomic) id <T1AutocompleteTextInput> textInput; // @synthesize textInput=_textInput;
@property(copy, nonatomic) NSSet *excludedUserIDs; // @synthesize excludedUserIDs=_excludedUserIDs;
@property(copy, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(nonatomic, getter=isAutocompleting) _Bool autocompleting; // @synthesize autocompleting=_autocompleting;
@property(copy, nonatomic) NSString *autocompletePrefix; // @synthesize autocompletePrefix=_autocompletePrefix;
@property(readonly, nonatomic) _Bool includesContextText; // @synthesize includesContextText=_includesContextText;
@property(readonly, nonatomic) unsigned long long typeaheadSourceType; // @synthesize typeaheadSourceType=_typeaheadSourceType;
@property(readonly, nonatomic) TFNTwitterSearchTypeaheadStore *typeaheadStore; // @synthesize typeaheadStore=_typeaheadStore;
@property(nonatomic) long long autocompleteType; // @synthesize autocompleteType=_autocompleteType;
@property(nonatomic) __weak id <T1AutocompleteControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)autocompleteTextInput:(id)arg1 didChangeWithChangeResult:(id)arg2;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (id)initWithTextView:(id)arg1 typeaheadStore:(id)arg2 typeaheadSourceType:(unsigned long long)arg3 includesContextText:(_Bool)arg4;
- (long long)_t1_autocompleteTypeForRange:(struct _NSRange)arg1 text:(id)arg2;
- (void)insertAutocompleteItem:(id)arg1;
- (void)updateResultsWithWord:(id)arg1;
- (void)_t1_updateAutocompleteWithChangeResult:(id)arg1;
- (void)_t1_forceEnableHashtagAutocomplete;
- (void)_t1_forceEnableNameAutocomplete;
- (void)_t1_forceAutoComplete;
- (void)_t1_startOrUpdate;
- (void)_t1_didBeginAutocompleting;
- (void)_t1_updateResults:(id)arg1;
- (void)endAutocomplete;
- (void)_t1_updateTextInRange:(struct _NSRange)arg1 replacementText:(id)arg2;
- (_Bool)_t1_shouldAutocomplete;
- (void)_t1_updateTypeaheadResults;
@property(readonly, nonatomic) struct _NSRange selectedRange;
@property(readonly, nonatomic) NSString *text;
@property(nonatomic) unsigned long long autocompleteStartIndex;
- (id)initWithTextInput:(id)arg1 typeaheadStore:(id)arg2 typeaheadSourceType:(unsigned long long)arg3 includesContextText:(_Bool)arg4;
- (id)init;
@property(nonatomic) __weak T1TweetComposeSingleTweetViewController *tweetComposeSingleTweetViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

