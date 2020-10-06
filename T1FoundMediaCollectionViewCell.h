//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNCollectionViewCell.h>

#import <T1Twitter/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, T1AnimatedGIFImageView, TFNAnimatedGifImage, TFNFoundMediaFetchOperation, TFNLongPressGestureRecognizer, TFSTwitterFoundMediaObject, TIPImagePipeline, UIColor;
@protocol T1FoundMediaCollectionViewCellDelegate;

@interface T1FoundMediaCollectionViewCell : TFNCollectionViewCell <UIGestureRecognizerDelegate>
{
    _Bool _autoplayEnabled;
    id <T1FoundMediaCollectionViewCellDelegate> _delegate;
    TFSTwitterFoundMediaObject *_foundMediaObject;
    T1AnimatedGIFImageView *_animatedGIFImageView;
    TIPImagePipeline *_imagePipeline;
    TFNLongPressGestureRecognizer *_longPressGestureRecognizer;
    TFNFoundMediaFetchOperation *_fetchOperation;
    TFNAnimatedGifImage *_animatedGIFImage;
    TFNAnimatedGifImage *_stillAnimatedGIFImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TFNAnimatedGifImage *stillAnimatedGIFImage; // @synthesize stillAnimatedGIFImage=_stillAnimatedGIFImage;
@property(retain, nonatomic) TFNAnimatedGifImage *animatedGIFImage; // @synthesize animatedGIFImage=_animatedGIFImage;
@property(retain, nonatomic) TFNFoundMediaFetchOperation *fetchOperation; // @synthesize fetchOperation=_fetchOperation;
@property(readonly, nonatomic) TFNLongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) TIPImagePipeline *imagePipeline; // @synthesize imagePipeline=_imagePipeline;
@property(readonly, nonatomic) T1AnimatedGIFImageView *animatedGIFImageView; // @synthesize animatedGIFImageView=_animatedGIFImageView;
@property(nonatomic, getter=isAutoplayEnabled) _Bool autoplayEnabled; // @synthesize autoplayEnabled=_autoplayEnabled;
@property(retain, nonatomic) TFSTwitterFoundMediaObject *foundMediaObject; // @synthesize foundMediaObject=_foundMediaObject;
@property(nonatomic) __weak id <T1FoundMediaCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)prepareForReuse;
- (void)applyLayoutAttributes:(id)arg1;
- (void)_handleLongPress:(id)arg1;
- (id)_updateStillAnimatedWithNetworkAccessAllowed:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_updateAnimatedGIFWithFirstFrameCompleted:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_animatedGIFImageWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateAnimatedGIFImageView;
@property(retain, nonatomic) UIColor *imageColor;
- (void)stopUpdating;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

