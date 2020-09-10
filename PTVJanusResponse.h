//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString;

@interface PTVJanusResponse : NSObject
{
    unsigned long long _result;
    unsigned long long _sessionId;
    NSString *_transactionId;
    NSError *_responseError;
}

+ (id)responseErrorFromJSON:(id)arg1;
+ (unsigned long long)resultTypeFromJSON:(id)arg1;
+ (id)responseFromJSONDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSError *responseError; // @synthesize responseError=_responseError;
@property(retain, nonatomic) NSString *transactionId; // @synthesize transactionId=_transactionId;
@property(nonatomic) unsigned long long sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) unsigned long long result; // @synthesize result=_result;

@end

