//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterCore/TFSTwitterOnboardingSubtask.h>

@class NSArray, TFSTwitterOnboardingNavigationLink;

@interface TFSTwitterOnboardingUpdateUsersSubtask : TFSTwitterOnboardingSubtask
{
    NSArray *_users;
    TFSTwitterOnboardingNavigationLink *_nextLink;
}

+ (id)typeNames;
- (void).cxx_destruct;
@property(readonly, nonatomic) TFSTwitterOnboardingNavigationLink *nextLink; // @synthesize nextLink=_nextLink;
@property(readonly, nonatomic) NSArray *users; // @synthesize users=_users;
- (id)initWithJSONDictionary:(id)arg1 subtaskID:(id)arg2 typeName:(id)arg3 backNavigationType:(long long)arg4 backNavigationLink:(id)arg5 error:(id *)arg6;

@end

