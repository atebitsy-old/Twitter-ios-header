//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/NSObject-Protocol.h>

@class TFNLegacyButton, TFNLegacyButtonVisualFacade;

@protocol TFNLegacyButtonAnimationCoordinator <NSObject>
- (void)removeInFlightAnimationOnButton:(TFNLegacyButton *)arg1;
- (_Bool)animateButton:(TFNLegacyButton *)arg1 fromVisualFacade:(TFNLegacyButtonVisualFacade *)arg2 toVisualFacade:(TFNLegacyButtonVisualFacade *)arg3 forTransitionFromState:(unsigned long long)arg4 toState:(unsigned long long)arg5;
@end

