//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

@class TFNButton, UIActivityIndicatorView, UILabel;
@protocol T1StickerCategoryEmptyViewControllerDelegate;

@interface T1StickerCategoryEmptyViewController : TFNViewController
{
    UIActivityIndicatorView *_indicatorView;
    UILabel *_errorTitleLabel;
    UILabel *_errorMessageLabel;
    TFNButton *_retryButton;
    _Bool _shouldShowError;
    id <T1StickerCategoryEmptyViewControllerDelegate> _delegate;
    long long _catalogType;
}

- (void).cxx_destruct;
@property(nonatomic) long long catalogType; // @synthesize catalogType=_catalogType;
@property(nonatomic) _Bool shouldShowError; // @synthesize shouldShowError=_shouldShowError;
@property(nonatomic) __weak id <T1StickerCategoryEmptyViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_retryButtonTapped:(id)arg1;
- (void)_updateViewStates;
- (id)initWithCatalogType:(long long)arg1;
- (void)viewDidLoad;

@end

