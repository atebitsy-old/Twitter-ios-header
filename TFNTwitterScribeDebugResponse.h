//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFSModel-Protocol.h>

@class NSDictionary;

@interface TFNTwitterScribeDebugResponse : NSObject <TFSModel>
{
    NSDictionary *_debugInfo;
}

+ (id)debugResponseWithJSONData:(id)arg1 error:(out id *)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *debugInfo; // @synthesize debugInfo=_debugInfo;
- (id)initWithDebugInfoDictionary:(id)arg1;

@end

