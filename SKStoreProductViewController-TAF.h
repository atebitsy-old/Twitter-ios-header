//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKit/SKStoreProductViewController.h>

@class TAFStoreProductViewControllerDelegate;

@interface SKStoreProductViewController (TAF)
+ (id)productViewControllerWithItunesIdentifier:(id)arg1 scribe:(id)arg2 scribeContext:(id)arg3 loadCompletion:(CDUnknownBlockType)arg4 adMetadataContainer:(id)arg5;
@property(retain, nonatomic) TAFStoreProductViewControllerDelegate *strongDelegate;
@property(copy, nonatomic) CDUnknownBlockType loadCompletion;
- (void)_taf_handleOpenAppStoreWithSuccess:(_Bool)arg1 error:(id)arg2 appStoreId:(id)arg3;
- (void)_taf_deliverStatus:(long long)arg1;
@end

