//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSString;

@protocol TNLLogger <NSObject>
- (_Bool)tnl_shouldRedactHTTPHeaderField:(NSString *)arg1;
- (void)tnl_logWithLevel:(long long)arg1 context:(id)arg2 file:(NSString *)arg3 function:(NSString *)arg4 line:(int)arg5 message:(NSString *)arg6;

@optional
- (_Bool)tnl_shouldLogVerbosely;
- (_Bool)tnl_canLogWithLevel:(long long)arg1 context:(id)arg2;
@end

