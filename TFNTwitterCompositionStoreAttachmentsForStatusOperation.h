//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSUtilities/TFSDependentConcurrentOperation.h>

#import <T1Twitter/TFNTwitterCompositionUpdateStatusDependency-Protocol.h>

@class NSArray, NSOperationQueue, NSString, TFNTwitterCompositionUploadContext, TFNTwitterStatus;

@interface TFNTwitterCompositionStoreAttachmentsForStatusOperation : TFSDependentConcurrentOperation <TFNTwitterCompositionUpdateStatusDependency>
{
    TFNTwitterStatus *_status;
    NSArray *_attachments;
    TFNTwitterCompositionUploadContext *_context;
    NSOperationQueue *_operationQueue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) TFNTwitterCompositionUploadContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property(retain) TFNTwitterStatus *status; // @synthesize status=_status;
- (id)_tfn_background_createCompleteOperationsOperation;
- (id)_tfn_main_createStoreVideoOperationWithAttachment:(id)arg1 mediaEntity:(id)arg2;
- (id)_tfn_main_createStoreImageOperationWithAttachment:(id)arg1 mediaEntity:(id)arg2;
- (void)_tfn_main_run;
- (void)run;
- (void)dealloc;
- (id)initWithAttachments:(id)arg1 context:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
