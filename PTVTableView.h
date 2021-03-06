//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

@class UIView;
@protocol PTVTableViewFullScreen, PTVTableViewRefresh;

@interface PTVTableView : UITableView
{
    PTVTableView *_weakSelf;
    UIView<PTVTableViewFullScreen> *_fullView;
    id <PTVTableViewRefresh> _tableViewRefreshControl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <PTVTableViewRefresh> tableViewRefreshControl; // @synthesize tableViewRefreshControl=_tableViewRefreshControl;
@property(retain, nonatomic) UIView<PTVTableViewFullScreen> *fullView; // @synthesize fullView=_fullView;
- (void)layoutFullView;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (void)reloadData;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (_Bool)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;

@end

