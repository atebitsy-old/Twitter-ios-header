//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TFNTwitterSentinelAccountSanitize : NSObject
{
    long long _sentinelType;
    CDUnknownBlockType _sanitizeBlock;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType sanitizeBlock; // @synthesize sanitizeBlock=_sanitizeBlock;
@property(readonly, nonatomic) long long sentinelType; // @synthesize sentinelType=_sentinelType;
- (id)initWithSentinelType:(long long)arg1 sanitizeBlock:(CDUnknownBlockType)arg2;

@end

