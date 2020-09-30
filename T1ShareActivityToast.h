//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1ShareActivityToastViewModel-Protocol.h>

@class NSArray, NSString, T1ToastAction, T1ToastScribeContext, TFSTwitterScribeContext, UIColor, UIImage;
@protocol TFSTwitterCanonicalUser;

@interface T1ShareActivityToast : NSObject <T1ShareActivityToastViewModel>
{
    TFSTwitterScribeContext *_scribeContext;
    NSString *_localizedDelimitedTitle;
    NSArray *_rankedActivities;
}

+ (id)shareActivityToastWithLocalizedDelimitedTitle:(id)arg1 account:(id)arg2 user:(id)arg3 viewController:(id)arg4;
+ (id)shareActivityToastWithLocalizedDelimitedTitle:(id)arg1 account:(id)arg2 status:(id)arg3 viewController:(id)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *rankedActivities; // @synthesize rankedActivities=_rankedActivities;
@property(readonly, copy, nonatomic) NSString *localizedDelimitedTitle; // @synthesize localizedDelimitedTitle=_localizedDelimitedTitle;
- (id)toastActionForActivity:(id)arg1;
@property(readonly, nonatomic) T1ToastScribeContext *scribeContext;
- (id)customToastContentViewWithFrame:(struct CGRect)arg1;
@property(readonly, copy, nonatomic) NSString *messageText;
- (id)initWithLocalizedDelimitedTitle:(id)arg1 rankedActivities:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) T1ToastAction *alternateAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *detailText;
@property(readonly, nonatomic) NSArray *detailTextBoldRanges;
@property(readonly, nonatomic) double displayDuration;
@property(readonly, nonatomic) long long hapticFeedbackType;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIColor *iconColor;
@property(readonly, copy, nonatomic) NSString *iconName;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSArray *messageTextBoldRanges;
@property(readonly, nonatomic) T1ToastAction *primaryAction;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIImage *thumbnailImage;
@property(readonly, nonatomic) id <TFSTwitterCanonicalUser> user;

@end

