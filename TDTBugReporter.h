//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterDiagnosticTools/MFMailComposeViewControllerDelegate-Protocol.h>

@class NSMutableArray, NSString, TDTBugReport, TDTViewControllerInfoAttachmentProvider;

@interface TDTBugReporter : NSObject <MFMailComposeViewControllerDelegate>
{
    TDTViewControllerInfoAttachmentProvider *_viewControllerInfoAttachmentProvider;
    NSMutableArray *_providers;
    NSMutableArray *_providerIDs;
    _Bool _busy;
    TDTBugReport *_bugReportTemplate;
}

+ (id)sharedReporter;
- (void).cxx_destruct;
@property(readonly, nonatomic) TDTBugReport *bugReportTemplate; // @synthesize bugReportTemplate=_bugReportTemplate;
- (void)_tdt_removeProviderAtIndex:(unsigned long long)arg1;
- (void)removeAttachmentProviderWithID:(id)arg1;
- (void)removeAttachmentProvider:(id)arg1;
- (id)addAttachmentProvider:(id)arg1;
- (void)_tdt_processProvider:(id)arg1 withContext:(id)arg2 intoSeperateAttachments:(id)arg3 orZipper:(id)arg4 pumpUIBetweenAttachments:(_Bool)arg5;
- (id)_tdt_generateBugReport:(id)arg1 withAttachments:(id)arg2 delegate:(id)arg3;
- (id)_tdt_attemptToSaveBugReportToDiskAndReturnSavedPath:(id)arg1;
- (void)_tdt_sendBugReportDidCompleteWithResult:(long long)arg1 report:(id)arg2 delegate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_tdt_attachDefaultProviders;
- (void)sendBugReport:(id)arg1 withPresentingViewController:(id)arg2 delegate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)triggerBugReport:(long long)arg1 destination:(long long)arg2 fromViewController:(id)arg3 withAttachments:(id)arg4 delegate:(id)arg5;
- (id)init;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

