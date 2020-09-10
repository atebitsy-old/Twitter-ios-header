//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSString, TBCPeriscopeAccount, TFSTwitterAPICommandService;
@protocol TFSTwitterAPICommandContext;

@protocol TBCTwitterAccount <NSObject>
@property(readonly, nonatomic) id <TFSTwitterAPICommandContext> tbc_apiCommandContext;
@property(readonly, nonatomic) TFSTwitterAPICommandService *tbc_apiCommandService;
@property(readonly, nonatomic) TBCPeriscopeAccount *periscopeAccount;
@property(readonly, nonatomic) _Bool isPeriscopeAuthenticationAllowed;
@property(readonly, copy, nonatomic) NSString *accountID;
@end
