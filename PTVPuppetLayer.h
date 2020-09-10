//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PeriscopeSDK/PTVPuppetContext-Protocol.h>

@class CALayer, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, PTVPuppet, PTVPuppetValue, UIColor, UIImage;

@interface PTVPuppetLayer : NSObject <PTVPuppetContext>
{
    NSMutableArray *_layers;
    NSMutableDictionary *_values;
    NSMutableDictionary *_colors;
    NSMutableDictionary *_images;
    CALayer *_CALayer;
    UIImage *_image;
    UIImage *_displayImage;
    UIColor *_tintColor;
    UIColor *_backgroundColor;
    _Bool _clipsContent;
    NSString *_identifier;
    NSString *_name;
    NSString *_details;
    NSString *_backgroundColorName;
    double _cornerRadius;
    PTVPuppetValue *_positionXValue;
    PTVPuppetValue *_positionYValue;
    PTVPuppetValue *_scaleXValue;
    PTVPuppetValue *_scaleYValue;
    PTVPuppetValue *_alphaValue;
    PTVPuppetLayer *_parentLayer;
    NSString *_imageName;
    PTVPuppetLayer *_mask;
    NSString *_tintColorName;
    struct CGSize _contentSize;
}

+ (id)TintImage:(id)arg1 withColor:(id)arg2;
+ (id)layerFromDictionary:(id)arg1 error:(id *)arg2;
+ (id)layerFromValue:(id)arg1 error:(id *)arg2;
+ (id)layersFromValue:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *tintColorName; // @synthesize tintColorName=_tintColorName;
@property(retain, nonatomic) PTVPuppetLayer *mask; // @synthesize mask=_mask;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(readonly, nonatomic) __weak PTVPuppetLayer *parentLayer; // @synthesize parentLayer=_parentLayer;
@property(retain, nonatomic) PTVPuppetValue *alphaValue; // @synthesize alphaValue=_alphaValue;
@property(retain, nonatomic) PTVPuppetValue *scaleYValue; // @synthesize scaleYValue=_scaleYValue;
@property(retain, nonatomic) PTVPuppetValue *scaleXValue; // @synthesize scaleXValue=_scaleXValue;
@property(retain, nonatomic) PTVPuppetValue *positionYValue; // @synthesize positionYValue=_positionYValue;
@property(retain, nonatomic) PTVPuppetValue *positionXValue; // @synthesize positionXValue=_positionXValue;
@property(nonatomic) _Bool clipsContent; // @synthesize clipsContent=_clipsContent;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) NSString *backgroundColorName; // @synthesize backgroundColorName=_backgroundColorName;
@property(retain, nonatomic) NSString *details; // @synthesize details=_details;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)updateCALayerMaskIfNeeded;
@property(nonatomic) double alpha;
@property(nonatomic) struct CGPoint position;
@property(nonatomic) struct CGPoint scale;
- (void)reset;
- (void)layout;
- (void)update:(double)arg1;
- (void)enumerateAllValues:(CDUnknownBlockType)arg1;
- (_Bool)referencesPuppetValueNamed:(id)arg1;
- (id)detectCycles;
- (void)removeValueNamed:(id)arg1;
- (void)addValue:(id)arg1 named:(id)arg2;
@property(readonly, nonatomic) NSDictionary *values;
- (void)parentLayerDidChangeColorNamed:(id)arg1;
- (void)didChangeColorNamed:(id)arg1;
- (void)setColor:(id)arg1 named:(id)arg2;
- (id)colorNamed:(id)arg1;
- (_Bool)referencesColorNamed:(id)arg1;
- (void)updateCALayerBackground;
@property(retain, nonatomic) UIColor *backgroundColor;
@property(retain, nonatomic) UIColor *tintColor;
- (_Bool)referencesImageNamed:(id)arg1;
- (void)parentLayerDidChangeImageNamed:(id)arg1;
- (void)didChangeImageNamed:(id)arg1;
- (void)setImage:(id)arg1 named:(id)arg2;
- (id)imageNamed:(id)arg1;
- (void)updateDisplayImage;
@property(readonly, nonatomic) UIImage *displayImage;
@property(retain, nonatomic) UIImage *image;
- (void)updateCALayerContents;
- (void)CALayerDidLoad;
- (void)loadCALayer;
@property(readonly, nonatomic, getter=isCALayerLoaded) _Bool CALayerLoaded;
- (void)setCALayer:(id)arg1;
@property(readonly, nonatomic) CALayer *CALayer;
- (void)enumerateAllLayers:(CDUnknownBlockType)arg1;
- (void)setParentLayer:(id)arg1;
- (void)removeLayer:(id)arg1;
- (void)removeLayerAtIndex:(unsigned long long)arg1;
- (void)insertLayer:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addLayer:(id)arg1;
@property(readonly, nonatomic) NSArray *layers;
@property(readonly, nonatomic) PTVPuppet *puppet;
- (id)numberValueNamed:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

