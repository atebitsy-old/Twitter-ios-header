//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString;

@protocol TFSAccountCredentialsSecretStore
- (_Bool)loadSecretWithToken:(NSString *)arg1 error:(id *)arg2 secret:(void (^)(NSString *))arg3;
- (_Bool)saveSecretWithToken:(NSString *)arg1 secret:(NSString *)arg2 error:(id *)arg3;
@end

