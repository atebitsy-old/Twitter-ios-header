//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterClientEventKit/NSObject-Protocol.h>

@class NSString;
@protocol TFSTwitterAPICommandAccountStateProvider, TFSTwitterAPICommandConfiguration, TFSTwitterAPIConfiguration, TFSTwitterLegacyScribeIntegration;

@protocol TFSTwitterAPICommandContext <NSObject>
- (id <TFSTwitterAPIConfiguration>)APIConfigurationWithAccountID:(NSString *)arg1;
@property(nonatomic, readonly) id <TFSTwitterAPICommandConfiguration> configuration;
@property(nonatomic, readonly) id <TFSTwitterLegacyScribeIntegration> scribeIntegration;
@property(nonatomic, readonly) id <TFSTwitterAPICommandAccountStateProvider> accountStateProvider;
@property(nonatomic, readonly) _Bool allowPromotedContent;
@end

