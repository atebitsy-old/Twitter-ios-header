//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSFeatureSwitches/TFSFeatureSwitches-Protocol.h>

@class NSDictionary, NSString;

@protocol TFSInstrumentedFeatureSwitches <TFSFeatureSwitches>
- (void)setSecondaryConfiguration:(NSDictionary *)arg1 forKey:(NSString *)arg2;
- (void)resetFeatureSwitchValueForKey:(NSString *)arg1;
- (void)setFeatureSwitchValue:(id)arg1 forKey:(NSString *)arg2;
@end

