//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1UIActivityDelegate-Protocol.h>

@class T1UIActivityRank, TFNTwitterAccount, TFSTwitterScribeContext;

@interface T1UIActivityManager : NSObject <T1UIActivityDelegate>
{
    T1UIActivityRank *_activityRank;
    TFNTwitterAccount *_account;
    TFSTwitterScribeContext *_scribeContext;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)activity:(id)arg1 didShareTwitterStatus:(id)arg2 success:(_Bool)arg3;
- (void)_t1_scribeActivity:(id)arg1 didShareTwitterStatus:(id)arg2 success:(_Bool)arg3;
- (id)_t1_filterNotSupportedActivities:(id)arg1;
- (id)_t1_rankAvailableActivities:(id)arg1;
- (id)_t1_loadAvailableActivitiesForAccount:(id)arg1 status:(id)arg2 activityParameters:(id)arg3 scribeContext:(id)arg4;
- (id)rankedActivitiesForStatus:(id)arg1 activityParameters:(id)arg2 scribeContext:(id)arg3;
- (id)initWithAccount:(id)arg1 activityRank:(id)arg2;
- (void)configureWithAccount:(id)arg1;

@end

