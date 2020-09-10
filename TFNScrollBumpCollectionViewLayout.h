//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSArray;

@interface TFNScrollBumpCollectionViewLayout : UICollectionViewLayout
{
    double _pageSpacing;
    unsigned long long _numberOfPages;
    NSArray *_layoutAttributes;
    struct CGSize _pageSize;
    struct UIEdgeInsets _pageInsets;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
@property(nonatomic) struct CGSize pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) unsigned long long numberOfPages; // @synthesize numberOfPages=_numberOfPages;
@property(nonatomic) struct UIEdgeInsets pageInsets; // @synthesize pageInsets=_pageInsets;
@property(nonatomic) double pageSpacing; // @synthesize pageSpacing=_pageSpacing;
- (void)_updatePageSize;
- (id)_indexesOfPagesIntersectingRect:(struct CGRect)arg1;
- (struct CGRect)rectForPageAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfPageAtPoint:(struct CGPoint)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)prepareLayout;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;

@end

