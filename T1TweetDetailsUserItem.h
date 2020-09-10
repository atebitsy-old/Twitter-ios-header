//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, TFNTwitterAccount, TFNTwitterStatus, TFNTwitterUser;

@interface T1TweetDetailsUserItem : NSObject
{
    _Bool _hasSocialProofItem;
    _Bool _hasConversationContextItem;
    _Bool _shouldShowUserRecommendation;
    TFNTwitterUser *_user;
    TFNTwitterStatus *_status;
    TFNTwitterAccount *_account;
    NSDictionary *_scribeItem;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldShowUserRecommendation; // @synthesize shouldShowUserRecommendation=_shouldShowUserRecommendation;
@property(readonly, nonatomic) _Bool hasConversationContextItem; // @synthesize hasConversationContextItem=_hasConversationContextItem;
@property(readonly, nonatomic) _Bool hasSocialProofItem; // @synthesize hasSocialProofItem=_hasSocialProofItem;
@property(readonly, nonatomic) NSDictionary *scribeItem; // @synthesize scribeItem=_scribeItem;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) TFNTwitterStatus *status; // @synthesize status=_status;
@property(readonly, nonatomic) TFNTwitterUser *user; // @synthesize user=_user;
- (id)scribeItemImpressionID;
- (id)initWithUser:(id)arg1 status:(id)arg2 account:(id)arg3 hasConversationContextItem:(_Bool)arg4 hasSocialProofItem:(_Bool)arg5 shouldShowUserRecommendation:(_Bool)arg6 scribeItem:(id)arg7;
- (id)init;

@end

