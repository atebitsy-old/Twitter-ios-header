//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TFSLegacyModelStatusHydrationTracker : NSObject
{
    // Error parsing type: , name: statusUserIDs
    // Error parsing type: , name: userIDs
}

- (void).cxx_destruct;
- (long long)quotedUserIDForIndex:(long long)arg1;
- (long long)retweetedUserIDForIndex:(long long)arg1;
- (long long)userIDForIndex:(long long)arg1;
- (void)addStatusWithUserID:(long long)arg1 retweetedUserID:(long long)arg2 quotedUserID:(long long)arg3;
- (id)init;

@end

