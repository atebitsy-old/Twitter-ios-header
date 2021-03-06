//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterAVCore/NSCopying-Protocol.h>

@class TAVAnalyticsAmplifyCardIdentifier, TAVAnalyticsMediaPlatformIdentifier;

@interface TAVAnalyticsMediaIdentifier : NSObject <NSCopying>
{
    _Bool _isScrubbed;
    TAVAnalyticsMediaPlatformIdentifier *_mediaPlatformIdentifier;
    TAVAnalyticsAmplifyCardIdentifier *_amplifyCardIdentifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isScrubbed; // @synthesize isScrubbed=_isScrubbed;
@property(readonly, copy, nonatomic) TAVAnalyticsAmplifyCardIdentifier *amplifyCardIdentifier; // @synthesize amplifyCardIdentifier=_amplifyCardIdentifier;
@property(readonly, copy, nonatomic) TAVAnalyticsMediaPlatformIdentifier *mediaPlatformIdentifier; // @synthesize mediaPlatformIdentifier=_mediaPlatformIdentifier;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAmplifyCardIdentifier:(id)arg1;
- (id)initWithMediaPlatformIdentifier:(id)arg1;
- (id)initAsScrubbedMediaIdentifier;

@end

