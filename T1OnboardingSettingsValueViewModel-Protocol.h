//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSArray, TFNOnboardingMutableSettingsValue;
@protocol T1OnboardingSettingsValueViewModelDelegate;

@protocol T1OnboardingSettingsValueViewModel <NSObject>
@property(nonatomic) _Bool shouldDisplayCellBorder;
@property(nonatomic) __weak id <T1OnboardingSettingsValueViewModelDelegate> delegate;
- (TFNOnboardingMutableSettingsValue *)settingsValue;
- (NSArray *)detailDataViewItemsForFormCollectionView:(_Bool)arg1;
- (void)dataViewItemForFormCollectionView:(_Bool)arg1 completion:(void (^)(TFNDataViewItem *))arg2;
@end

