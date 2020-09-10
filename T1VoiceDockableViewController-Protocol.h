//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, UIView;
@protocol T1VoiceDockViewControllerContainer, T1VoiceDockableContent;

@protocol T1VoiceDockableViewController
@property(nonatomic) _Bool hasAudioFocus;
@property(readonly, nonatomic) UIView<T1VoiceDockableContent> *dockContentView;
@property(nonatomic) __weak id <T1VoiceDockViewControllerContainer> dockContainer;

@optional
@property(readonly, nonatomic) _Bool allowAutoplay;
@property(readonly, nonatomic) NSString *playerIdentifier;
@property(readonly, nonatomic) _Bool isPlaying;
@property(readonly, nonatomic) _Bool isPaused;
- (void)setMuted:(_Bool)arg1;
- (void)pause;
- (void)play;
@end
