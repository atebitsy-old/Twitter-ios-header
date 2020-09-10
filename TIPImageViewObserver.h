//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TIPImageViewFetchHelper;

@interface TIPImageViewObserver : UIView
{
    _Bool _didGetAddedToSuperview;
    _Bool _observingSuperview;
    id _appBackgroundObserver;
    id _appForegroundObserver;
    TIPImageViewFetchHelper *_fetchHelper;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(retain, nonatomic) TIPImageViewFetchHelper *fetchHelper; // @synthesize fetchHelper=_fetchHelper;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)arg1;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setOpaque:(_Bool)arg1;
- (void)dealloc;
- (void)_prep;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

