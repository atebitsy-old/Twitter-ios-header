//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterCore/TFSTwitterAPICommandWithResponseModelBuilder.h>

@class NSNumber, NSString;

@interface TFSTwitterAPIDirectMessageUserUpdatesCommand : TFSTwitterAPICommandWithResponseModelBuilder
{
    _Bool _triggeredByLivePipeline;
    NSString *_cursor;
    NSString *_activeConversationID;
    NSNumber *_filterLowQuality;
    NSString *_includeQualityParameter;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool triggeredByLivePipeline; // @synthesize triggeredByLivePipeline=_triggeredByLivePipeline;
@property(readonly, copy, nonatomic) NSString *includeQualityParameter; // @synthesize includeQualityParameter=_includeQualityParameter;
@property(readonly, nonatomic) NSNumber *filterLowQuality; // @synthesize filterLowQuality=_filterLowQuality;
@property(readonly, copy, nonatomic) NSString *activeConversationID; // @synthesize activeConversationID=_activeConversationID;
@property(readonly, copy, nonatomic) NSString *cursor; // @synthesize cursor=_cursor;
- (id)request;
- (id)initWithAccountID:(id)arg1 cursor:(id)arg2 activeConversationID:(id)arg3 filterLowQuality:(id)arg4 includeQualityParameter:(id)arg5 triggeredByLivePipeline:(_Bool)arg6 context:(id)arg7 source:(unsigned long long)arg8 responseModelBuilder:(id)arg9 completionBlock:(CDUnknownBlockType)arg10;

@end

