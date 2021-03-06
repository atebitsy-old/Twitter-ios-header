//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, PTVMergeParticipantUser;

@interface PTVBroadcastModerationEvent : NSObject
{
    NSArray *_mutingModeratorIds;
    NSArray *_unmutingModeratorIds;
    NSString *_messageUserId;
    NSString *_message;
    NSString *_uuid;
    NSArray *_mutingModerators;
    NSArray *_unmutingModerators;
    PTVMergeParticipantUser *_messageUser;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PTVMergeParticipantUser *messageUser; // @synthesize messageUser=_messageUser;
@property(retain, nonatomic) NSArray *unmutingModerators; // @synthesize unmutingModerators=_unmutingModerators;
@property(retain, nonatomic) NSArray *mutingModerators; // @synthesize mutingModerators=_mutingModerators;
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) NSString *messageUserId; // @synthesize messageUserId=_messageUserId;
@property(readonly, nonatomic) NSArray *unmutingModeratorIds; // @synthesize unmutingModeratorIds=_unmutingModeratorIds;
@property(readonly, nonatomic) NSArray *mutingModeratorIds; // @synthesize mutingModeratorIds=_mutingModeratorIds;
- (id)unmutingModeratorsString;
- (id)mutingModeratorsString;
- (void)hydrateWithUser:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

