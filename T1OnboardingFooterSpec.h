//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1OnboardingFooterSpec-Protocol.h>

@class NSString;

@interface T1OnboardingFooterSpec : NSObject <T1OnboardingFooterSpec>
{
    NSString *_nextLabel;
    NSString *_skipLabel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *skipLabel; // @synthesize skipLabel=_skipLabel;
@property(readonly, nonatomic) NSString *nextLabel; // @synthesize nextLabel=_nextLabel;
- (id)initWithNextLabel:(id)arg1 skipLabel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

