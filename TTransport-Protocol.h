//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ApacheThrift/NSObject-Protocol.h>

@protocol TTransport <NSObject>
- (void)flush;
- (void)write:(const char *)arg1 offset:(unsigned int)arg2 length:(unsigned int)arg3;
- (int)readAll:(char *)arg1 offset:(int)arg2 length:(int)arg3;
@end

