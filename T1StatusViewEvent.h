//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString, NSValue, UIView;
@protocol T1BasicStatusView;

@interface T1StatusViewEvent : NSObject
{
    NSValue *_frameValue;
    NSString *_type;
    UIView<T1BasicStatusView> *_statusView;
    UIView *_sourceView;
    NSMutableDictionary *_innerState;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *innerState; // @synthesize innerState=_innerState;
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(readonly, nonatomic) UIView<T1BasicStatusView> *statusView; // @synthesize statusView=_statusView;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
- (void)setStateValue:(id)arg1 forKey:(id)arg2;
@property(readonly, nonatomic) NSDictionary *state;
@property(readonly, nonatomic) struct CGRect sourceViewRect;
@property(nonatomic) struct CGRect frame;
- (id)initWithEventType:(id)arg1 statusView:(id)arg2 sourceView:(id)arg3;

@end

