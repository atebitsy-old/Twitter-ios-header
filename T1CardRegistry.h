//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1CardViewRegistry-Protocol.h>

@class T1AdFormatsFeatures;

@interface T1CardRegistry : NSObject <T1CardViewRegistry>
{
    // Error parsing type: , name: cardRegistration
    // Error parsing type: , name: account
    // Error parsing type: , name: cardMap
    // Error parsing type: , name: features
}

- (void).cxx_destruct;
- (id)init;
- (void)featureSwitchesDidUpdate;
- (id)layoutDelegateForCardName:(long long)arg1 displayMode:(long long)arg2;
- (id)cardViewForCardName:(long long)arg1 displayMode:(long long)arg2;
- (_Bool)legacyShouldForceRenderingCardName:(long long)arg1 displayMode:(long long)arg2;
- (_Bool)isCardRegisteredForCardName:(long long)arg1 displayMode:(long long)arg2;
- (id)initWithAccount:(id)arg1;
@property(nonatomic, retain) T1AdFormatsFeatures *mock_features; // @synthesize mock_features=features;

@end

