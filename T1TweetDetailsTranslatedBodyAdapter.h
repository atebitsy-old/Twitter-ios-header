//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1StandardStatusBodyViewAdapter.h>

@interface T1TweetDetailsTranslatedBodyAdapter : T1StandardStatusBodyViewAdapter
{
    unsigned long long _contextDisplayType;
}

@property(nonatomic) unsigned long long contextDisplayType; // @synthesize contextDisplayType=_contextDisplayType;
- (id)translatedViewModelForViewModel:(id)arg1;
- (void)setViewModel:(id)arg1 forView:(id)arg2;
- (id)layoutStateForViewModel:(id)arg1 layoutMetrics:(id)arg2;
- (_Bool)shouldBeVisibleForViewModel:(id)arg1;
- (id)initWithViewIdentifier:(long long)arg1 translationContextDisplayType:(unsigned long long)arg2;

@end

