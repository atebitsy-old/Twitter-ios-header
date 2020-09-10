//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1PeopleDiscoveryScribingItemsDataViewController.h>

@class NSArray, T1PeopleDiscoveryState, TFNItemsSectionTransformer, TFNPeopleDiscoveryModule;
@protocol T1PeopleDiscoveryModuleLayoutTransformer;

@interface T1PeopleDiscoveryViewController : T1PeopleDiscoveryScribingItemsDataViewController
{
    _Bool _doneLoading;
    _Bool _isLoading;
    _Bool _scribedScrollToBottom;
    T1PeopleDiscoveryScribingItemsDataViewController *_featuredUsersItemsDataViewController;
    id _errorItem;
    long long _reloadSource;
    NSArray *_modules;
    NSArray *_moduleSections;
    NSArray<T1PeopleDiscoveryModuleLayoutTransformer> *_layoutTransformers;
    TFNItemsSectionTransformer *_sectionTransformer;
    T1PeopleDiscoveryState *_state;
    TFNPeopleDiscoveryModule *_featuredUsersModule;
    NSArray *_featuredUsersModuleItems;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *featuredUsersModuleItems; // @synthesize featuredUsersModuleItems=_featuredUsersModuleItems;
@property(retain, nonatomic) TFNPeopleDiscoveryModule *featuredUsersModule; // @synthesize featuredUsersModule=_featuredUsersModule;
@property(readonly, nonatomic) T1PeopleDiscoveryState *state; // @synthesize state=_state;
@property(readonly, nonatomic) TFNItemsSectionTransformer *sectionTransformer; // @synthesize sectionTransformer=_sectionTransformer;
@property(readonly, nonatomic) NSArray<T1PeopleDiscoveryModuleLayoutTransformer> *layoutTransformers; // @synthesize layoutTransformers=_layoutTransformers;
@property(copy, nonatomic) NSArray *moduleSections; // @synthesize moduleSections=_moduleSections;
@property(copy, nonatomic) NSArray *modules; // @synthesize modules=_modules;
@property(nonatomic) _Bool scribedScrollToBottom; // @synthesize scribedScrollToBottom=_scribedScrollToBottom;
@property(nonatomic) long long reloadSource; // @synthesize reloadSource=_reloadSource;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic, getter=isDoneLoading) _Bool doneLoading; // @synthesize doneLoading=_doneLoading;
@property(retain, nonatomic) id errorItem; // @synthesize errorItem=_errorItem;
- (void)_updateTitle;
- (void)_updateModuleLayoutItem:(id)arg1 withItem:(id)arg2;
- (void)_synchronizationSettingsDidChange:(id)arg1;
- (void)_addressBookAccessLevelChanged:(id)arg1;
- (void)_handleActionUrl:(id)arg1;
- (id)_peopleDiscoveryModulesCommandWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_loadModulesIfNeeded;
- (void)_addModuleTransformerForLayoutTransformer:(id)arg1;
- (void)_addModuleTransformersForLayoutTransformers:(id)arg1;
- (id)_createLayoutTransformers;
- (void)_updateSections;
- (void)_updateFeaturedCarousel;
- (void)_t1_refreshOnBlockOrMuteAction;
- (void)tfn_fontSizeChanged;
- (void)_logScribeEventsForScrollView:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)layoutMetricsDidChange:(id)arg1 to:(id)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
@property(readonly, nonatomic) T1PeopleDiscoveryScribingItemsDataViewController *featuredUsersItemsDataViewController; // @synthesize featuredUsersItemsDataViewController=_featuredUsersItemsDataViewController;
- (void)voiceOverStatusDidChange:(id)arg1;
- (double)contentBreakLength;
- (_Bool)shouldHighlightItem:(id)arg1 atIndexPath:(id)arg2;
- (void)missingDataViewAdapterForItem:(id)arg1 withOptions:(id)arg2;
- (void)update:(_Bool)arg1;
- (double)lengthOfLayoutGuide:(long long)arg1 forEnvironment:(id)arg2;
- (void)errorItemTapped:(id)arg1;
- (id)initWithAccount:(id)arg1 pivotParameters:(id)arg2;

@end

