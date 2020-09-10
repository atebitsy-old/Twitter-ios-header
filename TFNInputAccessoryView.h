//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TFSKVODispatcher;
@protocol TFNInputAccessoryViewDelegate;

@interface TFNInputAccessoryView : UIView
{
    id <TFNInputAccessoryViewDelegate> _delegate;
    TFSKVODispatcher *_centerKVODispatcher;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TFSKVODispatcher *centerKVODispatcher; // @synthesize centerKVODispatcher=_centerKVODispatcher;
@property(nonatomic) __weak id <TFNInputAccessoryViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_tfn_main_superViewDidChangePosition:(id)arg1;
- (void)didMoveToSuperview;
- (void)_tfn_inputAccessoryView_initialize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

