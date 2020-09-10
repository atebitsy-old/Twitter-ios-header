//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFSModel-Protocol.h>

@class NSArray;

@interface TFNDirectMessageEventsResponse : NSObject <TFSModel>
{
    NSArray *_events;
    NSArray *_users;
    NSArray *_conversationsMetadata;
    NSArray *_customProfiles;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *customProfiles; // @synthesize customProfiles=_customProfiles;
@property(readonly, copy, nonatomic) NSArray *conversationsMetadata; // @synthesize conversationsMetadata=_conversationsMetadata;
@property(readonly, copy, nonatomic) NSArray *users; // @synthesize users=_users;
@property(readonly, copy, nonatomic) NSArray *events; // @synthesize events=_events;
- (id)initWithJSONDictionary:(id)arg1 userCache:(id)arg2;
- (id)initWithEvents:(id)arg1 users:(id)arg2 conversationsMetadata:(id)arg3 customProfiles:(id)arg4;
- (id)init;

@end

