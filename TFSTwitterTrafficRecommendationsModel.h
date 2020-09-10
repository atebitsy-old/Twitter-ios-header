//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSTwitterCore/NSCoding-Protocol.h>

@class NSArray, NSDate, NSString;

@interface TFSTwitterTrafficRecommendationsModel : NSObject <NSCoding>
{
    NSString *_configurationKey;
    NSString *_configurationValue;
    NSDate *_expirationDate;
    NSDate *_pollAfterDate;
    NSArray *_trafficRecommendations;
}

+ (id)modelWithResponseDictionary:(id)arg1;
+ (id)modelWithResponseData:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *trafficRecommendations; // @synthesize trafficRecommendations=_trafficRecommendations;
@property(readonly, nonatomic) NSDate *pollAfterDate; // @synthesize pollAfterDate=_pollAfterDate;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSString *configurationValue; // @synthesize configurationValue=_configurationValue;
@property(copy, nonatomic) NSString *configurationKey; // @synthesize configurationKey=_configurationKey;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryValue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithExpirationDate:(id)arg1 pollAfterDate:(id)arg2 trafficRecommendations:(id)arg3;

@end
