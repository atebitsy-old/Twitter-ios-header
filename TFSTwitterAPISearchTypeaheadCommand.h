//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterAPICommand/TFSTwitterAPICommand.h>

@interface TFSTwitterAPISearchTypeaheadCommand : TFSTwitterAPICommand
{
    // Error parsing type: , name: resultType
    // Error parsing type: , name: query
    // Error parsing type: , name: count
    // Error parsing type: , name: sourceType
    // Error parsing type: , name: prefetch
    // Error parsing type: , name: mediaTaggingInPrefetch
    // Error parsing type: , name: usersCacheAge
    // Error parsing type: , name: geoRequestFilter
    // Error parsing type: , name: contextText
    // Error parsing type: , name: topicType
}

- (void).cxx_destruct;
- (id)initWithAccountID:(id)arg1 context:(id)arg2 authContext:(id)arg3 networkTransactionMetrics:(id)arg4 source:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (id)request;
- (id)initWithContext:(id)arg1 accountID:(id)arg2 modelContext:(id)arg3 resultType:(long long)arg4 query:(id)arg5 count:(id)arg6 sourceType:(unsigned long long)arg7 prefetch:(_Bool)arg8 mediaTaggingInPrefetch:(_Bool)arg9 usersCacheAge:(id)arg10 geoRequestFilter:(_Bool)arg11 contextText:(id)arg12 topicType:(unsigned long long)arg13 source:(unsigned long long)arg14 completionBlock:(CDUnknownBlockType)arg15;

@end

