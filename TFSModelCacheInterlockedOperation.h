//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class TFSModelCache;

@interface TFSModelCacheInterlockedOperation : NSOperation
{
    TFSModelCache *_modelCache;
    TFSModelCache *_weakModelCache;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak TFSModelCache *weakModelCache; // @synthesize weakModelCache=_weakModelCache;
@property(readonly, nonatomic) TFSModelCache *modelCache; // @synthesize modelCache=_modelCache;
- (void)start;
- (id)initWithModelCache:(id)arg1;

@end
