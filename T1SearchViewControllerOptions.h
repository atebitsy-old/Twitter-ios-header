//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, T1SearchResultsParameters, TFSTwitterScribeContext;

@interface T1SearchViewControllerOptions : NSObject
{
    _Bool _searchInputEnabled;
    _Bool _shouldFocusOnSearchField;
    _Bool _shouldShowComposeTooltip;
    TFSTwitterScribeContext *_scribeContext;
    NSString *_scribeParameterContext;
    T1SearchResultsParameters *_parameters;
    unsigned long long _selectedTab;
}

+ (id)viewControllerOptionsFromURLParameters:(id)arg1 urtRequestParameters:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long selectedTab; // @synthesize selectedTab=_selectedTab;
@property(nonatomic) _Bool shouldShowComposeTooltip; // @synthesize shouldShowComposeTooltip=_shouldShowComposeTooltip;
@property(nonatomic) _Bool shouldFocusOnSearchField; // @synthesize shouldFocusOnSearchField=_shouldFocusOnSearchField;
@property(nonatomic) _Bool searchInputEnabled; // @synthesize searchInputEnabled=_searchInputEnabled;
@property(retain, nonatomic) T1SearchResultsParameters *parameters; // @synthesize parameters=_parameters;
@property(copy, nonatomic) NSString *scribeParameterContext; // @synthesize scribeParameterContext=_scribeParameterContext;
@property(copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
- (_Bool)isEqualToSearchViewControllerOptions:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;

@end

