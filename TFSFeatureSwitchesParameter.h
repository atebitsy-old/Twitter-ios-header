//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, TFSFeatureSwitchesValue;

@interface TFSFeatureSwitchesParameter : NSObject
{
    NSString *_name;
    TFSFeatureSwitchesValue *_defaultValue;
    NSArray *_enumerationValues;
}

+ (id)parameterWithDictionary:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *enumerationValues; // @synthesize enumerationValues=_enumerationValues;
@property(readonly, nonatomic) TFSFeatureSwitchesValue *defaultValue; // @synthesize defaultValue=_defaultValue;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithName:(id)arg1 defaultValue:(id)arg2 enumerationValues:(id)arg3;

@end

