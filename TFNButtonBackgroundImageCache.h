//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TFSObjectCache;

@interface TFNButtonBackgroundImageCache : NSObject
{
    TFSObjectCache *_cache;
}

+ (id)_createCacheableBackgroundImageWithCornerRadius:(double)arg1 strokeLineWidth:(double)arg2 fillColor:(id)arg3 strokeColor:(id)arg4;
+ (id)_colorKeyForColor:(id)arg1;
+ (id)sharedCache;
+ (void)initialize;
- (void).cxx_destruct;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)backgroundImageWithCornerRadius:(double)arg1 fillColor:(id)arg2 strokeColor:(id)arg3 strokeLineWidth:(double)arg4 isBorderless:(_Bool)arg5;
- (id)_backgroundTintedFillStrokeImageWithCornerRadius:(double)arg1 strokeLineWidth:(double)arg2 fillColor:(id)arg3 fillColorKey:(id)arg4 strokeColor:(id)arg5 strokeColorKey:(id)arg6;
- (id)_backgroundTintedStrokeImageWithCornerRadius:(double)arg1 strokeLineWidth:(double)arg2 strokeColor:(id)arg3 colorKey:(id)arg4;
- (id)_backgroundTintedFillImageWithCornerRadius:(double)arg1 fillColor:(id)arg2 colorKey:(id)arg3;
- (id)_backgroundBaseStrokeImageWithCornerRadius:(double)arg1 strokeLineWidth:(double)arg2;
- (id)_backgroundBaseFillImageWithCornerRadius:(double)arg1;
- (id)init;

@end

