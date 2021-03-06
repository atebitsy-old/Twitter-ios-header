//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TFNFoundMediaFetchOptions : NSObject
{
    _Bool _forceUpdateResultCache;
    _Bool _networkAccessAllowed;
    _Bool _shouldSkipMemoryCaches;
    NSString *_provider;
    NSString *_cursor;
    long long _imageFormat;
    unsigned long long _maximumFramerateOverride;
    CDUnknownBlockType _progressHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(nonatomic) unsigned long long maximumFramerateOverride; // @synthesize maximumFramerateOverride=_maximumFramerateOverride;
@property(nonatomic) _Bool shouldSkipMemoryCaches; // @synthesize shouldSkipMemoryCaches=_shouldSkipMemoryCaches;
@property(nonatomic, getter=isNetworkAccessAllowed) _Bool networkAccessAllowed; // @synthesize networkAccessAllowed=_networkAccessAllowed;
@property(nonatomic) _Bool forceUpdateResultCache; // @synthesize forceUpdateResultCache=_forceUpdateResultCache;
@property(nonatomic) long long imageFormat; // @synthesize imageFormat=_imageFormat;
@property(copy, nonatomic) NSString *cursor; // @synthesize cursor=_cursor;
@property(copy, nonatomic) NSString *provider; // @synthesize provider=_provider;
- (id)init;

@end

