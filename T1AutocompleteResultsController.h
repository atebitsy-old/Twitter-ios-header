//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, TFNTwitterSearchTypeaheadStore, TFSObjectCache;

@interface T1AutocompleteResultsController : NSObject
{
    NSString *_lastReturnedPartialText;
    long long _lastType;
    NSString *_contextText;
    TFNTwitterSearchTypeaheadStore *_typeaheadStore;
    unsigned long long _sourceTypeForLookup;
    CDUnknownBlockType _resultsBlock;
    NSString *_lastPartialText;
    NSArray *_lastHashtagLocalResults;
    TFSObjectCache *_userResultsCache;
    TFSObjectCache *_hashtagRemoteResultsCache;
}

+ (id)_tfn_keyStringForHashtagRemoteResultsCacheWithQuery:(id)arg1 contextText:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) TFSObjectCache *hashtagRemoteResultsCache; // @synthesize hashtagRemoteResultsCache=_hashtagRemoteResultsCache;
@property(retain, nonatomic) TFSObjectCache *userResultsCache; // @synthesize userResultsCache=_userResultsCache;
@property(copy, nonatomic) NSArray *lastHashtagLocalResults; // @synthesize lastHashtagLocalResults=_lastHashtagLocalResults;
@property(copy, nonatomic) NSString *lastPartialText; // @synthesize lastPartialText=_lastPartialText;
@property(copy, nonatomic) CDUnknownBlockType resultsBlock; // @synthesize resultsBlock=_resultsBlock;
@property(nonatomic) unsigned long long sourceTypeForLookup; // @synthesize sourceTypeForLookup=_sourceTypeForLookup;
@property(nonatomic) __weak TFNTwitterSearchTypeaheadStore *typeaheadStore; // @synthesize typeaheadStore=_typeaheadStore;
- (void)_continueHashtagLookup:(id)arg1 type:(long long)arg2;
- (void)updateAutocompleteResults:(id)arg1 type:(long long)arg2 onlyThatCanBeMediaTagged:(_Bool)arg3 contextText:(id)arg4;
- (id)_autocompleteUsersForPrefetchUsers:(id)arg1 dynamicUsers:(id)arg2 filterForMediaTagging:(_Bool)arg3;
- (id)_autocompleteItemsForTopics:(id)arg1;
- (id)_autocompleteItemsForHashtags:(id)arg1;
- (void)resetAutocompleteResults;
- (id)_prependTypedInHashtagToResults:(id)arg1 partialText:(id)arg2;
- (void)_returnResults:(id)arg1 forPartialText:(id)arg2 type:(long long)arg3;
- (id)init;

@end
