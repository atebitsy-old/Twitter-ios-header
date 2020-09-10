//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class TDTBugReport, TDTBugReporter;

@protocol TDTBugReporterDelegate <NSObject>

@optional
- (void)bugReporter:(TDTBugReporter *)arg1 sendBugReport:(TDTBugReport *)arg2 didCompleteWithResult:(long long)arg3;
- (void)bugReporter:(TDTBugReporter *)arg1 didTriggerBugReport:(TDTBugReport *)arg2;
- (id)contextForBugReporter:(TDTBugReporter *)arg1;
@end

