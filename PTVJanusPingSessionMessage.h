//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/PTVJanusMessage.h>

@interface PTVJanusPingSessionMessage : PTVJanusMessage
{
    unsigned long long _sessionId;
}

@property(readonly, nonatomic) unsigned long long sessionId; // @synthesize sessionId=_sessionId;
- (id)JSONDictionary;
- (id)initWithSessionId:(unsigned long long)arg1;

@end

