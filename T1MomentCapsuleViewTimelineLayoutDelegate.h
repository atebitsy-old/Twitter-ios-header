//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1MomentCapsuleViewLayoutDelegate-Protocol.h>

@class NSString, TFNTwitterAccount;

@interface T1MomentCapsuleViewTimelineLayoutDelegate : NSObject <T1MomentCapsuleViewLayoutDelegate>
{
    TFNTwitterAccount *_account;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (struct CGSize)mediaSizeForLayoutMetrics:(id)arg1;
- (id)layoutForMomentViewModel:(id)arg1 bounds:(struct CGRect)arg2 layoutMetrics:(id)arg3;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

