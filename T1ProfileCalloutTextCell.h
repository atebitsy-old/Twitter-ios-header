//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTextCell.h>

@class T1ProfileCalloutArrowDecorationView, UIButton;

@interface T1ProfileCalloutTextCell : TFNTextCell
{
    CDUnknownBlockType _dismissBlock;
    T1ProfileCalloutArrowDecorationView *_arrowView;
    UIButton *_dismissButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(retain, nonatomic) T1ProfileCalloutArrowDecorationView *arrowView; // @synthesize arrowView=_arrowView;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
- (void)layoutSubviews;
- (void)_dismissTapAction;
- (id)calculatedLayoutMetrics;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

