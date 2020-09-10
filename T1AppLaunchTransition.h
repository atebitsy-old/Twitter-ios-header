//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1LaunchTransitionProvider-Protocol.h>

@class NSString, TFNShapeView, UIView;
@protocol T1AppLaunchTransitionDelegate;

@interface T1AppLaunchTransition : NSObject <T1LaunchTransitionProvider>
{
    _Bool _shouldScaleUpLogoDuringAnimation;
    UIView *_hostView;
    id <T1AppLaunchTransitionDelegate> _delegate;
    TFNShapeView *_mask;
    UIView *_whiteBackgroundView;
    UIView *_blueBackgroundView;
    struct CGPoint _logoOrigin;
    struct CGSize _logoSize;
}

+ (CDStruct_50901d9f)metricsWithHostView:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *blueBackgroundView; // @synthesize blueBackgroundView=_blueBackgroundView;
@property(retain, nonatomic) UIView *whiteBackgroundView; // @synthesize whiteBackgroundView=_whiteBackgroundView;
@property(readonly, nonatomic) _Bool shouldScaleUpLogoDuringAnimation; // @synthesize shouldScaleUpLogoDuringAnimation=_shouldScaleUpLogoDuringAnimation;
@property(readonly, nonatomic) struct CGSize logoSize; // @synthesize logoSize=_logoSize;
@property(readonly, nonatomic) struct CGPoint logoOrigin; // @synthesize logoOrigin=_logoOrigin;
@property(retain, nonatomic) TFNShapeView *mask; // @synthesize mask=_mask;
@property(nonatomic) __weak id <T1AppLaunchTransitionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *hostView; // @synthesize hostView=_hostView;
- (void)_reset;
- (void)_setInitialTransforms;
- (struct CGAffineTransform)_transformFromTransform:(struct CGAffineTransform)arg1;
- (void)runLaunchTransition;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

