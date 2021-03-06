//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface T1MomentCalculatedMediaRenderLayoutView : UIView
{
    double _maxPinchScale;
    struct CGPoint _pinchOffset;
    struct CATransform3D _originalTransform;
}

@property(nonatomic) struct CATransform3D originalTransform; // @synthesize originalTransform=_originalTransform;
@property(nonatomic) double maxPinchScale; // @synthesize maxPinchScale=_maxPinchScale;
@property(nonatomic) struct CGPoint pinchOffset; // @synthesize pinchOffset=_pinchOffset;
- (struct CGAffineTransform)_translatedAndScaledTransformUsingViewRect:(struct CGRect)arg1 fromRect:(struct CGRect)arg2;
- (void)resetZoomScale;
- (void)zoomToScale:(double)arg1;
- (void)zoomToCalculatedMediaRenderLayout:(id)arg1 animated:(_Bool)arg2 animation:(id)arg3;
- (void)zoomToCalculatedMediaRenderLayout:(id)arg1;

@end

