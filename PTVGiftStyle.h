//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, PTVModel, UIImage;

@interface PTVGiftStyle : NSObject
{
    double _screenScale;
    CDUnknownBlockType _loadCompletedBlock;
    NSString *_identifier;
    double _duration;
    unsigned long long _frameCount;
    unsigned long long _pausedFrame;
    NSURL *_fillSpriteURL;
    NSURL *_borderSpriteURL;
    NSURL *_maskSpriteURL;
    NSURL *_shortcutIconURL;
    UIImage *_fillSprite;
    UIImage *_borderSprite;
    UIImage *_maskSprite;
    UIImage *_shortcutIcon;
    PTVModel *_ptvModel;
    struct CGSize _frameSize;
    struct CGRect _avatarRect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PTVModel *ptvModel; // @synthesize ptvModel=_ptvModel;
@property(readonly, nonatomic) UIImage *shortcutIcon; // @synthesize shortcutIcon=_shortcutIcon;
@property(retain, nonatomic) UIImage *maskSprite; // @synthesize maskSprite=_maskSprite;
@property(retain, nonatomic) UIImage *borderSprite; // @synthesize borderSprite=_borderSprite;
@property(retain, nonatomic) UIImage *fillSprite; // @synthesize fillSprite=_fillSprite;
@property(readonly, nonatomic) NSURL *shortcutIconURL; // @synthesize shortcutIconURL=_shortcutIconURL;
@property(readonly, nonatomic) NSURL *maskSpriteURL; // @synthesize maskSpriteURL=_maskSpriteURL;
@property(readonly, nonatomic) NSURL *borderSpriteURL; // @synthesize borderSpriteURL=_borderSpriteURL;
@property(readonly, nonatomic) NSURL *fillSpriteURL; // @synthesize fillSpriteURL=_fillSpriteURL;
@property(readonly, nonatomic) struct CGRect avatarRect; // @synthesize avatarRect=_avatarRect;
@property(readonly, nonatomic) struct CGSize frameSize; // @synthesize frameSize=_frameSize;
@property(readonly, nonatomic) unsigned long long pausedFrame; // @synthesize pausedFrame=_pausedFrame;
@property(readonly, nonatomic) unsigned long long frameCount; // @synthesize frameCount=_frameCount;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)loadURL:(id)arg1 forImageKVOPath:(id)arg2;
- (void)setImage:(id)arg1 forKVOPath:(id)arg2;
- (void)imageLoadDidError;
- (void)checkIfAllImagesLoaded;
- (void)loadImagesWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool supportsAvatar;
- (id)initWithJSONDictionary:(id)arg1 screenScale:(double)arg2;

@end

