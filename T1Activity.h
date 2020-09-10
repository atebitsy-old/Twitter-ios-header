//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivity.h>

@class NSString, TFNTwitterStatus, UIImage;
@protocol T1ActivityDelegate;

@interface T1Activity : UIActivity
{
    TFNTwitterStatus *_status;
    NSString *_identifier;
    unsigned long long _type;
    NSString *_title;
    UIImage *_image;
    id <T1ActivityDelegate> _delegate;
    NSString *_scribeAction;
}

+ (long long)activityCategory;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *scribeAction; // @synthesize scribeAction=_scribeAction;
@property(nonatomic) __weak id <T1ActivityDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) TFNTwitterStatus *status; // @synthesize status=_status;
- (void)activityDidFinish:(_Bool)arg1;
- (void)performActivity;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityType;
- (id)activityImage;
- (id)activityTitle;
@property(readonly, nonatomic) _Bool isSupported;
- (id)initWithTwitterStatus:(id)arg1 identifier:(id)arg2 type:(unsigned long long)arg3 title:(id)arg4 image:(id)arg5;
- (id)initWithTwitterStatus:(id)arg1 identifier:(id)arg2 type:(unsigned long long)arg3 title:(id)arg4 imageName:(id)arg5;

@end

