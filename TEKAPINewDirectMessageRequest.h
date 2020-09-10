//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterExtensionKit/TEKAPIRequest.h>

@class NSArray, NSString;

@interface TEKAPINewDirectMessageRequest : TEKAPIRequest
{
    NSString *_text;
    NSString *_mediaID;
    NSString *_conversationID;
    NSArray *_recipientIDs;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *recipientIDs; // @synthesize recipientIDs=_recipientIDs;
@property(readonly, copy, nonatomic) NSString *conversationID; // @synthesize conversationID=_conversationID;
@property(readonly, copy, nonatomic) NSString *mediaID; // @synthesize mediaID=_mediaID;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
- (id)parameters;
- (id)endpointPath;
- (Class)responseClass;
- (long long)HTTPMethodValue;
- (id)initWithText:(id)arg1 mediaID:(id)arg2 recipientIDs:(id)arg3;
- (id)initWithText:(id)arg1 mediaID:(id)arg2 conversationID:(id)arg3;

@end
