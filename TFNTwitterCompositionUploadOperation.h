//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSUtilities/TFSDependentConcurrentOperation.h>

#import <T1Twitter/TFNTwitterCompositionUploadAttachmentsOperationDelegate-Protocol.h>
#import <T1Twitter/TFNTwitterCompositionUploadPollOperationDelegate-Protocol.h>
#import <T1Twitter/TFSOperationDependencyResult-Protocol.h>

@class NSError, NSHashTable, NSObject, NSOperationQueue, NSString, TFNTwitterAccount, TFNTwitterComposition, TFNTwitterCompositionUpdateStatusOperation, TFNTwitterCompositionUploadContext, TFNTwitterCompositionUploadOptions, TFNTwitterStatus;
@protocol OS_dispatch_queue, TFNTwitterCompositionUploadOperationDelegate;

@interface TFNTwitterCompositionUploadOperation : TFSDependentConcurrentOperation <TFNTwitterCompositionUploadAttachmentsOperationDelegate, TFNTwitterCompositionUploadPollOperationDelegate, TFSOperationDependencyResult>
{
    _Bool _backgroundTaskSessionExecuting;
    unsigned long long _resultState;
    NSError *_error;
    id <TFNTwitterCompositionUploadOperationDelegate> _delegate;
    double _progress;
    TFNTwitterStatus *_resultStatus;
    TFNTwitterComposition *_composition;
    TFNTwitterAccount *_account;
    TFNTwitterCompositionUploadOptions *_options;
    TFNTwitterCompositionUploadContext *_context;
    NSOperationQueue *_operationQueue;
    NSHashTable *_weakOperationsToCancel;
    NSObject<OS_dispatch_queue> *_backgroundTaskSessionQueue;
    unsigned long long _backgroundTaskIdentifier;
    TFNTwitterCompositionUpdateStatusOperation *_updateStatusOperation;
    NSError *_cancelError;
}

- (void).cxx_destruct;
@property(retain) NSError *cancelError; // @synthesize cancelError=_cancelError;
@property __weak TFNTwitterCompositionUpdateStatusOperation *updateStatusOperation; // @synthesize updateStatusOperation=_updateStatusOperation;
@property(nonatomic, getter=isBackgroundTaskSessionExecuting) _Bool backgroundTaskSessionExecuting; // @synthesize backgroundTaskSessionExecuting=_backgroundTaskSessionExecuting;
@property(nonatomic) unsigned long long backgroundTaskIdentifier; // @synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *backgroundTaskSessionQueue; // @synthesize backgroundTaskSessionQueue=_backgroundTaskSessionQueue;
@property(retain, nonatomic) NSHashTable *weakOperationsToCancel; // @synthesize weakOperationsToCancel=_weakOperationsToCancel;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) TFNTwitterCompositionUploadContext *context; // @synthesize context=_context;
@property(readonly, copy, nonatomic) TFNTwitterCompositionUploadOptions *options; // @synthesize options=_options;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) TFNTwitterComposition *composition; // @synthesize composition=_composition;
@property(retain) TFNTwitterStatus *resultStatus; // @synthesize resultStatus=_resultStatus;
@property double progress; // @synthesize progress=_progress;
@property(nonatomic) __weak id <TFNTwitterCompositionUploadOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSError *resultError; // @synthesize resultError=_error;
@property unsigned long long resultState; // @synthesize resultState=_resultState;
- (void)compositionUploadPollOperation:(id)arg1 didUploadPoll:(id)arg2;
- (void)_tfn_main_updateProgress:(double)arg1;
- (void)compositionUploadAttachmentsOperation:(id)arg1 attachmentProgressDidChange:(id)arg2;
- (void)compositionUploadAttachmentsOperation:(id)arg1 didUploadAttachment:(id)arg2;
- (id)_tfn_background_completeOperationOperation;
- (void)_tfn_background_updateResultState;
- (id)_tfn_background_updateResultStateOperation;
- (void)_tfn_main_enqueueOperations;
- (void)_tfn_main_initializeContext;
- (void)_tfn_main_run;
- (void)_tfn_backgroundTaskSession_endBackgroundTask;
- (void)_tfn_backgroundTaskSession_beginBackgroundTask;
- (void)_tfn_background_endBackgroundTaskSession;
- (void)_tfn_background_resumeBackgroundTaskSession;
- (void)_tfn_background_suspendBackgroundTaskSession;
- (void)_tfn_background_beginBackgroundTaskSession;
- (void)_tfn_notification_applicationDidBecomeActive:(id)arg1;
- (void)completeOperation;
- (void)cancel;
- (void)run;
- (void)cancelWithError:(id)arg1;
- (id)initWithComposition:(id)arg1 account:(id)arg2 options:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

