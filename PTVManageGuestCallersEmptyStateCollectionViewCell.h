//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class PTVExtendedButton, UILabel;
@protocol PTVManageGuestCallersEmptyStateCollectionViewCellDelegate;

@interface PTVManageGuestCallersEmptyStateCollectionViewCell : UICollectionViewCell
{
    UILabel *_emptyLabel;
    PTVExtendedButton *_requestCallersButton;
    _Bool _isDisableCallersButtonSelected;
    id <PTVManageGuestCallersEmptyStateCollectionViewCellDelegate> _delegate;
}

+ (id)RequestCallersButtonImage;
+ (id)EmptyLabelAttributed;
+ (double)HeightThatFitsContainerSize:(struct CGSize)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isDisableCallersButtonSelected; // @synthesize isDisableCallersButtonSelected=_isDisableCallersButtonSelected;
@property(nonatomic) __weak id <PTVManageGuestCallersEmptyStateCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didSelectRequestCallersButton;
- (void)buttonBackgroundColorState;
- (id)requestCallersAttributedTitle:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end

