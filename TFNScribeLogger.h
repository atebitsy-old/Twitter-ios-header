//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface TFNScribeLogger : NSObject
{
    NSMutableArray *_logs;
}

+ (id)_clientNetworkOperationTypeToString:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_twitterScribeError:(id)arg1;
- (void)_twitterScribeEvent:(id)arg1;
- (void)clear;
- (void)stop;
- (void)start;
- (id)init;
@property(readonly, nonatomic) NSArray *logs;

@end

