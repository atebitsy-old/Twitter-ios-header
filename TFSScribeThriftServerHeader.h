//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSScribeThrift/NSCoding-Protocol.h>
#import <TFSScribeThrift/TBase-Protocol.h>

@class NSString, TFSScribeThriftRequestInfo;

@interface TFSScribeThriftServerHeader : NSObject <TBase, NSCoding>
{
    _Bool _clientTimestampMsIsSet;
    _Bool _serverTimestampMsIsSet;
    _Bool _serverIpAddressIsSet;
    _Bool _serverNameIsSet;
    _Bool _serverVersionIsSet;
    _Bool _loggingLibVersionIsSet;
    _Bool _requestInfoIsSet;
    _Bool _transactionIdIsSet;
    _Bool _clientTimezoneOffsetMinIsSet;
    _Bool _serviceNameIsSet;
    short _clientTimezoneOffsetMin;
    long long _clientTimestampMs;
    long long _serverTimestampMs;
    NSString *_serverIpAddress;
    NSString *_serverName;
    NSString *_serverVersion;
    NSString *_loggingLibVersion;
    TFSScribeThriftRequestInfo *_requestInfo;
    NSString *_transactionId;
    NSString *_serviceName;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool serviceNameIsSet; // @synthesize serviceNameIsSet=_serviceNameIsSet;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(readonly, nonatomic) _Bool clientTimezoneOffsetMinIsSet; // @synthesize clientTimezoneOffsetMinIsSet=_clientTimezoneOffsetMinIsSet;
@property(nonatomic) short clientTimezoneOffsetMin; // @synthesize clientTimezoneOffsetMin=_clientTimezoneOffsetMin;
@property(readonly, nonatomic) _Bool transactionIdIsSet; // @synthesize transactionIdIsSet=_transactionIdIsSet;
@property(copy, nonatomic) NSString *transactionId; // @synthesize transactionId=_transactionId;
@property(readonly, nonatomic) _Bool requestInfoIsSet; // @synthesize requestInfoIsSet=_requestInfoIsSet;
@property(retain, nonatomic) TFSScribeThriftRequestInfo *requestInfo; // @synthesize requestInfo=_requestInfo;
@property(readonly, nonatomic) _Bool loggingLibVersionIsSet; // @synthesize loggingLibVersionIsSet=_loggingLibVersionIsSet;
@property(copy, nonatomic) NSString *loggingLibVersion; // @synthesize loggingLibVersion=_loggingLibVersion;
@property(readonly, nonatomic) _Bool serverVersionIsSet; // @synthesize serverVersionIsSet=_serverVersionIsSet;
@property(copy, nonatomic) NSString *serverVersion; // @synthesize serverVersion=_serverVersion;
@property(readonly, nonatomic) _Bool serverNameIsSet; // @synthesize serverNameIsSet=_serverNameIsSet;
@property(copy, nonatomic) NSString *serverName; // @synthesize serverName=_serverName;
@property(readonly, nonatomic) _Bool serverIpAddressIsSet; // @synthesize serverIpAddressIsSet=_serverIpAddressIsSet;
@property(copy, nonatomic) NSString *serverIpAddress; // @synthesize serverIpAddress=_serverIpAddress;
@property(readonly, nonatomic) _Bool serverTimestampMsIsSet; // @synthesize serverTimestampMsIsSet=_serverTimestampMsIsSet;
@property(nonatomic) long long serverTimestampMs; // @synthesize serverTimestampMs=_serverTimestampMs;
@property(readonly, nonatomic) _Bool clientTimestampMsIsSet; // @synthesize clientTimestampMsIsSet=_clientTimestampMsIsSet;
@property(nonatomic) long long clientTimestampMs; // @synthesize clientTimestampMs=_clientTimestampMs;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithClientTimestampMs:(long long)arg1 serverTimestampMs:(long long)arg2 serverIpAddress:(id)arg3 serverName:(id)arg4 serverVersion:(id)arg5 loggingLibVersion:(id)arg6 requestInfo:(id)arg7 transactionId:(id)arg8 clientTimezoneOffsetMin:(short)arg9 serviceName:(id)arg10;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

