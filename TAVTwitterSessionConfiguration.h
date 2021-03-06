//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/NSCopying-Protocol.h>

@interface TAVTwitterSessionConfiguration : NSObject <NSCopying>
{
    _Bool _locationSharingRulesEnforced;
    double _initialPreferredPeakBitRate;
    double _bitrateForInitialVariantSelection;
    double _bitrateForMp4VariantSelection;
}

@property(readonly, nonatomic) double bitrateForMp4VariantSelection; // @synthesize bitrateForMp4VariantSelection=_bitrateForMp4VariantSelection;
@property(readonly, nonatomic) double bitrateForInitialVariantSelection; // @synthesize bitrateForInitialVariantSelection=_bitrateForInitialVariantSelection;
@property(readonly, nonatomic) _Bool locationSharingRulesEnforced; // @synthesize locationSharingRulesEnforced=_locationSharingRulesEnforced;
@property(readonly, nonatomic) double initialPreferredPeakBitRate; // @synthesize initialPreferredPeakBitRate=_initialPreferredPeakBitRate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithInitialPreferredPeakBitrate:(double)arg1 locationSharingRulesEnforced:(_Bool)arg2 bitrateForInitialVariantSelection:(double)arg3 bitrateForMp4VariantSelection:(double)arg4;
- (id)initWithAccount:(id)arg1 autoplaying:(_Bool)arg2;

@end

