//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

@class NSString, T1SULCategoryTableRowAdapter, TFNTwitterAccount;

@interface T1SULViewController : TFNItemsDataViewController
{
    NSString *_scribePage;
    NSString *_scribeSection;
    CDUnknownBlockType _nextViewBlock;
    T1SULCategoryTableRowAdapter *_rowAdapter;
    TFNTwitterAccount *_account;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) T1SULCategoryTableRowAdapter *rowAdapter; // @synthesize rowAdapter=_rowAdapter;
@property(copy, nonatomic) CDUnknownBlockType nextViewBlock; // @synthesize nextViewBlock=_nextViewBlock;
@property(copy, nonatomic) NSString *scribeSection; // @synthesize scribeSection=_scribeSection;
@property(copy, nonatomic) NSString *scribePage; // @synthesize scribePage=_scribePage;
- (void)categoriesDidUpdate:(id)arg1;
- (void)loadCategories;
- (void)viewDidLoad;
- (void)_pushNextView;
- (id)scribe;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)init;
- (id)initWithAccount:(id)arg1;

@end

