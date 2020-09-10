//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSScribe/TFSTwitterLegacyScribeLogMethods-Protocol.h>

@class NSString;
@protocol TFSTwitterLegacyScribeConfiguration, TFSTwitterLegacyScribeOptions, TFSTwitterScribeWriter;

@interface TFSTwitterLegacyScribe : NSObject <TFSTwitterLegacyScribeLogMethods>
{
    id <TFSTwitterScribeWriter> _scribeWriter;
    id <TFSTwitterLegacyScribeConfiguration> _configuration;
    id <TFSTwitterLegacyScribeOptions> _options;
    CDUnknownBlockType _isAppBackgroundedTest;
    NSString *_accountID;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(readonly, copy, nonatomic) CDUnknownBlockType isAppBackgroundedTest; // @synthesize isAppBackgroundedTest=_isAppBackgroundedTest;
@property(readonly, nonatomic) id <TFSTwitterLegacyScribeOptions> options; // @synthesize options=_options;
@property(readonly, nonatomic) id <TFSTwitterLegacyScribeConfiguration> configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) id <TFSTwitterScribeWriter> scribeWriter; // @synthesize scribeWriter=_scribeWriter;
- (void)logJSONEvent:(id)arg1;
- (void)logThriftEvent:(id)arg1 category:(id)arg2;
- (void)logErrorWithType:(id)arg1 functionName:(id)arg2;
- (void)logCrashWithID:(id)arg1 crashName:(id)arg2 crashDetails:(id)arg3 crashTimestamp:(id)arg4;
- (_Bool)shouldLogPerformanceEvent:(id)arg1;
- (void)logPerformanceEvent:(id)arg1 duration:(double)arg2 count:(long long)arg3;
- (void)logPerformanceEvent:(id)arg1 duration:(double)arg2;
- (void)logPerformanceEvent:(id)arg1 duration:(double)arg2 metadata:(id)arg3;
- (void)logPerformanceEvent:(id)arg1 duration:(double)arg2 impressionID:(id)arg3 metadata:(id)arg4 size:(long long)arg5;
- (void)logPerformanceEvent:(id)arg1 duration:(double)arg2 impressionID:(id)arg3 metadata:(id)arg4;
- (void)logPerformanceEvent:(id)arg1 size:(long long)arg2;
- (void)logEvent:(id)arg1 parameters:(id)arg2;
- (void)logAction:(id)arg1 page:(id)arg2 section:(id)arg3 component:(id)arg4 element:(id)arg5 parameters:(id)arg6;
- (void)logAction:(id)arg1 page:(id)arg2 section:(id)arg3 component:(id)arg4 parameters:(id)arg5;
- (void)logAction:(id)arg1 page:(id)arg2 section:(id)arg3 component:(id)arg4 element:(id)arg5;
- (void)logAction:(id)arg1 page:(id)arg2 section:(id)arg3 component:(id)arg4;
- (void)logAction:(id)arg1 page:(id)arg2 section:(id)arg3;
- (id)_scribeThriftGroup;
- (id)_scribeGroup;
- (id)initWithIntegration:(id)arg1 accountID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

