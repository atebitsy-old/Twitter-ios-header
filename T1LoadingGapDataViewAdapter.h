//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewAdapter.h>

@interface T1LoadingGapDataViewAdapter : TFNItemsDataViewAdapter
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: supportsDirectionalLoading
    // Error parsing type: , name: timers
    // Error parsing type: , name: urtGapImpressionCache
}

- (void).cxx_destruct;
- (id)init;
- (void)timerDidFireWithTimer:(id)arg1;
- (void)dataViewController:(id)arg1 didEndDisplayingCell:(id)arg2 forItem:(id)arg3 withOptions:(id)arg4 atIndexPath:(id)arg5;
- (void)dataViewController:(id)arg1 didSelectItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (_Bool)dataViewController:(id)arg1 shouldSelectItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (double)dataViewController:(id)arg1 tableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
@property(nonatomic) _Bool supportsDirectionalLoading; // @synthesize supportsDirectionalLoading;

@end

