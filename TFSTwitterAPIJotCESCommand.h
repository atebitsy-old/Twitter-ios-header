//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterAPICommand/TFSTwitterAPICommand.h>

@class NSData;
@protocol TFSModelBuilder;

@interface TFSTwitterAPIJotCESCommand : TFSTwitterAPICommand
{
    _Bool _debug;
    NSData *_data;
    id <TFSModelBuilder> _modelBuilder;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <TFSModelBuilder> modelBuilder; // @synthesize modelBuilder=_modelBuilder;
@property(nonatomic) _Bool debug; // @synthesize debug=_debug;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (id)request;
- (id)initWithAccountID:(id)arg1 data:(id)arg2 context:(id)arg3 modelBuilder:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)initWithAccountID:(id)arg1 context:(id)arg2 authContext:(id)arg3 networkTransactionMetrics:(id)arg4 source:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;

@end

