//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TFNTwitterUnifiedCardAppMetadataConfig : NSObject
{
    _Bool _shouldShowAppIcon;
    _Bool _shouldUseSingleLineTitle;
    long long _appMetadataLineOneAppRatingType;
    long long _appMetadataLineTwoType;
}

+ (id)defaultConfig;
@property(readonly, nonatomic) long long appMetadataLineTwoType; // @synthesize appMetadataLineTwoType=_appMetadataLineTwoType;
@property(readonly, nonatomic) long long appMetadataLineOneAppRatingType; // @synthesize appMetadataLineOneAppRatingType=_appMetadataLineOneAppRatingType;
@property(readonly, nonatomic) _Bool shouldUseSingleLineTitle; // @synthesize shouldUseSingleLineTitle=_shouldUseSingleLineTitle;
@property(readonly, nonatomic) _Bool shouldShowAppIcon; // @synthesize shouldShowAppIcon=_shouldShowAppIcon;
@property(readonly, nonatomic) _Bool isDefaultConfig;
- (id)initWithShouldShowAppIcon:(_Bool)arg1 shouldUseSingleLineTitle:(_Bool)arg2 appMetadataLineOneAppRatingType:(long long)arg3 appMetadataLineTwoType:(long long)arg4;
- (id)init;

@end
