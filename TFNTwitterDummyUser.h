//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNTwitterDummyObject-Protocol.h>

@class NSString;

@interface TFNTwitterDummyUser : NSObject <TFNTwitterDummyObject>
{
    _Bool _loading;
    long long _dummyObjectType;
    NSString *_messageText;
    NSString *_messageSubtext;
    CDUnknownBlockType _actionBlock;
}

+ (id)new;
+ (id)dummyUserOfType:(long long)arg1 emptyStateMessage:(id)arg2;
+ (id)dummyUserOfType:(long long)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(copy, nonatomic) NSString *messageSubtext; // @synthesize messageSubtext=_messageSubtext;
@property(copy, nonatomic) NSString *messageText; // @synthesize messageText=_messageText;
@property(nonatomic) long long dummyObjectType; // @synthesize dummyObjectType=_dummyObjectType;
- (long long)compare:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)init;
- (id)initWithType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

