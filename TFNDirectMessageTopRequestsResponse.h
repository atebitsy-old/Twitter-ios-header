//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFSModel-Protocol.h>

@class TFNDirectMessageEntriesResponse;

@interface TFNDirectMessageTopRequestsResponse : NSObject <TFSModel>
{
    TFNDirectMessageEntriesResponse *_entriesResponse;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TFNDirectMessageEntriesResponse *entriesResponse; // @synthesize entriesResponse=_entriesResponse;
- (id)initWithJSONDictionary:(id)arg1 userCache:(id)arg2;
- (id)init;

@end

