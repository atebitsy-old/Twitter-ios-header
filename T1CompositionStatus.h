//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterStatus.h>

@class NSArray, NSString, TFNLocalMediaAssetCache, TFNTwitterComposition;

@interface T1CompositionStatus : TFNTwitterStatus
{
    NSString *_compositionStatusID;
    TFNLocalMediaAssetCache *_mediaAssetCache;
    NSArray *_inlineMediaInfos;
    TFNTwitterComposition *_composition;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TFNTwitterComposition *composition; // @synthesize composition=_composition;
- (id)geotag;
- (id)cameraMoment;
- (id)scribeItemContentID;
- (id)unifiedID;
- (long long)primaryCardType;
- (unsigned long long)primaryMediaType;
- (id)primaryMediaInfo;
- (id)inlineMediaInfos;
- (void)dealloc;
- (id)initWithComposition:(id)arg1 mediaAssetCache:(id)arg2 fromUser:(id)arg3 quotedStatus:(id)arg4;

@end

