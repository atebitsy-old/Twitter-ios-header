//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/T1ShareCarouselMenuViewDelegate-Protocol.h>
#import <T1Twitter/T1ToastContentViewable-Protocol.h>

@class NSString, T1ShareCarouselMenuView, UILabel;
@protocol T1ToastContentViewDelegate, T1ToastViewModel;

@interface T1ShareActivityToastContentView : UIView <T1ToastContentViewable, T1ShareCarouselMenuViewDelegate>
{
    T1ShareCarouselMenuView *_carouselMenu;
    UILabel *_messageLabel;
    id <T1ToastViewModel> _toast;
    id <T1ToastContentViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <T1ToastContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <T1ToastViewModel> toast; // @synthesize toast=_toast;
- (void)shareCarouselMenuView:(id)arg1 didSelectActivity:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1 toast:(id)arg2 rankedActivities:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 toast:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

