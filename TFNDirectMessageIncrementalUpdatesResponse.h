//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, TFNDirectMessageEventsResponse;

@interface TFNDirectMessageIncrementalUpdatesResponse : NSObject
{
    NSString *_cursor;
    TFNDirectMessageEventsResponse *_eventsResponse;
    NSNumber *_lastSeenEventID;
    NSNumber *_trustedLastSeenEventID;
    NSNumber *_untrustedLastSeenEventID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *untrustedLastSeenEventID; // @synthesize untrustedLastSeenEventID=_untrustedLastSeenEventID;
@property(readonly, nonatomic) NSNumber *trustedLastSeenEventID; // @synthesize trustedLastSeenEventID=_trustedLastSeenEventID;
@property(readonly, nonatomic) NSNumber *lastSeenEventID; // @synthesize lastSeenEventID=_lastSeenEventID;
@property(readonly, nonatomic) TFNDirectMessageEventsResponse *eventsResponse; // @synthesize eventsResponse=_eventsResponse;
@property(readonly, nonatomic) NSString *cursor; // @synthesize cursor=_cursor;
- (id)initWithJSONDictionary:(id)arg1 userCache:(id)arg2 filterNSFW:(_Bool)arg3;

@end

