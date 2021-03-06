//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNCellVisibilityListener-Protocol.h>

@class NSString, T1AdFormatsFeatures;

@interface T1UnifiedCardDestinationDNSWarmingListener : NSObject <TFNCellVisibilityListener>
{
    _Bool _isVisible;
    T1AdFormatsFeatures *_features;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isVisible; // @synthesize isVisible=_isVisible;
@property(readonly, nonatomic) T1AdFormatsFeatures *features; // @synthesize features=_features;
- (void)cellDidEndDisplayingFromViewport:(id)arg1 inDataViewController:(id)arg2;
- (void)cellDidDisplay:(id)arg1 inDataViewController:(id)arg2 withVisibilityPercentage:(double)arg3 visibilityState:(unsigned long long)arg4;
- (id)initWithAdFormatsFeatures:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

