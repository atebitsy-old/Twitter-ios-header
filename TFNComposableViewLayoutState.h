//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TFNComposableViewLayoutState : NSObject
{
    double _topContentInset;
    struct CGSize _size;
    struct UIEdgeInsets _baselineEdgeInsets;
    struct UIEdgeInsets _additionalEdgeInsets;
}

@property(nonatomic) struct UIEdgeInsets additionalEdgeInsets; // @synthesize additionalEdgeInsets=_additionalEdgeInsets;
@property(nonatomic) struct UIEdgeInsets baselineEdgeInsets; // @synthesize baselineEdgeInsets=_baselineEdgeInsets;
@property(nonatomic) double topContentInset; // @synthesize topContentInset=_topContentInset;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;

@end

