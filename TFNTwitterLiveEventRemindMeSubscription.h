//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TFNTwitterLiveEventRemindMeSubscription : NSObject
{
    _Bool _enabled;
    _Bool _subscribed;
    NSString *_notificationID;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *notificationID; // @synthesize notificationID=_notificationID;
@property(nonatomic, getter=isSubscribed) _Bool subscribed; // @synthesize subscribed=_subscribed;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (_Bool)isEqualToRemindMeSubscription:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)toJSONDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithEnabled:(_Bool)arg1 subscribed:(_Bool)arg2 notificationID:(id)arg3;
- (id)initWithCardData:(id)arg1;
- (id)init;

@end

