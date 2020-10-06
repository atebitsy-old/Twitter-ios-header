//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNDirectMessageAPICommandOperation.h>

@class NSString, TFNDirectMessageProcessUserUpdatesResponseOperation;
@protocol TFNDirectMessageTopRequestsOperationDelegate, TFNDirectMessageUserCache;

@interface TFNDirectMessageTopRequestsOperation : TFNDirectMessageAPICommandOperation
{
    _Bool _filterNSFW;
    NSString *_accountID;
    id <TFNDirectMessageUserCache> _userCache;
    id <TFNDirectMessageTopRequestsOperationDelegate> _delegate;
    TFNDirectMessageProcessUserUpdatesResponseOperation *_processResponseOperation;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TFNDirectMessageProcessUserUpdatesResponseOperation *processResponseOperation; // @synthesize processResponseOperation=_processResponseOperation;
@property __weak id <TFNDirectMessageTopRequestsOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool filterNSFW; // @synthesize filterNSFW=_filterNSFW;
@property(readonly, nonatomic) id <TFNDirectMessageUserCache> userCache; // @synthesize userCache=_userCache;
@property(readonly, copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (void)failedWithError:(id)arg1;
- (void)succeededWithObject:(id)arg1;
- (id)makeCommandWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithAccountID:(id)arg1 model:(id)arg2 commandService:(id)arg3 context:(id)arg4 filterNSFW:(_Bool)arg5;

@end

