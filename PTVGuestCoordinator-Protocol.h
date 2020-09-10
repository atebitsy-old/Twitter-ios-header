//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/NSObject-Protocol.h>

@class NSArray, NSString, PTVGuestView, PTVMergeParticipantUser, UIViewController;
@protocol PTVGuestCoordinatorDelegate;

@protocol PTVGuestCoordinator <NSObject>
@property(retain, nonatomic) NSArray *guestReconciliationArray;
@property(nonatomic) long long loggedInUserParticipantIndex;
@property(nonatomic) __weak UIViewController<PTVGuestCoordinatorDelegate> *delegate;
- (void)toggleAudioVideoForUserID:(NSString *)arg1;
- (_Bool)canToggleAudioVideoForUserID:(NSString *)arg1;
- (void)didSetPrimaryView:(PTVGuestView *)arg1;
- (PTVMergeParticipantUser *)guestParticipantUserForUserID:(NSString *)arg1;
- (void)renderingDidChange:(_Bool)arg1 withUserID:(NSString *)arg2;
- (long long)participantIndexForUserID:(NSString *)arg1;
- (NSString *)usernameForUserID:(NSString *)arg1;
- (void)shutdownWithCompletion:(void (^)(void))arg1;
- (void)joinBroadcast;
@end

