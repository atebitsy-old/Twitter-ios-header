//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNNavigationController.h>

@class TDTBugReport;
@protocol TDTBugReporterDelegate;

@interface T1BugReportWizardController : TFNNavigationController
{
    TDTBugReport *_bugReport;
    CDUnknownBlockType _completion;
    id <TDTBugReporterDelegate> _bugReportDelegate;
}

+ (void)presentWizardFromViewController:(id)arg1 withBugReport:(id)arg2 delegate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
@property(nonatomic) __weak id <TDTBugReporterDelegate> bugReportDelegate; // @synthesize bugReportDelegate=_bugReportDelegate;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) TDTBugReport *bugReport; // @synthesize bugReport=_bugReport;
- (void)_nextStep;
- (void)_cancelWizard;
- (void)_prepareNextButton:(id)arg1;
- (id)initWithRootViewController:(id)arg1;

@end

