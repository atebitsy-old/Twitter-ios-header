//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, TFNTwitterDismiss;

@interface TFNTwitterFeedbackModule : NSObject
{
    NSArray *_feedbackInfos;
    TFNTwitterDismiss *_dismissInfo;
    TFNTwitterDismiss *_currentDismiss;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TFNTwitterDismiss *currentDismiss; // @synthesize currentDismiss=_currentDismiss;
@property(readonly, nonatomic) TFNTwitterDismiss *dismissInfo; // @synthesize dismissInfo=_dismissInfo;
@property(readonly, nonatomic) NSArray *feedbackInfos; // @synthesize feedbackInfos=_feedbackInfos;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithDismiss:(id)arg1 confirmationFeedbacks:(id)arg2;
- (id)init;

@end

