//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterAVCore/TAVAnalyticsCTAEvent.h>

@class NSString;

@interface TAVAnalyticsAppStoreCTAEvent : TAVAnalyticsCTAEvent
{
    NSString *_appStoreID;
}

+ (id)private_valueKeys;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *appStoreID; // @synthesize appStoreID=_appStoreID;
- (id)initWithAnalyticsSessionState:(id)arg1 URL:(id)arg2 appStoreID:(id)arg3;
- (id)initWithPlaylistItemKey:(id)arg1 analyticsSessionState:(id)arg2 URL:(id)arg3 appStoreID:(id)arg4;

@end

