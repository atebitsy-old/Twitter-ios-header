//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TFNDirectMessageAddParticipantFailuresResponse : NSObject
{
    NSArray *_errors;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *errors; // @synthesize errors=_errors;
- (id)initWithJSONDictionary:(id)arg1;

@end

