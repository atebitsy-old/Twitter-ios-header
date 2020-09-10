//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PTVChannel;

@interface PTVWatchContext : NSObject
{
    _Bool _fromPushNotification;
    _Bool _fromURL;
    _Bool _fromPermissions;
    NSString *_feed;
    long long _numWatchers;
    NSString *_previousScreen;
    NSString *_payload;
    PTVChannel *_channel;
    long long _feedLength;
    CDStruct_80b84aa3 _position;
}

- (void).cxx_destruct;
@property(nonatomic) long long feedLength; // @synthesize feedLength=_feedLength;
@property(retain, nonatomic) PTVChannel *channel; // @synthesize channel=_channel;
@property(readonly, nonatomic) NSString *payload; // @synthesize payload=_payload;
@property(readonly, nonatomic) NSString *previousScreen; // @synthesize previousScreen=_previousScreen;
@property(readonly, nonatomic) CDStruct_80b84aa3 position; // @synthesize position=_position;
@property(readonly, nonatomic) long long numWatchers; // @synthesize numWatchers=_numWatchers;
@property(readonly, nonatomic) _Bool fromPermissions; // @synthesize fromPermissions=_fromPermissions;
@property(readonly, nonatomic) _Bool fromURL; // @synthesize fromURL=_fromURL;
@property(readonly, nonatomic) _Bool fromPushNotification; // @synthesize fromPushNotification=_fromPushNotification;
@property(readonly, nonatomic) NSString *feed; // @synthesize feed=_feed;
- (id)toJson64;
- (void)addBroadcastInfo:(id)arg1;
- (id)initWithFeed:(id)arg1 payload:(id)arg2 previousScreen:(id)arg3 position:(CDStruct_80b84aa3)arg4;
- (id)initWithFeed:(id)arg1 payload:(id)arg2 previousScreen:(id)arg3;
- (id)initFromURL;
- (id)initFromInAppAlert;
- (id)initFromPermissions;
- (id)initFromPush;
- (id)init;

@end

