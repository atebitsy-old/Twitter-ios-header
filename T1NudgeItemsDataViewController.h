//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

@class TFNTwitterAccount;

@interface T1NudgeItemsDataViewController : TFNItemsDataViewController
{
    TFNTwitterAccount *_account;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (id)scribeSection;
- (id)scribePage;
- (id)_t1_textItemAdapter;
- (id)_t1_quotedStatusItemAdapter;
- (id)initWithAccount:(id)arg1 sections:(id)arg2 menuActionAdapterDelegate:(id)arg3;
- (void)viewDidLoad;

@end
