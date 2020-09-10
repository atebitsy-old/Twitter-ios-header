//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterNetworkUtilities/TNLRequestRetryPolicyProvider-Protocol.h>

@class NSString;

@interface TNURetryAfterHeaderPolicyProvider : NSObject <TNLRequestRetryPolicyProvider>
{
    _Bool _shouldRetryIfRetryAfterNotPresent;
    _Bool _shouldRetryIfRetryAfterNotValid;
    unsigned long long _permittedRetryCount;
}

@property(readonly, nonatomic) unsigned long long permittedRetryCount; // @synthesize permittedRetryCount=_permittedRetryCount;
@property(readonly, nonatomic) _Bool shouldRetryIfRetryAfterNotValid; // @synthesize shouldRetryIfRetryAfterNotValid=_shouldRetryIfRetryAfterNotValid;
@property(readonly, nonatomic) _Bool shouldRetryIfRetryAfterNotPresent; // @synthesize shouldRetryIfRetryAfterNotPresent=_shouldRetryIfRetryAfterNotPresent;
- (void)tnl_requestOperation:(id)arg1 didStartRetryFromResponse:(id)arg2;
- (void)tnl_requestOperation:(id)arg1 willStartRetryFromResponse:(id)arg2 afterDelay:(double)arg3;
- (double)tnl_delayBeforeRetryForRequestOperation:(id)arg1 withResponse:(id)arg2;
- (_Bool)tnl_shouldRetryRequestOperation:(id)arg1 withResponse:(id)arg2;
- (id)initWithShouldRetryIfNotPresent:(_Bool)arg1 shouldRetryIfNotValid:(_Bool)arg2 permittedRetryCount:(unsigned long long)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

