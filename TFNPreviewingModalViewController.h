//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <TFNUI/TFNModalContainerViewController-Protocol.h>

@class NSArray, NSString, UIView;
@protocol TFNModalContainerViewController, TFNModalContainerViewControllerDelegate;

@interface TFNPreviewingModalViewController : UIViewController <TFNModalContainerViewController>
{
    id <TFNModalContainerViewControllerDelegate> _delegate;
    UIViewController *_modalContentViewController;
    NSArray *_tfn_deprecated_overrideActionItems;
    CDUnknownBlockType _commitAction;
    long long _result;
    UIView *_transformView;
    UIViewController<TFNModalContainerViewController> *_originalModalContainerViewController;
    CDUnknownBlockType _previewDidRun;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType previewDidRun; // @synthesize previewDidRun=_previewDidRun;
@property(retain, nonatomic) UIViewController<TFNModalContainerViewController> *originalModalContainerViewController; // @synthesize originalModalContainerViewController=_originalModalContainerViewController;
@property(retain, nonatomic) UIView *transformView; // @synthesize transformView=_transformView;
@property(nonatomic) long long result; // @synthesize result=_result;
@property(copy, nonatomic) CDUnknownBlockType commitAction; // @synthesize commitAction=_commitAction;
@property(copy, nonatomic) NSArray *tfn_deprecated_overrideActionItems; // @synthesize tfn_deprecated_overrideActionItems=_tfn_deprecated_overrideActionItems;
@property(retain, nonatomic) UIViewController *modalContentViewController; // @synthesize modalContentViewController=_modalContentViewController;
@property(nonatomic) __weak id <TFNModalContainerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tfnPresentedCustomDismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)tfnPresentedCustomPresentFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic, getter=isDismissableWithGesture) _Bool dismissableWithGesture;
- (double)lengthOfLayoutGuide:(long long)arg1 forEnvironment:(id)arg2;
- (id)previewActionItems;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)cancelPreviewing;
- (id)commit;
- (void)_sendPreviewingStateDidChangeToView:(id)arg1;
- (void)_sendPreviewingStateDidChangeToViewController:(id)arg1;
- (void)_addModalContentViewControllerView;
@property(readonly, nonatomic) _Bool previewCancelled;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (id)initWithModalContentViewController:(id)arg1 didRunBlock:(CDUnknownBlockType)arg2;
- (id)initWithModalContentViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

