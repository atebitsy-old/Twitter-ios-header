//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, T1TranslatedStatusViewModel;
@protocol T1StatusViewModel;

@interface T1TweetDetailsTranslationInfo : NSObject
{
    long long _state;
    id <T1StatusViewModel> _originalStatus;
    T1TranslatedStatusViewModel *_translatedStatus;
    NSError *_translationError;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSError *translationError; // @synthesize translationError=_translationError;
@property(retain, nonatomic) T1TranslatedStatusViewModel *translatedStatus; // @synthesize translatedStatus=_translatedStatus;
@property(retain, nonatomic) id <T1StatusViewModel> originalStatus; // @synthesize originalStatus=_originalStatus;
@property(nonatomic) long long state; // @synthesize state=_state;

@end

