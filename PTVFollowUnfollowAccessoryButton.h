//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/PTVExtendedButton.h>

@class UIImage, UIImageView;

@interface PTVFollowUnfollowAccessoryButton : PTVExtendedButton
{
    UIImage *_unfollowImage;
    UIImage *_unfollowImageHighlighted;
    UIImage *_followImage;
    UIImage *_followImageHighlighted;
    UIImageView *_muteImage;
    unsigned long long _followingState;
}

+ (id)UnfollowAccessoryImage;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long followingState; // @synthesize followingState=_followingState;
- (void)executeFollowingState;
- (void)layoutSubviews;
- (id)init;

@end

