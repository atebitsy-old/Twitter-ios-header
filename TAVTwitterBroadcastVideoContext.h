//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TAVTwitterVideoContext.h>

@class NSString, NSURL, TBCPeriscopeLifecycleController, TFSTwitterBroadcast;

@interface TAVTwitterBroadcastVideoContext : TAVTwitterVideoContext
{
    _Bool _latestReplayPlaylist;
    TBCPeriscopeLifecycleController *_lifecycleController;
    TFSTwitterBroadcast *_broadcast;
    NSString *_lifecycleToken;
    NSString *_chatToken;
    NSURL *_shareURL;
    NSString *_chatPermissionType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool latestReplayPlaylist; // @synthesize latestReplayPlaylist=_latestReplayPlaylist;
@property(copy, nonatomic) NSString *chatPermissionType; // @synthesize chatPermissionType=_chatPermissionType;
@property(copy, nonatomic) NSURL *shareURL; // @synthesize shareURL=_shareURL;
@property(copy, nonatomic) NSString *chatToken; // @synthesize chatToken=_chatToken;
@property(copy, nonatomic) NSString *lifecycleToken; // @synthesize lifecycleToken=_lifecycleToken;
@property(readonly, nonatomic) TFSTwitterBroadcast *broadcast; // @synthesize broadcast=_broadcast;
@property(retain, nonatomic) TBCPeriscopeLifecycleController *lifecycleController; // @synthesize lifecycleController=_lifecycleController;
- (id)initWithVideoType:(id)arg1 broadcast:(id)arg2 ctaInfo:(id)arg3 latestReplayPlaylist:(_Bool)arg4;

@end

