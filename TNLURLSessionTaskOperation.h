//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterNetworkLayer/TNLSafeOperation.h>

#import <TwitterNetworkLayer/NSURLSessionDataDelegate-Protocol.h>
#import <TwitterNetworkLayer/NSURLSessionDownloadDelegate-Protocol.h>
#import <TwitterNetworkLayer/TNLContentDecoderClient-Protocol.h>

@class NSData, NSDate, NSDictionary, NSError, NSHTTPURLResponse, NSMutableData, NSObject, NSString, NSURL, NSURLRequest, NSURLSession, NSURLSessionDataTask, NSURLSessionDownloadTask, NSURLSessionTask, NSURLSessionTaskMetrics, NSURLSessionUploadTask, TNLRequestConfiguration, TNLRequestOperation, TNLRequestOperationQueue, TNLResponse, TNLResponseInfo, TNLTemporaryFile;
@protocol OS_dispatch_source, TNLContentDecoder, TNLContentDecoderContext, TNLRequest, TNLURLSessionManager, TNLURLSessionTaskOperationDelegate;

@interface TNLURLSessionTaskOperation : TNLSafeOperation <TNLContentDecoderClient, NSURLSessionDataDelegate, NSURLSessionDownloadDelegate>
{
    id <TNLURLSessionManager> _sessionManager;
    NSURLSession *_URLSession;
    NSURLSessionDataTask *_dataTask;
    NSURLSessionDownloadTask *_downloadTask;
    NSURLSessionUploadTask *_uploadTask;
    NSURLRequest *_taskRequest;
    NSData *_uploadData;
    NSString *_uploadFilePath;
    NSData *_resumeData;
    id <TNLRequest> _hydratedRequest;
    Class _responseClass;
    NSDate *_startDate;
    unsigned long long _startMachTime;
    NSDate *_endDate;
    unsigned long long _endMachTime;
    NSDate *_completeDate;
    unsigned long long _completeMachTime;
    long long _taskResumePriority;
    NSDate *_taskResumeDate;
    NSDate *_responseBodyStartDate;
    NSDate *_responseBodyEndDate;
    NSDate *_completionCallbackDate;
    NSDate *_taskMetricsCallbackDate;
    NSObject<OS_dispatch_source> *_idleTimer;
    NSError *_cachedFailure;
    NSHTTPURLResponse *_cancelledRedirectResponse;
    NSURLSession *_cachedCompletionSession;
    NSURLSessionTask *_cachedCompletionTask;
    NSError *_cachedCompletionError;
    void *_hashContextRef;
    NSData *_hashData;
    long long _hashAlgo;
    NSDictionary *_authChallengeCancelledUserInfo;
    NSMutableData *_storedData;
    TNLTemporaryFile *_tempFile;
    long long _layer8BodyBytesReceived;
    double _responseDecodeLatency;
    NSURLSessionTaskMetrics *_taskMetrics;
    // Error parsing type: Aq, name: _internalState
    struct {
        unsigned int didCancel:1;
        unsigned int didStart:1;
        unsigned int didIncrementExecutionCount:1;
        unsigned int shouldComputeHash:1;
        unsigned int isComputingHash:1;
        unsigned int isFinalizing:1;
        unsigned int useIdleTimeout:1;
        unsigned int useIdleTimeoutForInitialConnection:1;
        unsigned int shouldCaptureResponse:1;
        unsigned int encounteredCompletionBeforeTaskMetrics:1;
        unsigned int shouldDeleteUploadFile:1;
    } _flags;
    _Bool _isObservingURLSessionTask;
    TNLRequestOperationQueue *_requestOperationQueue;
    long long _executionMode;
    long long _requestPriority;
    TNLRequestConfiguration *_requestConfiguration;
    TNLResponseInfo *_responseInfo;
    TNLResponse *_finalResponse;
    NSURLRequest *_hydratedURLRequest;
    TNLRequestOperation<TNLURLSessionTaskOperationDelegate> *_requestOperation;
    NSError *_error;
    NSDictionary *_additionalDecoders;
    id <TNLContentDecoder> _contentDecoder;
    id <TNLContentDecoderContext> _contentDecoderContext;
    NSMutableData *_contentDecoderRecentData;
    id <TNLRequest> _originalRequest;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <TNLRequest> originalRequest; // @synthesize originalRequest=_originalRequest;
@property(readonly, nonatomic) NSMutableData *contentDecoderRecentData; // @synthesize contentDecoderRecentData=_contentDecoderRecentData;
@property(readonly, nonatomic) id <TNLContentDecoderContext> contentDecoderContext; // @synthesize contentDecoderContext=_contentDecoderContext;
@property(readonly, nonatomic) id <TNLContentDecoder> contentDecoder; // @synthesize contentDecoder=_contentDecoder;
@property(readonly, nonatomic) NSDictionary *additionalDecoders; // @synthesize additionalDecoders=_additionalDecoders;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) __weak TNLRequestOperation<TNLURLSessionTaskOperationDelegate> *requestOperation; // @synthesize requestOperation=_requestOperation;
@property(readonly, nonatomic) NSURLRequest *hydratedURLRequest; // @synthesize hydratedURLRequest=_hydratedURLRequest;
@property(readonly, nonatomic) TNLResponse *finalResponse; // @synthesize finalResponse=_finalResponse;
@property(readonly, nonatomic) TNLResponseInfo *responseInfo; // @synthesize responseInfo=_responseInfo;
@property(readonly, nonatomic) TNLRequestConfiguration *requestConfiguration; // @synthesize requestConfiguration=_requestConfiguration;
@property(readonly, nonatomic) long long requestPriority; // @synthesize requestPriority=_requestPriority;
@property(readonly, nonatomic) long long executionMode; // @synthesize executionMode=_executionMode;
@property(readonly, nonatomic) TNLRequestOperationQueue *requestOperationQueue; // @synthesize requestOperationQueue=_requestOperationQueue;
- (_Bool)tnl_dataWasDecoded:(id)arg1 error:(out id *)arg2;
- (void)_network_flushDecoding:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_decodeData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_network_didDecodeData:(id)arg1 URLSession:(id)arg2 dataTask:(id)arg3 error:(id)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)_network_finalizeDidCompleteTask:(id)arg1 URLSession:(id)arg2 error:(id)arg3;
- (void)_finishDecodingWithURLSession:(id)arg1 dataTask:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;
- (void)_network_handleRedirectFromRequest:(id)arg1 response:(id)arg2 toRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_network_willPerformHTTPRedirectionFromRequest:(id)arg1 response:(id)arg2 originalRequest:(id)arg3 suggestedRequest:(id)arg4 chosenRequest:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 taskIsWaitingForConnectivity:(id)arg2;
- (void)handler:(id)arg1 didCancelAuthenticationChallenge:(id)arg2 forURLSession:(id)arg3 context:(id)arg4;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)_handleTaskResponseObservation:(id)arg1 task:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)start;
- (_Bool)isExecuting;
- (_Bool)isCancelled;
- (_Bool)isFinished;
@property(readonly, nonatomic, getter=isComplete) _Bool complete;
@property(readonly, nonatomic, getter=isFinalizing) _Bool finalizing;
- (_Bool)isAsynchronous;
- (_Bool)isConcurrent;
- (void)network_priorityDidChangeForRequestOperation:(id)arg1;
- (id)synthesizeRequestOperation;
- (void)dissassociateRequestOperation:(id)arg1;
- (void)cancelWithSource:(id)arg1 underlyingError:(id)arg2;
- (void)enqueueToOperationQueueIfNeeded:(id)arg1;
- (void)setURLSession:(id)arg1 supportsTaskMetrics:(_Bool)arg2;
- (id)URLSession;
@property(readonly, nonatomic) long long responseSource;
@property(readonly, nonatomic) NSURL *currentURL;
@property(readonly, nonatomic) NSURLRequest *currentURLRequest;
@property(readonly, nonatomic) NSURL *originalURL;
@property(readonly, nonatomic) NSURLRequest *originalURLRequest;
@property(readonly, nonatomic) NSHTTPURLResponse *URLResponse;
@property(readonly, nonatomic) NSURLSessionTask *URLSessionTask;
- (_Bool)_currentRequestHasBody;
@property(readonly, nonatomic) long long state;
- (void)dealloc;
- (id)initWithRequestOperation:(id)arg1 sessionManager:(id)arg2;
- (id)init;
@property(readonly, copy) NSString *description;
- (void)_network_finishHashWithSuccess:(_Bool)arg1;
- (void)_network_updateHashWithData:(id)arg1;
- (void)_network_idleTimerFired;
- (void)_network_restartIdleTimer;
- (void)_network_stopIdleTimer;
- (void)_network_startIdleTimerWithDeferralDuration:(double)arg1;
- (id)_network_populateURLSessionTaskWithRequest:(id)arg1 prototype:(id)arg2 error:(out id *)arg3;
- (void)_network_createTaskWithRequest:(id)arg1 prototype:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_network_updateTimestampsWithState:(long long)arg1;
- (void)_network_transitionToState:(long long)arg1;
- (void)_network_finalizeWithResponseCompletion:(CDUnknownBlockType)arg1;
- (void)_network_finalizeWithState:(long long)arg1;
- (id)_network_appendDecodedData:(id)arg1;
- (void)_network_updateDownloadProgress:(float)arg1;
- (void)_network_updateUploadProgress:(float)arg1;
- (void)_network_didUpdateTotalBytesReceived:(long long)arg1 expectedBytes:(long long)arg2 URLSession:(id)arg3 downloadTask:(id)arg4;
- (void)_network_didReceiveResponse:(id)arg1 URLSession:(id)arg2 task:(id)arg3;
- (void)_network_captureResponseFromTaskIfNeeded:(id)arg1 URLSession:(id)arg2;
- (void)_network_completeCachedCompletionIfPossible;
- (void)_network_complete;
- (void)_network_cancel;
- (void)_network_fail:(id)arg1;
- (void)_network_buildInternalResponse;
- (void)_network_buildResponseInfo;
- (void)_network_updatePriorities;
- (void)_network_didStartTask:(_Bool)arg1;
- (void)_network_resumeSessionTask:(id)arg1;
- (void)_network_willResumeSessionTaskWithRequest:(id)arg1;
- (_Bool)_network_shouldCancel;
- (float)_network_downloadProgress;
- (float)_network_uploadProgress;
- (id)network_taskMetrics;
- (id)network_metaDataWithLowerCaseHeaderFields:(id)arg1;
- (void)_network_setObservingURLSessionTask:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
