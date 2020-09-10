//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TFNButtonAppearanceImpl, TFNButtonAppearanceKey, TFNButtonStateData, UIColor, UIImage;

@interface TFNButtonVisualFacade : NSObject
{
    TFNButtonAppearanceImpl *_appearance;
    TFNButtonAppearanceKey *_appearanceKey;
    TFNButtonStateData *_stateData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TFNButtonStateData *stateData; // @synthesize stateData=_stateData;
@property(retain, nonatomic) TFNButtonAppearanceKey *appearanceKey; // @synthesize appearanceKey=_appearanceKey;
@property(nonatomic) __weak TFNButtonAppearanceImpl *appearance; // @synthesize appearance=_appearance;
@property(readonly, nonatomic) NSString *accessibilityHint;
@property(readonly, nonatomic) NSString *accessibilityLabel;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) struct CGRect imageViewFrame;
@property(readonly, nonatomic) UIColor *titleColor;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) struct CGRect titleLabelFrame;
@property(readonly, nonatomic) UIImage *backgroundImage;
@property(readonly, nonatomic) struct CGRect backgroundViewFrame;
@property(readonly, nonatomic) double alpha;
@property(readonly, nonatomic) struct CGSize frameSize;
- (id)initWithAppearance:(id)arg1 appearanceKey:(id)arg2 stateDate:(id)arg3;

@end

