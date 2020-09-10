//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TIPImagePipelineObserver-Protocol.h>

@class NSString;
@protocol T1ImagePipelineLoadSourceEventObserver;

@interface T1ImagePipelineLoadSourceEventAdapter : NSObject <TIPImagePipelineObserver>
{
    struct {
        unsigned int hit:1;
        unsigned int miss:1;
        unsigned int cancel:1;
        unsigned int fail:1;
    } _observerMethods;
    id <T1ImagePipelineLoadSourceEventObserver> _observer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <T1ImagePipelineLoadSourceEventObserver> observer; // @synthesize observer=_observer;
- (void)_t1_processMetricsInfo:(id)arg1 forOperation:(id)arg2;
- (void)tip_imageFetchOperationDidFinish:(id)arg1;
- (id)initWithObserver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

