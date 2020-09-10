//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFNUI/NSCopying-Protocol.h>

@class TFNLayoutMetricsComputation, UIFont, UITraitCollection, UIWindow;

@interface TFNLayoutMetrics : NSObject <NSCopying>
{
    TFNLayoutMetricsComputation *_computation;
}

+ (id)_tfn_layoutMetricsCache;
+ (id)_layoutMetricsForInputs:(id)arg1 baseComputation:(id)arg2;
+ (void)clearLayoutMetricsCache;
+ (id)layoutMetricsWithCanvasWidth:(double)arg1 window:(id)arg2 traitCollection:(id)arg3 contentFont:(id)arg4;
+ (id)layoutMetricsWithCanvasWidth:(double)arg1 window:(id)arg2 traitCollection:(id)arg3;
+ (id)_mainScreenPortraitTraitCollection;
+ (id)mainScreenPortraitLayoutMetrics;
+ (id)layoutMetrics;
- (void).cxx_destruct;
@property(retain, nonatomic) TFNLayoutMetricsComputation *computation; // @synthesize computation=_computation;
@property(readonly, nonatomic) double bodyWidth;
@property(readonly, nonatomic) struct CGPoint bodyOrigin;
@property(readonly, nonatomic) struct CGPoint avatarOrigin;
@property(readonly, nonatomic) struct CGPoint trailingContentAreaOrigin;
@property(readonly, nonatomic) struct CGPoint leadingContentAreaOrigin;
@property(readonly, nonatomic) double contentWidth;
@property(readonly, nonatomic) struct CGPoint contentOrigin;
@property(readonly, nonatomic) double displayAreaWidth;
@property(readonly, nonatomic) struct CGPoint displayAreaOrigin;
- (double)bodyPaddingInDirection:(long long)arg1;
@property(readonly, nonatomic) struct UIEdgeInsets bodyEdgeInsets;
- (struct CGSize)avatarSizeForSize:(long long)arg1;
@property(readonly, nonatomic) struct CGSize avatarSize;
@property(readonly, nonatomic) double trailingContentAreaWidth;
@property(readonly, nonatomic) double leadingContentAreaWidth;
@property(readonly, nonatomic) struct UIEdgeInsets horizontalSafeAreaInsets;
@property(readonly, nonatomic) struct UIEdgeInsets barItemInsets;
@property(readonly, nonatomic) struct UIEdgeInsets minimumContentEdgeInsets;
@property(readonly, nonatomic) struct UIEdgeInsets contentEdgeInsets;
@property(readonly, nonatomic) struct UIEdgeInsets displayAreaEdgeInsets;
@property(readonly, nonatomic) double textOffsetY;
@property(readonly, nonatomic) double emSize;
@property(readonly, nonatomic) double lineHeight;
@property(readonly, nonatomic) _Bool hasCustomAvatarSize;
@property(readonly, nonatomic) _Bool hasCustomTrailingContentAreaWidth;
@property(readonly, nonatomic) _Bool hasCustomLeadingContentAreaWidth;
@property(readonly, nonatomic) _Bool hasCustomHorizontalSafeAreaInsets;
@property(readonly, nonatomic) _Bool hasCustomContentEdgeInsets;
@property(readonly, nonatomic) _Bool hasCustomDisplayAreaEdgeInsets;
@property(readonly, nonatomic) UIFont *contentFont;
@property(readonly, nonatomic) UITraitCollection *traitCollection;
@property(readonly, nonatomic) __weak UIWindow *window;
@property(readonly, nonatomic) double canvasWidth;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isExpired;
- (_Bool)isEmptyLayoutMetrics;
- (_Bool)isContentLayoutEqualToLayoutMetrics:(id)arg1;
- (_Bool)areTraitsEqualToLayoutMetrics:(id)arg1;
- (_Bool)isEqualToLayoutMetrics:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)layoutMetricsWithoutCustomizations;
- (id)layoutMetricsWithTrailingContentAreaWidth:(double)arg1;
- (id)layoutMetricsWithLeadingContentAreaWidth:(double)arg1;
- (id)layoutMetricsWithAvatarSize:(struct CGSize)arg1;
- (id)layoutMetricsWithHorizontalSafeAreaInsets:(struct UIEdgeInsets)arg1;
- (id)layoutMetricsWithContentEdgeInsets:(struct UIEdgeInsets)arg1;
- (id)layoutMetricsWithDisplayAreaEdgeInsets:(struct UIEdgeInsets)arg1;
- (id)layoutMetricsWithInsetDisplayArea:(_Bool)arg1;
- (id)initWithComputation:(id)arg1;

@end

