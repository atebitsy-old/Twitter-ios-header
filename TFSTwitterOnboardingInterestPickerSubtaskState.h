//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterCore/TFSTwitterOnboardingSubtaskState.h>

@class NSArray, NSString;

@interface TFSTwitterOnboardingInterestPickerSubtaskState : TFSTwitterOnboardingSubtaskState
{
    NSString *_contextTokenKey;
    NSArray *_selectedInterestIDs;
    NSArray *_selectedCustomInterests;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *selectedCustomInterests; // @synthesize selectedCustomInterests=_selectedCustomInterests;
@property(copy, nonatomic) NSArray *selectedInterestIDs; // @synthesize selectedInterestIDs=_selectedInterestIDs;
- (void)addStateToJSONDictionary:(id)arg1;
- (id)initForSubtask:(id)arg1;

@end

