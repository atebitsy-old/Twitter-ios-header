//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPredicate;
@protocol TFNItemsTransformer;

@interface TFNItemsSectionTransformerItemsTransformerPredicatePair : NSObject
{
    id <TFNItemsTransformer> _transformer;
    NSPredicate *_predicate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(retain, nonatomic) id <TFNItemsTransformer> transformer; // @synthesize transformer=_transformer;

@end
