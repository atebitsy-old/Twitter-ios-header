//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TFNCardRuntime : NSObject
{
    _Bool _platformIdentifierChangedSinceLastLaunch;
    NSString *_platformIdentifier;
}

+ (id)sharedCardRuntime;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool platformIdentifierChangedSinceLastLaunch; // @synthesize platformIdentifierChangedSinceLastLaunch=_platformIdentifierChangedSinceLastLaunch;
@property(readonly, nonatomic) NSString *platformIdentifier; // @synthesize platformIdentifier=_platformIdentifier;
- (id)init;

@end
