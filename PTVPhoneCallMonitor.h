//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PeriscopeSDK/CXCallObserverDelegate-Protocol.h>

@class CXCallObserver, NSString, PTVWeakSet;

@interface PTVPhoneCallMonitor : NSObject <CXCallObserverDelegate>
{
    PTVPhoneCallMonitor *_weakSelf;
    PTVWeakSet *_observers;
    CXCallObserver *_callKitObserver;
}

+ (void)RemovePhoneCallObserver:(id)arg1;
+ (void)AddPhoneCallObserver:(id)arg1;
+ (id)SharedInstance;
- (void).cxx_destruct;
- (void)didDisconnectIncomingPhoneCall;
- (void)didAcceptIncomingPhoneCall;
- (void)didReceiveIncomingPhoneCall;
- (void)notifyWithBlock:(CDUnknownBlockType)arg1;
- (void)removePhoneCallObserver:(id)arg1;
- (void)addPhoneCallObserver:(id)arg1;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
