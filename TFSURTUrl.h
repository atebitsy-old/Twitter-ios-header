//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TFSURTUrlEndpointOptions;

@interface TFSURTUrl : NSObject
{
    // Error parsing type: , name: urlType
    // Error parsing type: , name: url
    // Error parsing type: , name: urtEndpointOptions
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithUrlType:(long long)arg1 url:(id)arg2 urtEndpointOptions:(id)arg3;
@property(nonatomic, readonly) TFSURTUrlEndpointOptions *urtEndpointOptions; // @synthesize urtEndpointOptions;
@property(nonatomic, readonly) NSString *url;
@property(nonatomic, readonly) long long urlType; // @synthesize urlType;

@end

