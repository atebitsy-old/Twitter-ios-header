//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PTVChatAccessPoint : NSObject
{
    NSString *_endpoint;
    NSString *_accessToken;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(readonly, nonatomic) NSString *endpoint; // @synthesize endpoint=_endpoint;
- (id)initWithEndpoint:(id)arg1 accessToken:(id)arg2;
- (id)init;

@end
