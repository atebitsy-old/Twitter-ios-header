//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;
@protocol T1LiveEventViewControllerScrollingHandlerDelegate;

@interface T1LiveEventViewControllerScrollingHandler : NSObject
{
    _Bool _dockingThresholdExceeded;
    id <T1LiveEventViewControllerScrollingHandlerDelegate> _delegate;
    NSNumber *_disabledReason;
    double _dockingThresholdHeaderHeight;
    double _collapsedHeaderHeight;
    double _currentHeaderHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double currentHeaderHeight; // @synthesize currentHeaderHeight=_currentHeaderHeight;
@property(nonatomic) double collapsedHeaderHeight; // @synthesize collapsedHeaderHeight=_collapsedHeaderHeight;
@property(nonatomic) double dockingThresholdHeaderHeight; // @synthesize dockingThresholdHeaderHeight=_dockingThresholdHeaderHeight;
@property(copy, nonatomic) NSNumber *disabledReason; // @synthesize disabledReason=_disabledReason;
@property(readonly, nonatomic, getter=isDockingThresholdExceeded) _Bool dockingThresholdExceeded; // @synthesize dockingThresholdExceeded=_dockingThresholdExceeded;
@property(nonatomic) __weak id <T1LiveEventViewControllerScrollingHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_t1_recalculate;

@end

