//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSOperation, NSOperationQueue;

@interface TAVConcurrentOperationCoordinator : NSObject
{
    NSOperationQueue *_queue;
    NSArray *_operations;
    NSOperation *_completionOperation;
}

- (void).cxx_destruct;
- (void)execute;
- (id)initWithConcurrentOperations:(id)arg1 completionOperation:(id)arg2;

@end
