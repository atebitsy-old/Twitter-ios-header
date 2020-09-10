//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

#import <T1Twitter/T1TimelinesHostedViewController-Protocol.h>
#import <T1Twitter/T1TimelinesItemsCarouselItemsContextProvider-Protocol.h>
#import <T1Twitter/T1TimelinesItemsCarouselScrollObserverDelegate-Protocol.h>
#import <T1Twitter/TFNDelegateContentVisibility-Protocol.h>

@class NSString, T1TimelinesCarouselCollectionViewLayout, T1TimelinesItemsCarouselScrollObserver, T1TimelinesItemsCarouselViewControllerScribeHelper, TFNTwitterAccount, TFSTwitterScribeContext;
@protocol T1TimelinesLayoutMetricsSource;

@interface T1TimelinesItemsCarouselViewController : TFNItemsDataViewController <TFNDelegateContentVisibility, T1TimelinesItemsCarouselItemsContextProvider, T1TimelinesItemsCarouselScrollObserverDelegate, T1TimelinesHostedViewController>
{
    NSString *_hostedItemIdentifier;
    id <T1TimelinesLayoutMetricsSource> _layoutMetricsSource;
    TFNTwitterAccount *_account;
    TFSTwitterScribeContext *_scribeContext;
    T1TimelinesItemsCarouselViewControllerScribeHelper *_scribeHelper;
    T1TimelinesItemsCarouselScrollObserver *_scrollObserver;
}

+ (id)stateCache;
- (void).cxx_destruct;
@property(retain, nonatomic) T1TimelinesItemsCarouselScrollObserver *scrollObserver; // @synthesize scrollObserver=_scrollObserver;
@property(retain, nonatomic) T1TimelinesItemsCarouselViewControllerScribeHelper *scribeHelper; // @synthesize scribeHelper=_scribeHelper;
@property(copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(nonatomic) __weak id <T1TimelinesLayoutMetricsSource> layoutMetricsSource; // @synthesize layoutMetricsSource=_layoutMetricsSource;
@property(retain, nonatomic) NSString *hostedItemIdentifier; // @synthesize hostedItemIdentifier=_hostedItemIdentifier;
- (void)scrollViewDidScrollFromInitialIndexPath:(id)arg1 throughIndexPath:(id)arg2 toIndexPath:(id)arg3 endedScrolling:(_Bool)arg4;
@property(readonly, nonatomic) id currentItem;
- (void)scribeScrollSwipeFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
@property(readonly, nonatomic) T1TimelinesCarouselCollectionViewLayout *carouselCollectionViewLayout;
- (_Bool)private_correctlyPositionedAtIndex:(id)arg1;
- (void)private_restorePositionToPreviouslyFocusedIndexPath:(id)arg1;
- (id)indexPathForCellAtContentOffset:(struct CGPoint)arg1;
- (id)indexPathForCellInFocus;
- (id)scribeImpressionParameters;
- (id)scribeElement;
- (id)scribeComponent;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (void)_invalidateCollectionViewLayoutWithSourcedLayoutMetrics;
- (id)calculatedLayoutMetrics;
- (id)calculatedLayoutMetricsForItemAtIndexPath:(id)arg1;
- (void)layoutMetricsDidChange:(id)arg1 to:(id)arg2;
- (struct CGSize)sizeWithLayoutMetrics:(id)arg1;
- (_Bool)handlesPreviewingAtLocation:(struct CGPoint)arg1 inView:(id)arg2;
- (struct UIEdgeInsets)visibleContentInsetForView:(id)arg1;
- (void)restoreRecentState;
- (void)viewDidLayoutSubviews;
- (id)_t1_indexPathsForItemsIncludedInSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithCollectionViewLayout:(id)arg1 account:(id)arg2;
- (id)initWithCollectionViewLayout:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

