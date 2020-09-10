//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterCore/TFSTwitterAPICommandWithResponseModelBuilder.h>

@class NSString;

@interface TFSTwitterAPIXAuthOneFactorCommand : TFSTwitterAPICommandWithResponseModelBuilder
{
    NSString *_ident;
    NSString *_simCountryCode;
    NSString *_requestId;
    NSString *_factorType;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *factorType; // @synthesize factorType=_factorType;
@property(copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(copy, nonatomic) NSString *simCountryCode; // @synthesize simCountryCode=_simCountryCode;
@property(copy, nonatomic) NSString *ident; // @synthesize ident=_ident;
- (id)request;
- (id)initWithContext:(id)arg1 accountID:(id)arg2 authContext:(id)arg3 identifier:(id)arg4 factorType:(id)arg5 simCountryCode:(id)arg6 loginVerificationRequestID:(id)arg7 source:(unsigned long long)arg8 responseModelBuilder:(id)arg9 completionBlock:(CDUnknownBlockType)arg10;

@end
