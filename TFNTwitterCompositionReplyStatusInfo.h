//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/NSCoding-Protocol.h>

@class NSArray, NSDictionary, NSString, TFSTwitterUserReference;

@interface TFNTwitterCompositionReplyStatusInfo : NSObject <NSCoding>
{
    _Bool _reply;
    _Bool _earned;
    long long _statusID;
    long long _retweetID;
    NSString *_displayText;
    TFSTwitterUserReference *_fromUserReference;
    TFSTwitterUserReference *_retweeterReference;
    NSArray *_mentionUserReferences;
    NSArray *_taggedUserReferences;
    TFSTwitterUserReference *_cardAuthorReference;
    NSString *_promotedContentImpressionID;
    NSDictionary *_scribeItem;
    long long _selfThreadID;
}

+ (_Bool)isSelfThreadReplyFromUserID:(long long)arg1 toReplyStatusInfo:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long selfThreadID; // @synthesize selfThreadID=_selfThreadID;
@property(readonly, copy, nonatomic) NSDictionary *scribeItem; // @synthesize scribeItem=_scribeItem;
@property(readonly, copy, nonatomic) NSString *promotedContentImpressionID; // @synthesize promotedContentImpressionID=_promotedContentImpressionID;
@property(readonly, nonatomic) _Bool earned; // @synthesize earned=_earned;
@property(readonly, nonatomic) _Bool reply; // @synthesize reply=_reply;
@property(readonly, nonatomic) TFSTwitterUserReference *cardAuthorReference; // @synthesize cardAuthorReference=_cardAuthorReference;
@property(readonly, copy, nonatomic) NSArray *taggedUserReferences; // @synthesize taggedUserReferences=_taggedUserReferences;
@property(readonly, copy, nonatomic) NSArray *mentionUserReferences; // @synthesize mentionUserReferences=_mentionUserReferences;
@property(readonly, nonatomic) TFSTwitterUserReference *retweeterReference; // @synthesize retweeterReference=_retweeterReference;
@property(readonly, nonatomic) TFSTwitterUserReference *fromUserReference; // @synthesize fromUserReference=_fromUserReference;
@property(readonly, copy, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
@property(readonly, nonatomic) long long retweetID; // @synthesize retweetID=_retweetID;
@property(readonly, nonatomic) long long statusID; // @synthesize statusID=_statusID;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) _Bool hasOnlyStatusID;
- (id)initWithStatus:(id)arg1;
- (id)initWithStatusID:(long long)arg1;
- (id)initWithStatusID:(long long)arg1 retweetID:(long long)arg2 displayText:(id)arg3 fromUserReference:(id)arg4 retweeterReference:(id)arg5 mentionUserReferences:(id)arg6 taggedUserReferences:(id)arg7 cardAuthorReference:(id)arg8 reply:(_Bool)arg9 earned:(_Bool)arg10 promotedContentImpressionID:(id)arg11 scribeItem:(id)arg12 selfThreadID:(long long)arg13;
- (id)init;

@end

