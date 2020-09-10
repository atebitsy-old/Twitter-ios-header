//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterAPICommand/TFSTwitterAPICommand.h>

@class NSNumber, NSString;

@interface TFSTwitterAPIAccountLoginVerificationEnrollmentPostCommand : TFSTwitterAPICommand
{
    _Bool _updatePushDestination;
    NSString *_publicKey;
    NSString *_deviceIdentifier;
    NSString *_offlineCode;
    NSNumber *_iterationCount;
    NSString *_environment;
    NSString *_token;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool updatePushDestination; // @synthesize updatePushDestination=_updatePushDestination;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) NSNumber *iterationCount; // @synthesize iterationCount=_iterationCount;
@property(retain, nonatomic) NSString *offlineCode; // @synthesize offlineCode=_offlineCode;
@property(retain, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(retain, nonatomic) NSString *publicKey; // @synthesize publicKey=_publicKey;
- (id)request;
- (id)initWithContext:(id)arg1 accountID:(id)arg2 publicKey:(id)arg3 deviceIdentifier:(id)arg4 offlineCode:(id)arg5 iterationCount:(id)arg6 environment:(id)arg7 token:(id)arg8 updatePushDestination:(_Bool)arg9 completionBlock:(CDUnknownBlockType)arg10;

@end

