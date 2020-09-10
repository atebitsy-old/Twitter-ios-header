//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewAdapter.h>

@class NSNumber, NSValue, UIColor, UIFont;

@interface TFNStringDataViewAdapter : TFNItemsDataViewAdapter
{
    NSNumber *_textAlignment;
    NSNumber *_multipleLines;
    NSNumber *_multipleDetailLines;
    NSValue *_size;
    _Bool _shouldHighlight;
    long long _style;
    UIFont *_font;
    UIColor *_textColor;
}

+ (void)setDefaultDetailTextColor:(id)arg1;
+ (void)setDefaultTextFont:(id)arg1;
+ (void)setDefaultTextColor:(id)arg1;
+ (void)setTextIsUppercase:(_Bool)arg1 forStyle:(long long)arg2;
+ (void)setTextKerning:(double)arg1 forStyle:(long long)arg2;
+ (void)setTextFont:(id)arg1 forStyle:(long long)arg2;
+ (void)setTextColor:(id)arg1 forStyle:(long long)arg2;
+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldHighlight; // @synthesize shouldHighlight=_shouldHighlight;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) long long style; // @synthesize style=_style;
- (_Bool)dataViewController:(id)arg1 shouldHighlightItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (void)_applyPropertiesToTextCell:(id)arg1 forText:(id)arg2 withOptions:(id)arg3;
- (id)dataViewController:(id)arg1 collectionViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (struct CGSize)dataViewController:(id)arg1 collectionViewSizeForItem:(id)arg2 constrainedToSize:(struct CGSize)arg3 withOptions:(id)arg4 atIndexPath:(id)arg5;
- (id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (double)_dataViewController:(id)arg1 tableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4 estimated:(_Bool)arg5;
- (double)dataViewController:(id)arg1 estimatedTableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (double)dataViewController:(id)arg1 tableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (long long)_defaultAccessoryTypeForOptions:(id)arg1;
- (long long)_defaultSeparatorTypeForOptions:(id)arg1;
- (id)_sizeForOptions:(id)arg1;
- (_Bool)_multipleDetailLinesForOptions:(id)arg1;
- (_Bool)_multipleLinesForOptions:(id)arg1;
- (id)_detailTextColorForOptions:(id)arg1;
- (_Bool)_textIsUppercaseForOptions:(id)arg1;
- (id)_textKerningForOptions:(id)arg1;
- (id)_textColorForOptions:(id)arg1;
- (id)_detailFontForOptions:(id)arg1;
- (id)_textFontForOptions:(id)arg1;
- (long long)_lineBreakModeForOptions:(id)arg1 defaultAlignment:(long long)arg2;
- (long long)_textAlignmentForOptions:(id)arg1 defaultAlignment:(long long)arg2;
- (long long)_cellStyleForOptions:(id)arg1;
- (long long)_highlightStyleForOptions:(id)arg1;
- (long long)_styleForOptions:(id)arg1;
@property(nonatomic) struct CGSize size;
@property(nonatomic) _Bool multipleDetailLines;
@property(nonatomic) _Bool multipleLines;
@property(nonatomic) long long textAlignment;
- (id)init;

@end

