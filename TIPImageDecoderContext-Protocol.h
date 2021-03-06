//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSData;

@protocol TIPImageDecoderContext <NSObject>
@property(readonly, nonatomic) unsigned long long tip_frameCount;
@property(readonly, nonatomic) struct CGSize tip_dimensions;
@property(readonly, nonatomic) NSData *tip_data;
@property(readonly, nonatomic) id tip_config;

@optional
@property(readonly, nonatomic) _Bool tip_hasGPSInfo;
@property(readonly, nonatomic) _Bool tip_hasAlpha;
@property(readonly, nonatomic) _Bool tip_isAnimated;
@property(readonly, nonatomic) _Bool tip_isProgressive;
@end

