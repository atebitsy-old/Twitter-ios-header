//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RTCPeerConnectionFactory;

@interface RTCMediaSource : NSObject
{
    RTCPeerConnectionFactory *_factory;
    long long _type;
    scoped_refptr_74f9e477 _nativeMediaSource;
}

+ (id)stringForState:(long long)arg1;
+ (long long)sourceStateForNativeState:(int)arg1;
+ (int)nativeSourceStateForState:(long long)arg1;
@property(readonly, nonatomic) scoped_refptr_74f9e477 nativeMediaSource; // @synthesize nativeMediaSource=_nativeMediaSource;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long state;
- (id)initWithFactory:(id)arg1 nativeMediaSource:(scoped_refptr_74f9e477)arg2 type:(long long)arg3;

@end

