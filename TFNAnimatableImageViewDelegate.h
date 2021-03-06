//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFNUI/CAAnimationDelegate-Protocol.h>

@class NSString, TFNAnimatableImageView;

@interface TFNAnimatableImageViewDelegate : NSObject <CAAnimationDelegate>
{
    TFNAnimatableImageView *_imageView;
    id _originalDelegate;
    NSString *_animationKey;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) NSString *animationKey; // @synthesize animationKey=_animationKey;
@property(readonly, nonatomic) id originalDelegate; // @synthesize originalDelegate=_originalDelegate;
@property(readonly, nonatomic) TFNAnimatableImageView *imageView; // @synthesize imageView=_imageView;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)initWithImageView:(id)arg1 originalDelegate:(id)arg2 animationKey:(id)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

