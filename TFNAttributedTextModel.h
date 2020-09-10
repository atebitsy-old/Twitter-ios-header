//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFNUI/TFNDynamicColorViewSource-Protocol.h>

@class NSArray, NSAttributedString, NSString, UIView;

@interface TFNAttributedTextModel : NSObject <TFNDynamicColorViewSource>
{
    NSAttributedString *_renderedAttributedString;
    struct __CTFrame *_coreTextFrame;
    struct __CTLine *_truncatedLastLine;
    struct CGPoint _truncatedLastLineOrigin;
    struct CGSize _requestedSize;
    struct CGSize _actualSize;
    struct _NSRange _truncationTokenRange;
    struct _NSRange _truncationTokenHighlightRange;
    _Bool _textIsTruncated;
    double _contentBottomPadding;
    double _contentTopPadding;
    NSArray *_lineRanges;
    _Bool _singleLine;
    unsigned char _lineBreakMode;
    NSAttributedString *_attributedString;
    unsigned long long _maxLines;
    NSAttributedString *_attributedSuffixString;
    unsigned long long _truncationType;
    struct _NSRange _truncationStringHighlightRange;
}

+ (double)maxHeight;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long truncationType; // @synthesize truncationType=_truncationType;
@property(nonatomic) struct _NSRange truncationStringHighlightRange; // @synthesize truncationStringHighlightRange=_truncationStringHighlightRange;
@property(copy, nonatomic) NSAttributedString *attributedSuffixString; // @synthesize attributedSuffixString=_attributedSuffixString;
@property(readonly, nonatomic) struct CGSize actualSize; // @synthesize actualSize=_actualSize;
@property(nonatomic) unsigned long long maxLines; // @synthesize maxLines=_maxLines;
@property(nonatomic) unsigned char lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(nonatomic) _Bool singleLine; // @synthesize singleLine=_singleLine;
@property(copy, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (struct CGAffineTransform)coreTextTransform;
- (void)_tfn_buildCoreTextFrame;
- (struct __CTParagraphStyle *)_tfn_createCoreTextParagraphStyleWithSettingCount:(unsigned long long)arg1 settings:(const struct CTParagraphStyleSetting *)arg2;
- (struct __CTParagraphStyle *)_tfn_createCoreTextParagraphStyleForCTBase:(struct __CTParagraphStyle *)arg1 overrideSettingCount:(unsigned long long)arg2 overrideSettings:(const struct CTParagraphStyleSetting *)arg3;
- (struct __CTParagraphStyle *)_tfn_createCoreTextParagraphStyleForBase:(id)arg1 overrideSettingCount:(unsigned long long)arg2 overrideSettings:(const struct CTParagraphStyleSetting *)arg3;
- (id)_tfn_coreTextAttributedSuffixString;
- (id)_tfn_coreTextAttributedString;
- (struct __CTFrame *)_tfn_coreTextFrameCreatedWithAttributedString:(id)arg1;
- (_Bool)_tfn_sizeRequiresRelayout:(struct CGSize)arg1;
- (void)resetCoreTextFrame;
- (void)fitToSize:(struct CGSize)arg1;
- (void)fitToWidth:(double)arg1;
@property(readonly, nonatomic) NSArray *lineRanges;
@property(readonly, nonatomic) double contentTopPadding;
@property(readonly, nonatomic) double contentBottomPadding;
@property(readonly, nonatomic) _Bool hasTruncationToken;
@property(readonly, nonatomic, getter=isTruncated) _Bool truncated;
@property(readonly, nonatomic) struct _NSRange truncationTokenHighlightRange;
@property(nonatomic) struct _NSRange truncationTokenRange;
- (struct CGPoint)truncatedLastLineOrigin;
- (struct __CTLine *)truncatedLastLine;
- (struct __CTFrame *)coreTextFrame;
@property(readonly, nonatomic) NSAttributedString *renderedAttributedString;
- (void)dealloc;
- (id)initWithAttributedString:(id)arg1;
- (id)init;
@property(readonly, nonatomic) UIView *dynamicColorView;
- (id)initWithAttributedString:(id)arg1 colorProviderView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
