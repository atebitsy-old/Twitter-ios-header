//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TIPImageCodec-Protocol.h>

@class NSString;
@protocol TIPImageDecoder, TIPImageEncoder;

@interface TIPXWebPCodec : NSObject <TIPImageCodec>
{
    id <TIPImageDecoder> _tip_decoder;
    id <TIPImageEncoder> _tip_encoder;
}

+ (_Bool)hasAnimationDecoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <TIPImageEncoder> tip_encoder; // @synthesize tip_encoder=_tip_encoder;
@property(readonly, nonatomic) id <TIPImageDecoder> tip_decoder; // @synthesize tip_decoder=_tip_decoder;
- (id)initWithPreferredCodec:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

