//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/NSObject-Protocol.h>

@class PTVTableView;

@protocol PTVUserProfilePagingDelegate <NSObject>
- (void)didTransitionPageToViewControllerAtIndex:(unsigned long long)arg1;

@optional
- (void)tableView:(PTVTableView *)arg1 didScrollToYContentOffset:(double)arg2 scrollDirectionUp:(_Bool)arg3;
- (void)willTransitionPageToViewControllerAtIndex:(unsigned long long)arg1;
@end

