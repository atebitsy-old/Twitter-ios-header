//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface T1DirectMessageParticipantValidator : NSObject
{
    // Error parsing type: , name: existingUserReferences
    // Error parsing type: , name: skipValidationForHydratedUserReferences
    // Error parsing type: , name: directMessageService
    // Error parsing type: , name: permissionCacheByUserID
    // Error parsing type: , name: permissionCacheByUsername
}

- (void).cxx_destruct;
- (id)init;
- (void)validateWithUserReference:(id)arg1 updateBlock:(CDUnknownBlockType)arg2;
- (id)initWithExistingUserReferences:(id)arg1 skipValidationForHydratedUserReferences:(_Bool)arg2 directMessageService:(id)arg3;
- (id)initWithExistingUserReferences:(id)arg1 directMessageService:(id)arg2;
@property(nonatomic, copy) NSSet *existingUserReferences;

@end

