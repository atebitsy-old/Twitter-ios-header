//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIView;

@interface T1TweetComposeTooltipRegistration : NSObject
{
    NSString *_tooltipEventKey;
    UIView *_sourceView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(copy, nonatomic) NSString *tooltipEventKey; // @synthesize tooltipEventKey=_tooltipEventKey;
- (id)initWithTooltipEventKey:(id)arg1 fromView:(id)arg2;

@end

