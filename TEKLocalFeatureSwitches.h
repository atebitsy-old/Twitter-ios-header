//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol TEKLocalFeatureSwitchesStore;

@interface TEKLocalFeatureSwitches : NSObject
{
    id <TEKLocalFeatureSwitchesStore> _store;
}

- (void).cxx_destruct;
@property(readonly) id <TEKLocalFeatureSwitchesStore> store; // @synthesize store=_store;
- (_Bool)feature:(id)arg1 isEnabledByRandomDecider:(unsigned int)arg2;
- (id)initWithStore:(id)arg1;

@end

