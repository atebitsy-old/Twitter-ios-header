//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1FlexibleLayoutSpaceItem-Protocol.h>

@class NSString;

@interface T1FlexibleLayoutSpaceItem : NSObject <T1FlexibleLayoutSpaceItem>
{
    CDUnknownBlockType _layoutHelperProvider;
    long long _layoutOrientation;
    CDUnknownBlockType _minimumLengthCalculator;
    CDUnknownBlockType _totalLengthCalculator;
    CDUnknownBlockType _weightCalculator;
}

+ (double)_t1_totalAvailableSpaceItems:(id)arg1 withOrientation:(long long)arg2 minimumBounds:(struct CGRect)arg3 boundsToFill:(struct CGRect)arg4 layoutMetrics:(id)arg5;
+ (struct CGRect)_t1_calculateMinimumBoundsForSpaceItems:(id)arg1 withinBounds:(struct CGRect)arg2 usingLayoutHelper:(id)arg3 layoutMetrics:(id)arg4;
+ (struct CGRect)_t1_calculateBoundsToFillForSpaceItem:(id)arg1 layoutBounds:(struct CGRect)arg2 size:(struct CGSize)arg3 layoutMetrics:(id)arg4;
+ (id)_t1_spaceItemsManagedByLayoutHelper:(id)arg1 withOrientation:(long long)arg2;
+ (CDUnknownBlockType)flexibleLayoutSpaceSizeCalculator;
+ (CDUnknownBlockType)flexibleLayoutSpaceLayoutFrameCalculator;
+ (id)verticalSpaceWithMinimumLength:(double)arg1 weight:(double)arg2 layoutHelperProvider:(CDUnknownBlockType)arg3;
+ (id)verticalSpaceWithMinimumLength:(double)arg1 weight:(double)arg2 layoutHelperProvider:(CDUnknownBlockType)arg3 totalLengthCalculator:(CDUnknownBlockType)arg4;
+ (id)verticalSpaceWithMinimumLengthCalculator:(CDUnknownBlockType)arg1 weightCalculator:(CDUnknownBlockType)arg2 layoutHelperProvider:(CDUnknownBlockType)arg3 totalLengthCalculator:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType weightCalculator; // @synthesize weightCalculator=_weightCalculator;
@property(readonly, nonatomic) CDUnknownBlockType totalLengthCalculator; // @synthesize totalLengthCalculator=_totalLengthCalculator;
@property(readonly, nonatomic) CDUnknownBlockType minimumLengthCalculator; // @synthesize minimumLengthCalculator=_minimumLengthCalculator;
@property(readonly, nonatomic) long long layoutOrientation; // @synthesize layoutOrientation=_layoutOrientation;
@property(readonly, nonatomic) CDUnknownBlockType layoutHelperProvider; // @synthesize layoutHelperProvider=_layoutHelperProvider;
- (id)t1_withContentSpacingCalculator:(CDUnknownBlockType)arg1;
- (id)t1_withContentInsetsCalculator:(CDUnknownBlockType)arg1;
- (id)t1_withLayoutCalculator:(CDUnknownBlockType)arg1;
- (id)t1_withSizeCalculator:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)t1_flexibleLayoutContentSpacingCalculator;
- (CDUnknownBlockType)t1_flexibleLayoutFrameCalculator;
- (CDUnknownBlockType)t1_flexibleLayoutSizeCalculator;
- (id)initWithOrientation:(long long)arg1 minimumLengthCalculator:(CDUnknownBlockType)arg2 weightCalculator:(CDUnknownBlockType)arg3 layoutHelperProvider:(CDUnknownBlockType)arg4 totalLengthCalculator:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
