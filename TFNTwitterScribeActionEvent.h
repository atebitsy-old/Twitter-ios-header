//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, TFSTwitterScribeContext;

@interface TFNTwitterScribeActionEvent : NSObject
{
    TFSTwitterScribeContext *_scribeContext;
    NSString *_action;
}

+ (id)scribeEventWithAction:(id)arg1 scribeContext:(id)arg2;
+ (id)scribeEventWithScribeContext:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(readonly, nonatomic) NSString *eventString;
@property(readonly, nonatomic) NSDictionary *parameters;
@property(readonly, nonatomic) NSString *element;
@property(readonly, nonatomic) NSString *component;
@property(readonly, nonatomic) NSString *section;
@property(readonly, nonatomic) NSString *page;
- (id)init;

@end

