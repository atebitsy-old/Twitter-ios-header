//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TFSDatabaseStatistics : NSObject
{
    double _totalReadTransactionDuration;
    long long _concurrentReadTransactionCount;
    double _totalWriteTransactionStartLatency;
    double _totalWriteTransactionDuration;
    long long _readTransactionCount;
    double _maximumReadTransactionDuration;
    long long _maximumConcurrentReadTransactionCount;
    long long _writeTransactionCount;
    double _maximumWriteTransactionStartLatency;
    double _maximumWriteTransactionDuration;
}

@property(readonly, nonatomic) double maximumWriteTransactionDuration; // @synthesize maximumWriteTransactionDuration=_maximumWriteTransactionDuration;
@property(readonly, nonatomic) double maximumWriteTransactionStartLatency; // @synthesize maximumWriteTransactionStartLatency=_maximumWriteTransactionStartLatency;
@property(readonly, nonatomic) long long writeTransactionCount; // @synthesize writeTransactionCount=_writeTransactionCount;
@property(readonly, nonatomic) long long maximumConcurrentReadTransactionCount; // @synthesize maximumConcurrentReadTransactionCount=_maximumConcurrentReadTransactionCount;
@property(readonly, nonatomic) double maximumReadTransactionDuration; // @synthesize maximumReadTransactionDuration=_maximumReadTransactionDuration;
@property(readonly, nonatomic) long long readTransactionCount; // @synthesize readTransactionCount=_readTransactionCount;
- (id)copyAndReset;
- (void)recordCompletedWriteTransactionWithStartLatency:(double)arg1 duration:(double)arg2;
- (void)recordCompletedReadTransactionWithDuration:(double)arg1;
- (void)startReadTransaction;
- (id)serialQueue;
@property(readonly, nonatomic) double averageWriteTransactionDuration;
@property(readonly, nonatomic) double averageWriteTransactionStartLatency;
@property(readonly, nonatomic) double averageReadTransactionDuration;

@end

