//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, UIViewController;

@interface T1ViewControllerDidPresentQueue : NSObject
{
    UIViewController *_viewController;
    NSMutableArray *_blocks;
    NSMutableSet *_activePresentations;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableSet *activePresentations; // @synthesize activePresentations=_activePresentations;
@property(readonly, nonatomic) NSMutableArray *blocks; // @synthesize blocks=_blocks;
@property(readonly, nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void)_t1_dashDidShowViewController:(id)arg1;
- (void)_t1_dashWillShowViewController:(id)arg1;
- (void)_t1_navigationControllerDidShowViewController:(id)arg1;
- (void)_t1_navigationControllerWillShowViewController:(id)arg1;
- (void)_t1_presentedDidPresentViewController:(id)arg1;
- (void)_t1_presentedWillPresentViewController:(id)arg1;
- (void)_t1_performBlocksIfNecessary;
- (void)performBlockAfterPresentation:(CDUnknownBlockType)arg1;
- (id)initWithViewController:(id)arg1;

@end

