//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PTVGuestRoomAPI : NSObject
{
}

+ (void)ChannelsRequestWithAPIEndPoint:(id)arg1 LoggedInUser:(id)arg2 Completion:(CDUnknownBlockType)arg3;
+ (void)LoadUsersForBroadcasts:(id)arg1 LoggedInUser:(id)arg2 Completion:(CDUnknownBlockType)arg3;
+ (void)TransformBroadcastsIntoGuestRooms:(id)arg1 LoggedInUser:(id)arg2 Completion:(CDUnknownBlockType)arg3;
+ (void)GetBroadcastsWithChannelID:(id)arg1 LoggedInUser:(id)arg2 CleanupOldBroadcasts:(_Bool)arg3 Completion:(CDUnknownBlockType)arg4;
+ (void)GetGuestRoomsWithMode:(unsigned long long)arg1 LoggedInUser:(id)arg2 Completion:(CDUnknownBlockType)arg3;

@end

