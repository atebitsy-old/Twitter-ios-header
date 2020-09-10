//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFSTwitterScribeParameters-Protocol.h>

@class NSNumber, NSString, TFNTwitterSuggestsInfo, TFNTwitterTweetDetailsScribeItem;

@interface T1NavigationMetadata : NSObject <TFSTwitterScribeParameters>
{
    NSString *_name;
    NSNumber *_itemType;
    NSNumber *_itemID;
    TFNTwitterSuggestsInfo *_suggestsInfo;
    TFNTwitterTweetDetailsScribeItem *_tweetDetailsScribeItem;
}

+ (id)profileNavigationMetadataWithDataSource:(id)arg1 sourceStatus:(id)arg2;
+ (id)navigationMetadataWithName:(id)arg1 status:(id)arg2;
+ (id)testingNavigationMetadata;
+ (id)emptyNavigationMetadata;
- (void).cxx_destruct;
@property(readonly, nonatomic) TFNTwitterTweetDetailsScribeItem *tweetDetailsScribeItem; // @synthesize tweetDetailsScribeItem=_tweetDetailsScribeItem;
@property(readonly, nonatomic) TFNTwitterSuggestsInfo *suggestsInfo; // @synthesize suggestsInfo=_suggestsInfo;
@property(readonly, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(readonly, nonatomic) NSNumber *itemType; // @synthesize itemType=_itemType;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)JSONDictionary;
- (id)_t1_JSONDictionary;
- (id)initWithName:(id)arg1 itemType:(id)arg2 itemID:(id)arg3 suggestsInfo:(id)arg4 tweetDetailsScribeItem:(id)arg5;
- (id)initWithName:(id)arg1 itemType:(id)arg2 itemID:(id)arg3;
- (id)initWithName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
