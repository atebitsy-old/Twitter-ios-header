//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNDirectMessageAttachment.h>

#import <T1Twitter/TFNDirectMessageCardAttachment-Protocol.h>

@class NSDictionary, NSString, TFNTwitterCardData, TFSTwitterEntityURL, TFSTwitterPromotedContent;
@protocol TFNDirectMessageEntry, TFNTwitterCardDataSourceObject><TFNDirectMessageEntry;

@interface TFNDirectMessageCardAttachment : TFNDirectMessageAttachment <TFNDirectMessageCardAttachment>
{
    TFSTwitterEntityURL *_entity;
    TFSTwitterPromotedContent *_promotedContent;
    TFNTwitterCardData *_cardData;
    NSString *_originalCardURI;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *originalCardURI; // @synthesize originalCardURI=_originalCardURI;
@property(retain, nonatomic) TFNTwitterCardData *cardData; // @synthesize cardData=_cardData;
@property(readonly, nonatomic) TFSTwitterPromotedContent *promotedContent; // @synthesize promotedContent=_promotedContent;
@property(retain, nonatomic) TFSTwitterEntityURL *entity; // @synthesize entity=_entity;
- (id)entityForURL:(id)arg1;
@property(readonly, nonatomic) NSDictionary *scribeItem;
@property(readonly, copy, nonatomic) NSString *scribeItemImpressionID;
@property(readonly, nonatomic) id <TFNTwitterCardDataSourceObject><TFNDirectMessageEntry> sourceObject;
@property(readonly, nonatomic) NSDictionary *cardEvent;
- (void)setParameterDataForRequestDictionary:(id)arg1;
- (_Bool)shouldStripEntityFromMessageText:(id)arg1;
- (struct _NSRange)rangeInMessageText;
- (long long)attachmentType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCardData:(id)arg1 originalCardURI:(id)arg2;
- (id)initWithJSONDictionary:(id)arg1 messageText:(id)arg2 entities:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) unsigned long long isCurrentlyFirstImpression;
@property(nonatomic) unsigned long long isDuplicateContentIDInstance;
@property(nonatomic) __weak id <TFNDirectMessageEntry> messageEntry;
@property(readonly, nonatomic) NSString *scribeComponent;
@property(readonly, nonatomic) NSString *scribeElement;
@property(readonly) Class superclass;

@end

