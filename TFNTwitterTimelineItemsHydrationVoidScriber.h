//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNTwitterTimelineItemsHydrationScriber-Protocol.h>

@interface TFNTwitterTimelineItemsHydrationVoidScriber : NSObject <TFNTwitterTimelineItemsHydrationScriber>
{
}

- (void)hydrationCS2FallbackSuccess;
- (void)hydrationCS2FallbackPartial;
- (void)hydrationCS2FallbackFailure;
- (void)hydrationRetrySuccess;
- (void)hydrationRetryRecapturedPartial;
- (void)hydrationRetryFailure;
- (void)hydrationRetryEvent;
- (void)hydrationFailedForCardIdentifier:(id)arg1 isPromoted:(_Bool)arg2;
- (void)hydrationFailedForMomentID:(id)arg1 isPromoted:(_Bool)arg2;
- (void)hydrationFailedForStatusID:(id)arg1 isPromoted:(_Bool)arg2;
- (void)hydrationFailedForUserID:(id)arg1 isPromoted:(_Bool)arg2;

@end

