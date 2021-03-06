//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSOperation, TASActionExecutionMetrics, TASActionService;
@protocol TASAction, TASActionRelationship;

@protocol TASActionObserver

@optional
- (void)actionService:(TASActionService *)arg1 completedAction:(id <TASAction>)arg2 operation:(NSOperation *)arg3 metrics:(TASActionExecutionMetrics *)arg4;
- (void)actionService:(TASActionService *)arg1 willExecuteAction:(id <TASAction>)arg2 operation:(NSOperation *)arg3;
- (void)actionService:(TASActionService *)arg1 didApplyRelationship:(id <TASActionRelationship>)arg2 toAction:(id <TASAction>)arg3 operation:(NSOperation *)arg4 owningAction:(id <TASAction>)arg5 owningOperation:(NSOperation *)arg6;
- (void)actionService:(TASActionService *)arg1 didReceiveAction:(id <TASAction>)arg2 operation:(NSOperation *)arg3;
@end

