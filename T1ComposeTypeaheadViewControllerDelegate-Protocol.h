//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1ComposeTypeaheadViewController, UIScrollView;
@protocol T1AutocompleteResultItem;

@protocol T1ComposeTypeaheadViewControllerDelegate <NSObject>
- (void)composeTypeaheadViewController:(T1ComposeTypeaheadViewController *)arg1 scrollViewDidScroll:(UIScrollView *)arg2;
- (void)composeTypeaheadViewController:(T1ComposeTypeaheadViewController *)arg1 didSelectItem:(id <T1AutocompleteResultItem>)arg2;
@end

