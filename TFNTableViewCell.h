//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <TFNUI/TFNDataViewCell-Protocol.h>

@class CALayer, CAShapeLayer, NSIndexPath, NSString, TFNDataViewCellLayout, TFNReusableViewCache, UIColor, UIImageView, UITableView, UIView;

@interface TFNTableViewCell : UITableViewCell <TFNDataViewCell>
{
    UITableView *_tableView;
    struct CGRect _contentFrame;
    long long _defaultSeparatorType;
    long long _tfn_accessoryType;
    long long _editingAccessoryType;
    UIView *_accessoryView;
    UIView *_editingAccessoryView;
    UIImageView *_accessoryImageView;
    _Bool _highlighted;
    CALayer *_separatorLayer;
    CALayer *_separatorBackgroundLayer;
    CALayer *_bottomBorderLayer;
    CALayer *_leftBorderLayer;
    CALayer *_rightBorderLayer;
    CALayer *_topHighlightSeparatorLayer;
    CALayer *_bottomHighlightSeparatorLayer;
    _Bool _initialized;
    _Bool _hasSentDidFirstDisplay;
    NSIndexPath *_preDisplayIndexPath;
    NSString *_backgroundDynamicColorIdentifier;
    _Bool _keyboardHighlighted;
    _Bool _deselectsButtonsOnCellSelection;
    TFNReusableViewCache *_reusableViewCache;
    TFNDataViewCellLayout *_cellLayout;
    unsigned long long _sectionBreaks;
    CDUnknownBlockType _willDisplayInDataViewControllerBlock;
    CDUnknownBlockType _didDisplayInDataViewControllerBlock;
    CDUnknownBlockType _didDisplayWithZeroVisibilityInDataViewControllerBlock;
    CDUnknownBlockType _didEndDisplayingInDataViewControllerBlock;
    CDUnknownBlockType _didEndScrollingInDataViewControllerBlock;
    CDUnknownBlockType _didFirstDisplayInDataViewControllerBlock;
    CDUnknownBlockType _cleanupBlock;
    UIColor *_groupedAppearanceBorderColor;
    NSIndexPath *_currentIndexPath;
    long long _separatorType;
    long long _borderType;
    UIColor *_separatorAndBorderColor;
    long long _appearance;
    CAShapeLayer *_groupFrameMaskLayer;
    CAShapeLayer *_groupFrameBorderLayer;
}

+ (void)setSeparatorAndBorderAnimationEnabled:(_Bool)arg1;
+ (_Bool)isSeparatorAndBorderAnimationEnabled;
+ (id)accessoryImageForType:(long long)arg1 layoutMetrics:(id)arg2;
+ (struct UIEdgeInsets)totalContentEdgeInsetsForAccessoryWidth:(double)arg1 layoutMetrics:(id)arg2;
+ (struct UIEdgeInsets)totalContentEdgeInsetsForAccessoryType:(long long)arg1 layoutMetrics:(id)arg2;
+ (id)cellForTableView:(id)arg1 style:(long long)arg2 reuseIdentifier:(id)arg3 indexPath:(id)arg4 initialization:(CDUnknownBlockType)arg5;
+ (id)cellForTableView:(id)arg1 reuseIdentifier:(id)arg2 indexPath:(id)arg3 initialization:(CDUnknownBlockType)arg4;
+ (id)cellForTableView:(id)arg1 reuseIdentifier:(id)arg2 indexPath:(id)arg3;
+ (id)cellForTableView:(id)arg1 indexPath:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *groupFrameBorderLayer; // @synthesize groupFrameBorderLayer=_groupFrameBorderLayer;
@property(retain, nonatomic) CAShapeLayer *groupFrameMaskLayer; // @synthesize groupFrameMaskLayer=_groupFrameMaskLayer;
@property(nonatomic) _Bool deselectsButtonsOnCellSelection; // @synthesize deselectsButtonsOnCellSelection=_deselectsButtonsOnCellSelection;
@property(nonatomic) long long appearance; // @synthesize appearance=_appearance;
@property(retain, nonatomic) UIColor *separatorAndBorderColor; // @synthesize separatorAndBorderColor=_separatorAndBorderColor;
@property(nonatomic) long long borderType; // @synthesize borderType=_borderType;
@property(nonatomic) long long separatorType; // @synthesize separatorType=_separatorType;
@property(nonatomic, getter=isKeyboardHighlighted) _Bool keyboardHighlighted; // @synthesize keyboardHighlighted=_keyboardHighlighted;
@property(retain, nonatomic) NSIndexPath *currentIndexPath; // @synthesize currentIndexPath=_currentIndexPath;
@property(copy, nonatomic) CDUnknownBlockType cleanupBlock; // @synthesize cleanupBlock=_cleanupBlock;
@property(copy, nonatomic) CDUnknownBlockType didFirstDisplayInDataViewControllerBlock; // @synthesize didFirstDisplayInDataViewControllerBlock=_didFirstDisplayInDataViewControllerBlock;
@property(copy, nonatomic) CDUnknownBlockType didEndScrollingInDataViewControllerBlock; // @synthesize didEndScrollingInDataViewControllerBlock=_didEndScrollingInDataViewControllerBlock;
@property(copy, nonatomic) CDUnknownBlockType didEndDisplayingInDataViewControllerBlock; // @synthesize didEndDisplayingInDataViewControllerBlock=_didEndDisplayingInDataViewControllerBlock;
@property(copy, nonatomic) CDUnknownBlockType didDisplayWithZeroVisibilityInDataViewControllerBlock; // @synthesize didDisplayWithZeroVisibilityInDataViewControllerBlock=_didDisplayWithZeroVisibilityInDataViewControllerBlock;
@property(copy, nonatomic) CDUnknownBlockType didDisplayInDataViewControllerBlock; // @synthesize didDisplayInDataViewControllerBlock=_didDisplayInDataViewControllerBlock;
@property(copy, nonatomic) CDUnknownBlockType willDisplayInDataViewControllerBlock; // @synthesize willDisplayInDataViewControllerBlock=_willDisplayInDataViewControllerBlock;
@property(nonatomic) unsigned long long sectionBreaks; // @synthesize sectionBreaks=_sectionBreaks;
@property(retain, nonatomic) TFNDataViewCellLayout *cellLayout; // @synthesize cellLayout=_cellLayout;
@property(retain, nonatomic) TFNReusableViewCache *reusableViewCache; // @synthesize reusableViewCache=_reusableViewCache;
- (_Bool)tableViewCellAccessibilityMagicTap;
- (id)keyCommands;
- (id)calculatedLayoutMetrics;
- (void)didKeyboardSelectInDataViewController:(id)arg1 atIndexPath:(id)arg2;
@property(readonly, nonatomic, getter=isKeyboardSelectable) _Bool keyboardSelectable;
- (void)cleanup;
- (void)didFirstDisplayInDataViewController:(id)arg1;
- (void)didEndScrollingInDataViewController:(id)arg1;
- (void)didEndDisplayingInDataViewController:(id)arg1 reason:(unsigned long long)arg2;
- (void)didDisplayWithZeroVisibilityInDataViewController:(id)arg1 atIndexPath:(id)arg2;
- (void)didDisplayInDataViewController:(id)arg1 atIndexPath:(id)arg2 visibleIntersection:(struct CGRect)arg3;
- (void)willDisplayInDataViewController:(id)arg1 atIndexPath:(id)arg2;
@property(readonly, nonatomic) struct CGRect contentFrame;
- (_Bool)_canAccessAdjacentCells;
- (void)_layoutGroupFrameIfNecessary;
- (_Bool)_needsBottomHighlightSeparator;
- (void)_updateHighlightSeparatorsAnimated:(_Bool)arg1;
- (void)_layoutSeparator:(id)arg1;
- (void)_updateSeparator;
- (void)_layoutBackgroundView;
- (void)_layoutContentView:(id)arg1;
- (_Bool)_adjustEditingControlFrameInView:(id)arg1;
- (void)_removeAccessoryView:(id)arg1;
- (double)_layoutAccessory:(id)arg1 contentEdgeInsets:(struct UIEdgeInsets)arg2;
- (double)_accessoryInsetForLayoutMetrics:(id)arg1 getAccessoryView:(out id *)arg2;
- (double)prototypeAutolayoutHeightForTableView:(id)arg1 indexPath:(id)arg2;
- (void)_disableButtonSelection:(id)arg1;
- (void)_disableButtonHighlight:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_tfn_updateHighlightedAnimated:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)isHighlighted;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setEditingAccessoryView:(id)arg1;
- (id)editingAccessoryView;
- (void)setAccessoryView:(id)arg1;
- (id)accessoryView;
@property(retain, nonatomic) UIColor *groupedAppearanceBorderColor; // @synthesize groupedAppearanceBorderColor=_groupedAppearanceBorderColor;
- (void)setEditingAccessoryType:(long long)arg1;
- (long long)editingAccessoryType;
- (void)setAccessoryType:(long long)arg1;
- (long long)accessoryType;
- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColor;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_initializeForTableView:(id)arg1 indexPath:(id)arg2 initialization:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, nonatomic) UIView *contentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

