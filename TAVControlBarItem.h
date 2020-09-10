//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterAVCore/TAVPlaybackObserver-Protocol.h>

@class NSString, UIView;
@protocol TAVPlayerView;

@interface TAVControlBarItem : NSObject <TAVPlaybackObserver>
{
    _Bool _visible;
    NSString *_identifier;
    UIView *_view;
    id <TAVPlayerView> _playerView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TAVPlayerView> playerView; // @synthesize playerView=_playerView;
@property(readonly, nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)player:(id)arg1 didUpdatePlaybackState:(id)arg2;
- (id)init;
- (id)initWithIdentifier:(id)arg1;

@end

