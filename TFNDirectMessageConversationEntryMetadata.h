//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TFNDirectMessageConversationEntryMetadata : NSObject
{
    _Bool _affectsSort;
    NSString *_conversationID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool affectsSort; // @synthesize affectsSort=_affectsSort;
@property(readonly, nonatomic) NSString *conversationID; // @synthesize conversationID=_conversationID;
- (id)init;
- (id)initWithConversationID:(id)arg1 affectsSort:(_Bool)arg2;

@end

