//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import <TFNUI/CAAnimationDelegate-Protocol.h>

@class NSString, TFNAnimatableImageView;

@interface TFNAnimatableImageViewLayer : CALayer <CAAnimationDelegate>
{
    TFNAnimatableImageView *_imageView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak TFNAnimatableImageView *imageView; // @synthesize imageView=_imageView;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

