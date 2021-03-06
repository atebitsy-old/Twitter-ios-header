//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary;
@protocol JBLineChartDotsViewDataSource;

@interface JBLineChartDotsView : UIView
{
    id <JBLineChartDotsViewDataSource> _dataSource;
    long long _selectedLineIndex;
    NSDictionary *_dotViewsDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *dotViewsDict; // @synthesize dotViewsDict=_dotViewsDict;
@property(nonatomic) long long selectedLineIndex; // @synthesize selectedLineIndex=_selectedLineIndex;
@property(nonatomic) id <JBLineChartDotsViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)dotViewForHorizontalIndex:(unsigned long long)arg1 atLineIndex:(unsigned long long)arg2;
- (void)setSelectedLineIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)reloadData;
- (void)reloadDataAnimated:(_Bool)arg1;
- (void)reloadDataAnimated:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

