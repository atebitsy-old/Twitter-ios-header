//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1ToastViewModel-Protocol.h>

@class NSArray, NSString, T1HydratedPushNotificationPayload, T1PushNotificationRouteAppContext, T1ToastAction, T1ToastScribeContext, UIColor;
@protocol T1PushNotificationRoute, TFSTwitterCanonicalUser;

@interface T1PushNotificationDerivedToast : NSObject <T1ToastViewModel>
{
    _Bool _isDetailTextDuplicateOfMessageText;
    T1HydratedPushNotificationPayload *_hydratedPayload;
    T1PushNotificationRouteAppContext *_routeContext;
    id <T1PushNotificationRoute> _route;
    NSString *_messageText;
    NSArray *_messageTextBoldRanges;
    NSString *_detailText;
    NSString *_iconName;
    id <TFSTwitterCanonicalUser> _user;
    T1ToastAction *_primaryAction;
    T1ToastScribeContext *_scribeContext;
}

+ (id)_t1_toastMessageAndBoldRangesForSupportedHydratedPayload:(id)arg1;
+ (void)toastForPayload:(id)arg1 routeContext:(id)arg2 route:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) T1ToastScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(retain, nonatomic) T1ToastAction *primaryAction; // @synthesize primaryAction=_primaryAction;
@property(retain, nonatomic) id <TFSTwitterCanonicalUser> user; // @synthesize user=_user;
@property(copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(nonatomic) _Bool isDetailTextDuplicateOfMessageText; // @synthesize isDetailTextDuplicateOfMessageText=_isDetailTextDuplicateOfMessageText;
@property(copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(retain, nonatomic) NSArray *messageTextBoldRanges; // @synthesize messageTextBoldRanges=_messageTextBoldRanges;
@property(copy, nonatomic) NSString *messageText; // @synthesize messageText=_messageText;
@property(readonly, nonatomic) id <T1PushNotificationRoute> route; // @synthesize route=_route;
@property(readonly, nonatomic) T1PushNotificationRouteAppContext *routeContext; // @synthesize routeContext=_routeContext;
@property(readonly, nonatomic) T1HydratedPushNotificationPayload *hydratedPayload; // @synthesize hydratedPayload=_hydratedPayload;
@property(readonly, nonatomic) NSString *directMessageConversationID;
@property(readonly, nonatomic) long long hapticFeedbackType;
@property(readonly, nonatomic) UIColor *iconColor;
- (id)initWithHydratedPayload:(id)arg1 routeContext:(id)arg2 route:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) T1ToastAction *alternateAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSArray *detailTextBoldRanges;
@property(readonly, nonatomic) double displayDuration;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly) Class superclass;

@end
