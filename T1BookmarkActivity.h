//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1UIActivity.h>

@class TFNTwitterAccount, TFSTwitterScribeContext;

@interface T1BookmarkActivity : T1UIActivity
{
    TFNTwitterAccount *_account;
    TFSTwitterScribeContext *_scribeContext;
    _Bool _shouldReplaceAddWithRemoveBookmark;
}

- (void).cxx_destruct;
- (void)performActivity;
- (_Bool)isSupported;
- (id)activityTitleForShouldReplaceAddWithRemoveBookmark:(_Bool)arg1;
- (id)initWithStatus:(id)arg1 account:(id)arg2 shouldReplaceAddWithRemoveBookmark:(_Bool)arg3 scribeContext:(id)arg4;

@end

