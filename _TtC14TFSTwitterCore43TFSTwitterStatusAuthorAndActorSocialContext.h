//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface _TtC14TFSTwitterCore43TFSTwitterStatusAuthorAndActorSocialContext : NSObject
{
    // Error parsing type: , name: isFollowingAuthor
    // Error parsing type: , name: isFollowedByAuthor
    // Error parsing type: , name: genericSocialContext
    // Error parsing type: , name: relatedUserGroups
}

- (void).cxx_destruct;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithIsFollowingAuthor:(_Bool)arg1 isFollowedByAuthor:(_Bool)arg2 genericSocialContext:(id)arg3 relatedUserGroups:(id)arg4;
- (id)initWithSocialContext:(id)arg1 isFollowedByAuthor:(_Bool)arg2;
- (id)initWithFollowingAuthor:(_Bool)arg1 followedByAuthor:(_Bool)arg2 relatedUserGroups:(id)arg3;
@property(nonatomic, readonly) NSArray *relatedUserGroups;
@property(nonatomic, readonly) NSString *genericSocialContext;
@property(nonatomic, readonly) _Bool isFollowedByAuthor; // @synthesize isFollowedByAuthor;
@property(nonatomic, readonly) _Bool isFollowingAuthor; // @synthesize isFollowingAuthor;

@end
