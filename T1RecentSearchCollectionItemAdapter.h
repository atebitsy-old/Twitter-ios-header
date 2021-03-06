//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsCollectionItemAdapter.h>

@class TIPImagePipeline;
@protocol T1RecentSearchCollectionItemAdapterDelegate;

@interface T1RecentSearchCollectionItemAdapter : TFNItemsCollectionItemAdapter
{
    TIPImagePipeline *_imagePipeline;
    id <T1RecentSearchCollectionItemAdapterDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <T1RecentSearchCollectionItemAdapterDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TIPImagePipeline *imagePipeline; // @synthesize imagePipeline=_imagePipeline;
- (void)dataViewController:(id)arg1 didSelectItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 collectionViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)init;
- (id)initWithImagePipeline:(id)arg1;

@end

