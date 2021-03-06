//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSError, TFNTwitterAccount;

@protocol TFNTwitterAccountBlockedContentEradicationMonitoring <NSObject>
- (void)blockedUserContentDidCompleteForAccount:(TFNTwitterAccount *)arg1 error:(NSError *)arg2;
- (void)didRemoveBlockedContentForAccount:(TFNTwitterAccount *)arg1;
- (_Bool)shouldStopRemovingBlockedContentAfterFirstPageForAccount:(TFNTwitterAccount *)arg1;
- (_Bool)shouldStopRemovingBlockedContentForAccount:(TFNTwitterAccount *)arg1;
@end

