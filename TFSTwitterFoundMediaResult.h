//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSTwitterCore/NSCoding-Protocol.h>
#import <TFSTwitterCore/NSCopying-Protocol.h>
#import <TFSTwitterCore/TFSModel-Protocol.h>

@class NSArray, NSString, TFSTwitterFoundMediaGroup;

@interface TFSTwitterFoundMediaResult : NSObject <NSCopying, NSCoding, TFSModel>
{
    NSArray *_groups;
    NSArray *_items;
    NSString *_nextCursor;
    NSString *_previousCursor;
    TFSTwitterFoundMediaGroup *_group;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TFSTwitterFoundMediaGroup *group; // @synthesize group=_group;
@property(readonly, copy, nonatomic) NSString *previousCursor; // @synthesize previousCursor=_previousCursor;
@property(readonly, copy, nonatomic) NSString *nextCursor; // @synthesize nextCursor=_nextCursor;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, copy, nonatomic) NSArray *groups; // @synthesize groups=_groups;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSArray *objects;
- (id)initWithJSONDictionary:(id)arg1 group:(id)arg2;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithGroups:(id)arg1 items:(id)arg2 nextCursor:(id)arg3 previousCursor:(id)arg4 group:(id)arg5;
- (id)init;

@end

