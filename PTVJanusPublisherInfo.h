//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PTVJanusPublisherInfo : NSObject
{
    unsigned long long _Id;
    NSString *_periscopeUserId;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *periscopeUserId; // @synthesize periscopeUserId=_periscopeUserId;
@property(readonly, nonatomic) unsigned long long Id; // @synthesize Id=_Id;
- (id)initWithId:(unsigned long long)arg1 periscopeUserId:(id)arg2;

@end

