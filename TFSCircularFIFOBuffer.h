//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSUtilities/NSFastEnumeration-Protocol.h>

@class NSMutableArray;
@protocol TFSCircularFIFOBufferDelegate;

@interface TFSCircularFIFOBuffer : NSObject <NSFastEnumeration>
{
    unsigned long long _mutatingInteger;
    unsigned long long _start;
    NSMutableArray *_buffer;
    unsigned long long _size;
    unsigned long long _count;
    id <TFSCircularFIFOBufferDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TFSCircularFIFOBufferDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
@property(readonly, nonatomic) unsigned long long size; // @synthesize size=_size;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)removeAllObjects;
- (id)allObjects;
- (id)peekObject;
- (id)removeObject;
- (void)addObject:(id)arg1;
- (id)init;
- (id)initWithSize:(unsigned long long)arg1;

@end

