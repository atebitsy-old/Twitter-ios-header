//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/UIDropInteractionDelegate-Protocol.h>
#import <T1Twitter/UITextDropDelegate-Protocol.h>

@class NSString, TFNTwitterAccount, TFSTwitterScribeContext, UIDropInteraction, UIView;
@protocol T1ComposeDropManagerDelegate, TFNDropDataSource;

@interface T1ComposeDropManager : NSObject <UIDropInteractionDelegate, UITextDropDelegate>
{
    _Bool _dropIndicationForTextDropEnabled;
    UIView *_targetView;
    id <TFNDropDataSource> _dataSource;
    id <T1ComposeDropManagerDelegate> _delegate;
    UIDropInteraction *_dropInteraction;
    TFNTwitterAccount *_account;
    TFSTwitterScribeContext *_scribeContext;
    unsigned long long _dropSessionState;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long dropSessionState; // @synthesize dropSessionState=_dropSessionState;
@property(readonly, copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) UIDropInteraction *dropInteraction; // @synthesize dropInteraction=_dropInteraction;
@property(nonatomic) __weak id <T1ComposeDropManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <TFNDropDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) _Bool dropIndicationForTextDropEnabled; // @synthesize dropIndicationForTextDropEnabled=_dropIndicationForTextDropEnabled;
@property(retain, nonatomic) UIView *targetView; // @synthesize targetView=_targetView;
- (void)_t1_updateSessionStateForItems:(id)arg1;
- (void)_t1_updateDropIndicationViewText:(id)arg1 backgroundStyle:(unsigned long long)arg2;
- (void)_t1_updateDropIndicationViewForSession:(id)arg1;
- (void)_t1_dropURLForSession:(id)arg1 dropDataSource:(id)arg2;
- (void)_t1_dropVideoForSession:(id)arg1 dropDataSource:(id)arg2;
- (void)_t1_dropImagesForSession:(id)arg1 dropDataSource:(id)arg2;
- (void)_t1_dropAnimatedGIFForSession:(id)arg1 dropDataSource:(id)arg2;
- (void)_t1_logScribeAction:(id)arg1 element:(id)arg2;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)initWithAccount:(id)arg1 scribeContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

