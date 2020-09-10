//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsCollectionItemAdapter.h>

#import <T1Twitter/TFNCellVisibilityBroadcasterDelegate-Protocol.h>

@class NSString, T1AdFormatsFeatures, TAVUIAutoplayManager, TFNTwitterAccount, TFNTwitterUnifiedCardSwipeableMediaComponentModel, TFSTwitterScribeContext, TIPImagePipeline;

@interface T1UnifiedCardCarouselCellRowAdapter : TFNItemsCollectionItemAdapter <TFNCellVisibilityBroadcasterDelegate>
{
    TIPImagePipeline *_imagePipeline;
    TFNTwitterUnifiedCardSwipeableMediaComponentModel *_swipeableComponent;
    TFNTwitterAccount *_account;
    TAVUIAutoplayManager *_policyBasedAutoplayManager;
    TFSTwitterScribeContext *_scribeContext;
    T1AdFormatsFeatures *_featureSwitches;
}

- (void).cxx_destruct;
@property(retain, nonatomic) T1AdFormatsFeatures *featureSwitches; // @synthesize featureSwitches=_featureSwitches;
@property(readonly, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(readonly, nonatomic) TAVUIAutoplayManager *policyBasedAutoplayManager; // @synthesize policyBasedAutoplayManager=_policyBasedAutoplayManager;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) TFNTwitterUnifiedCardSwipeableMediaComponentModel *swipeableComponent; // @synthesize swipeableComponent=_swipeableComponent;
@property(readonly, nonatomic) TIPImagePipeline *imagePipeline; // @synthesize imagePipeline=_imagePipeline;
- (id)broadcaster:(id)arg1 focalViewForCell:(id)arg2;
- (void)_t1_setupCellVisibilityBroadcasterForDataViewController:(id)arg1 cell:(id)arg2 indexPath:(id)arg3 viewModel:(id)arg4;
- (struct CGSize)dataViewController:(id)arg1 collectionViewSizeForItem:(id)arg2 constrainedToSize:(struct CGSize)arg3 withOptions:(id)arg4 atIndexPath:(id)arg5;
- (id)dataViewController:(id)arg1 collectionViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)initWithImagePipeline:(id)arg1 swipeableComponent:(id)arg2 account:(id)arg3 policyAutoplayManager:(id)arg4 scribeContext:(id)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

