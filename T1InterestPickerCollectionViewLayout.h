//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSDictionary, NSMutableArray;

@interface T1InterestPickerCollectionViewLayout : UICollectionViewFlowLayout
{
    NSMutableArray *_insertedIndexPaths;
    NSDictionary *_sectionHeaderZIndexMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *sectionHeaderZIndexMap; // @synthesize sectionHeaderZIndexMap=_sectionHeaderZIndexMap;
- (double)_t1_minimumInteritemSpacingForSectionAtIndex:(long long)arg1;
- (struct UIEdgeInsets)_t1_sectionInsetForSectionAtIndex:(long long)arg1;
- (id)_t1_attributesWithZIndexAdjustments:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (struct CGSize)headerReferenceSize;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (id)init;

@end
