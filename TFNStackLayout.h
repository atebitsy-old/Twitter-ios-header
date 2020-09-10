//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, TFNStackLayoutItem;

@interface TFNStackLayout : NSObject
{
    double _spacing;
    TFNStackLayoutItem *_representingItem;
    struct CGRect _frame;
}

- (void).cxx_destruct;
@property(nonatomic) __weak TFNStackLayoutItem *representingItem; // @synthesize representingItem=_representingItem;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(readonly, nonatomic) struct UIEdgeInsets baselineEdgeInsets;
@property(readonly, nonatomic) double topContentInset;
- (id)findItemWithIdentifier:(long long)arg1;
- (id)objectAtIndexedSubscript:(long long)arg1;
@property(readonly, nonatomic) TFNStackLayoutItem *lastVisibleItem;
@property(readonly, nonatomic) TFNStackLayoutItem *firstVisibleItem;
@property(readonly, copy, nonatomic) NSArray *items;
- (id)addItemForLayout:(id)arg1 withIdentifier:(long long)arg2;
- (id)addItemWithIdentifier:(long long)arg1;
- (void)layoutViews:(id)arg1;
- (void)addItemsForViewIdentifiers:(id)arg1 inLayoutStateSet:(id)arg2 layouts:(id)arg3;

@end

