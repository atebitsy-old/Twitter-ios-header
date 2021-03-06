//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TFSLRUDictionaryNode : NSObject
{
    id _key;
    id _object;
    unsigned long long _cost;
    TFSLRUDictionaryNode *_next;
    TFSLRUDictionaryNode *_previous;
}

- (void).cxx_destruct;
@property(nonatomic) __weak TFSLRUDictionaryNode *previous; // @synthesize previous=_previous;
@property(retain, nonatomic) TFSLRUDictionaryNode *next; // @synthesize next=_next;
@property(nonatomic) unsigned long long cost; // @synthesize cost=_cost;
@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(retain, nonatomic) id key; // @synthesize key=_key;
- (id)description;

@end

