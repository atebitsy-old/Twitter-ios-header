//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewAdapter.h>

#import <TFNUI/TFNLayoutGuidesSource-Protocol.h>

@class NSString;

@interface TFNHostedViewControllerDataViewAdapter : TFNItemsDataViewAdapter <TFNLayoutGuidesSource>
{
}

- (void)dataViewController:(id)arg1 addDirectlyOwnedViewControllersToMutableArray:(id)arg2 forItems:(id)arg3;
- (id)dataViewController:(id)arg1 cellLayoutObjectIdentifierForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 cellLayoutForItem:(id)arg2 withObjectIdentifier:(id)arg3 options:(id)arg4 previousLayout:(id)arg5 atIndexPath:(id)arg6;
- (void)dataViewController:(id)arg1 didEndDisplayingCell:(id)arg2 forItem:(id)arg3 withOptions:(id)arg4 atIndexPath:(id)arg5;
- (void)dataViewController:(id)arg1 willDisplayCell:(id)arg2 forItem:(id)arg3 withOptions:(id)arg4 atIndexPath:(id)arg5;
- (id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 cachedHostedControllerForItem:(id)arg2 cell:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 hostedControllerForItem:(id)arg2 atIndexPath:(id)arg3;
- (double)lengthOfLayoutGuide:(long long)arg1 forEnvironment:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

