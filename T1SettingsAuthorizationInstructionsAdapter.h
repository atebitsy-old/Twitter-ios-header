//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewAdapter.h>

@class T1SettingsAuthorizationInstructionsView;
@protocol T1SettingsAuthorizationInstructionsAdapterDelegate;

@interface T1SettingsAuthorizationInstructionsAdapter : TFNItemsDataViewAdapter
{
    T1SettingsAuthorizationInstructionsView *_prototypeView;
    id <T1SettingsAuthorizationInstructionsAdapterDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <T1SettingsAuthorizationInstructionsAdapterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_t1_actionTapped:(id)arg1;
- (id)_t1_contentViewWithFrame:(struct CGRect)arg1;
- (void)_t1_setPropertiesForContentView:(id)arg1 withCallToAction:(id)arg2;
- (struct CGSize)_t1_getContentViewSizeForItem:(id)arg1 controller:(id)arg2 indexPath:(id)arg3;
- (_Bool)dataViewController:(id)arg1 shouldHighlightItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (struct CGSize)dataViewController:(id)arg1 collectionViewSizeForItem:(id)arg2 constrainedToSize:(struct CGSize)arg3 withOptions:(id)arg4 atIndexPath:(id)arg5;
- (id)dataViewController:(id)arg1 collectionViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (double)dataViewController:(id)arg1 tableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)init;
- (id)initWithDelegate:(id)arg1;

@end

