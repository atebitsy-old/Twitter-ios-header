//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterCore/TFSTwitterAPIPaginatedUsersBaseRequest.h>

@interface TFSTwitterAPIFollowersListRequest : TFSTwitterAPIPaginatedUsersBaseRequest
{
}

+ (unsigned long long)supportedAuthenticationTypes;
+ (id)endpointPath;
- (id)initWithScreenName:(id)arg1 cursor:(id)arg2 allowPromotedContent:(_Bool)arg3 skipStatus:(_Bool)arg4 context:(id)arg5 responseModelBuilder:(id)arg6;
- (id)initWithUserID:(id)arg1 cursor:(id)arg2 allowPromotedContent:(_Bool)arg3 skipStatus:(_Bool)arg4 context:(id)arg5 responseModelBuilder:(id)arg6;

@end

