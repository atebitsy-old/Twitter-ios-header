//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, NSString;

@interface T1UserTypeaheadViewControllerResults : NSObject
{
    NSSet *_prefetchUserSet;
    NSString *_typeaheadString;
    NSArray *_prefetch;
    NSArray *_remote;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *remote; // @synthesize remote=_remote;
@property(readonly, copy, nonatomic) NSArray *prefetch; // @synthesize prefetch=_prefetch;
@property(readonly, copy, nonatomic) NSString *typeaheadString; // @synthesize typeaheadString=_typeaheadString;
- (_Bool)isEqualToTypeaheadResults:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSSet *prefetchUserSet; // @synthesize prefetchUserSet=_prefetchUserSet;
- (id)initWithTypeaheadString:(id)arg1 prefetchResults:(id)arg2 remoteResults:(id)arg3;
- (id)init;

@end

