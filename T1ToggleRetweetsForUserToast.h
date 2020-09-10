//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1ToastViewModel-Protocol.h>

@class NSArray, NSString, T1ToastAction, T1ToastScribeContext, TFNTwitterAccount, TFSTwitterPromotedContent, TFSTwitterUserReference, UIColor;
@protocol TFSTwitterCanonicalUser;

@interface T1ToggleRetweetsForUserToast : NSObject <T1ToastViewModel>
{
    _Bool _retweetsEnabled;
    _Bool _showUndo;
    NSString *_iconName;
    T1ToastAction *_alternateAction;
    TFSTwitterUserReference *_userReference;
    TFNTwitterAccount *_account;
    TFSTwitterPromotedContent *_promotedContent;
}

+ (id)retweetsDisabledToastWithUserReference:(id)arg1 account:(id)arg2 promotedContent:(id)arg3 showUndo:(_Bool)arg4;
+ (id)retweetsEnabledToastWithUserReference:(id)arg1 account:(id)arg2 promotedContent:(id)arg3 showUndo:(_Bool)arg4;
- (void).cxx_destruct;
@property(nonatomic) _Bool showUndo; // @synthesize showUndo=_showUndo;
@property(nonatomic) _Bool retweetsEnabled; // @synthesize retweetsEnabled=_retweetsEnabled;
@property(retain, nonatomic) TFSTwitterPromotedContent *promotedContent; // @synthesize promotedContent=_promotedContent;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) TFSTwitterUserReference *userReference; // @synthesize userReference=_userReference;
@property(retain, nonatomic) T1ToastAction *alternateAction; // @synthesize alternateAction=_alternateAction;
@property(copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(readonly, copy, nonatomic) NSString *messageText;
- (id)initWithUserReference:(id)arg1 account:(id)arg2 promotedContent:(id)arg3 retweetsEnabled:(_Bool)arg4 showUndo:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *detailText;
@property(readonly, nonatomic) NSArray *detailTextBoldRanges;
@property(readonly, nonatomic) double displayDuration;
@property(readonly, nonatomic) long long hapticFeedbackType;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIColor *iconColor;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSArray *messageTextBoldRanges;
@property(readonly, nonatomic) T1ToastAction *primaryAction;
@property(readonly, nonatomic) T1ToastScribeContext *scribeContext;
@property(readonly) Class superclass;
@property(readonly, nonatomic) id <TFSTwitterCanonicalUser> user;

@end

