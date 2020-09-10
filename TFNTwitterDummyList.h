//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterList.h>

#import <T1Twitter/TFNTwitterDummyObject-Protocol.h>

@class NSString;

@interface TFNTwitterDummyList : TFNTwitterList <TFNTwitterDummyObject>
{
    _Bool _loading;
    NSString *_messageText;
    NSString *_messageSubtext;
    long long _dummyObjectType;
    CDUnknownBlockType _actionBlock;
}

+ (id)dummyListOfType:(long long)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(nonatomic) long long dummyObjectType; // @synthesize dummyObjectType=_dummyObjectType;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(copy, nonatomic) NSString *messageSubtext; // @synthesize messageSubtext=_messageSubtext;
@property(copy, nonatomic) NSString *messageText; // @synthesize messageText=_messageText;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

