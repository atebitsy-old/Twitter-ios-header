//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1DirectMessageComposeViewController.h>

#import <T1Twitter/T1ComposeDropManagerDelegate-Protocol.h>

@interface T1DirectMessageComposeViewController (T1Twitter9) <T1ComposeDropManagerDelegate>
- (void)composeDropManager:(id)arg1 shouldUpdateDropIndicationViewText:(id)arg2 backgroundStyle:(unsigned long long)arg3;
- (void)composeDropManager:(id)arg1 shouldUpdateDropIndicationViewHidden:(_Bool)arg2 animated:(_Bool)arg3;
- (void)composeDropManager:(id)arg1 didDropVideoFile:(id)arg2;
- (void)composeDropManager:(id)arg1 didDropText:(id)arg2;
- (void)composeDropManager:(id)arg1 didDropURL:(id)arg2;
- (void)composeDropManager:(id)arg1 didDropStatus:(id)arg2;
- (void)composeDropManager:(id)arg1 didDropImages:(id)arg2;
- (void)composeDropManager:(id)arg1 didDropAnimatedImage:(id)arg2;
- (_Bool)composeDropManager:(id)arg1 canHandleLocalDragSession:(id)arg2;
@end

