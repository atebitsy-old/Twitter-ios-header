//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface TFSTwitterTypeaheadServiceRequest : NSObject
{
    // Error parsing type: , name: query
    // Error parsing type: , name: resultType
    // Error parsing type: , name: sourceType
    // Error parsing type: , name: prefetch
    // Error parsing type: , name: mediaTaggingInPrefetch
    // Error parsing type: , name: lastCacheAge
    // Error parsing type: , name: geoRequestFilter
    // Error parsing type: , name: contextText
    // Error parsing type: , name: topicType
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithQuery:(id)arg1 resultType:(long long)arg2 sourceType:(unsigned long long)arg3 prefetch:(_Bool)arg4 mediaTaggingInPrefetch:(_Bool)arg5 lastCacheAge:(id)arg6 geoRequestFilter:(_Bool)arg7 contextText:(id)arg8 topicType:(unsigned long long)arg9;
@property(nonatomic, readonly) unsigned long long topicType; // @synthesize topicType;
@property(nonatomic, readonly) NSString *contextText;
@property(nonatomic, readonly) _Bool geoRequestFilter; // @synthesize geoRequestFilter;
@property(nonatomic, readonly) NSDate *lastCacheAge;
@property(nonatomic, readonly) _Bool mediaTaggingInPrefetch; // @synthesize mediaTaggingInPrefetch;
@property(nonatomic, readonly) _Bool prefetch; // @synthesize prefetch;
@property(nonatomic, readonly) unsigned long long sourceType; // @synthesize sourceType;
@property(nonatomic, readonly) long long resultType; // @synthesize resultType;
@property(nonatomic, readonly) NSString *query;

@end

