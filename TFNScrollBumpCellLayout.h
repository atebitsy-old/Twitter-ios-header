//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNDataViewCellLayout.h>

@class TFNDataViewController;

@interface TFNScrollBumpCellLayout : TFNDataViewCellLayout
{
    TFNDataViewController *_controller;
    id _layoutState;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id layoutState; // @synthesize layoutState=_layoutState;
@property(readonly, nonatomic) __weak TFNDataViewController *controller; // @synthesize controller=_controller;
- (id)initWithController:(id)arg1 layoutState:(id)arg2;

@end

