//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface PTVChatHistory : NSObject
{
    NSArray *_messages;
    NSString *_cursor;
}

+ (id)historyFromDict:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *cursor; // @synthesize cursor=_cursor;
@property(readonly, nonatomic) NSArray *messages; // @synthesize messages=_messages;
- (id)initWithMessages:(id)arg1 cursor:(id)arg2;

@end

