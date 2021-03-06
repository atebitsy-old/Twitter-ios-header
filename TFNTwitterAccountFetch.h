//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNTwitterAccountFetchCancellable-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue, TFSTwitterAPICommandCancellable;

@interface TFNTwitterAccountFetch : NSObject <TFNTwitterAccountFetchCancellable>
{
    _Bool _cancelled;
    id <TFSTwitterAPICommandCancellable> _cancellableCommand;
    NSObject<OS_dispatch_queue> *_cancellQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cancellQueue; // @synthesize cancellQueue=_cancellQueue;
@property(retain, nonatomic) id <TFSTwitterAPICommandCancellable> cancellableCommand; // @synthesize cancellableCommand=_cancellableCommand;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
- (void)cancel;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

