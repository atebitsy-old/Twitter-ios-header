//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsTableRowAdapter.h>

#import <T1Twitter/T1PeopleDiscoveryScrollBumpCellDataSource-Protocol.h>
#import <T1Twitter/T1PeopleDiscoveryScrollBumpCellDelegate-Protocol.h>

@class NSMutableDictionary, NSString;

@interface T1PeopleDiscoveryScrollBumpTableRowAdapter : TFNItemsTableRowAdapter <T1PeopleDiscoveryScrollBumpCellDataSource, T1PeopleDiscoveryScrollBumpCellDelegate>
{
    NSMutableDictionary *_scrollBumpCellStates;
}

+ (id)keyForScrollBumpCell:(id)arg1;
- (void).cxx_destruct;
- (void)scrollBumpCell:(id)arg1 didScrollToPageAtIndex:(unsigned long long)arg2 direction:(long long)arg3;
- (id)scrollBumpCell:(id)arg1 viewForPageAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfPagesForScrollBumpCell:(id)arg1;
- (id)scrollBumpCellWithClass:(Class)arg1 tableView:(id)arg2 reuseIdentifier:(id)arg3 indexPath:(id)arg4 initialization:(CDUnknownBlockType)arg5;
- (void)dataViewController:(id)arg1 willDisplayCell:(id)arg2 forItem:(id)arg3 withOptions:(id)arg4 atIndexPath:(id)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

