//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, T1FleetsProfileHeaderAvatarView, T1ProfileAvatarImageView, TFNTwitterAccount, TFNTwitterUserDataSource, UIImage, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol T1ProfileSummaryViewDelegate;

@interface T1ProfileSummaryView : UIView
{
    UITapGestureRecognizer *_avatarTapGestureRecognizer;
    UILongPressGestureRecognizer *_avatarLongPressGestureRecognizer;
    UITapGestureRecognizer *_titleTapGestureRecognizer;
    _Bool _supportsCompactLayout;
    _Bool _shouldBounce;
    _Bool _shouldLeaveSpaceForBackButton;
    _Bool _shouldDisplayFullName;
    _Bool _showAddAvatarOverlay;
    _Bool _shouldUseCompactLayout;
    TFNTwitterAccount *_account;
    TFNTwitterUserDataSource *_userDataSource;
    id <T1ProfileSummaryViewDelegate> _delegate;
    double _preferredHeight;
    T1FleetsProfileHeaderAvatarView *_fleetsAvatarView;
    double _fullNameAlpha;
    NSString *_headerSubtitle;
    double _topLayoutGuide;
    double _fullLayoutGuidePosition;
    double _collapsedLayoutGuidePosition;
    double _collapsedHeight;
    double _topGuideForCompactLayout;
    double _rightGuideForCompactLayout;
    T1ProfileAvatarImageView *_avatarView;
    UIView *_avatarContainerView;
    NSMutableArray *_maskViews;
    NSMutableArray *_positionedElements;
}

+ (double)bottomContentPaddingToLastBaseline;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *positionedElements; // @synthesize positionedElements=_positionedElements;
@property(readonly, nonatomic) NSMutableArray *maskViews; // @synthesize maskViews=_maskViews;
@property(readonly, nonatomic) UIView *avatarContainerView; // @synthesize avatarContainerView=_avatarContainerView;
@property(readonly, nonatomic) T1ProfileAvatarImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) _Bool shouldUseCompactLayout; // @synthesize shouldUseCompactLayout=_shouldUseCompactLayout;
@property(nonatomic) double rightGuideForCompactLayout; // @synthesize rightGuideForCompactLayout=_rightGuideForCompactLayout;
@property(nonatomic) double topGuideForCompactLayout; // @synthesize topGuideForCompactLayout=_topGuideForCompactLayout;
@property(nonatomic) double collapsedHeight; // @synthesize collapsedHeight=_collapsedHeight;
@property(nonatomic) double collapsedLayoutGuidePosition; // @synthesize collapsedLayoutGuidePosition=_collapsedLayoutGuidePosition;
@property(nonatomic) double fullLayoutGuidePosition; // @synthesize fullLayoutGuidePosition=_fullLayoutGuidePosition;
@property(nonatomic) double topLayoutGuide; // @synthesize topLayoutGuide=_topLayoutGuide;
@property(nonatomic) _Bool showAddAvatarOverlay; // @synthesize showAddAvatarOverlay=_showAddAvatarOverlay;
@property(retain, nonatomic) NSString *headerSubtitle; // @synthesize headerSubtitle=_headerSubtitle;
@property(nonatomic) double fullNameAlpha; // @synthesize fullNameAlpha=_fullNameAlpha;
@property(retain, nonatomic) T1FleetsProfileHeaderAvatarView *fleetsAvatarView; // @synthesize fleetsAvatarView=_fleetsAvatarView;
@property(readonly, nonatomic) double preferredHeight; // @synthesize preferredHeight=_preferredHeight;
@property(nonatomic) __weak id <T1ProfileSummaryViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldDisplayFullName; // @synthesize shouldDisplayFullName=_shouldDisplayFullName;
@property(nonatomic) _Bool shouldLeaveSpaceForBackButton; // @synthesize shouldLeaveSpaceForBackButton=_shouldLeaveSpaceForBackButton;
@property(nonatomic) _Bool shouldBounce; // @synthesize shouldBounce=_shouldBounce;
@property(retain, nonatomic) TFNTwitterUserDataSource *userDataSource; // @synthesize userDataSource=_userDataSource;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void)tfx_profileLargeAvatarWidthParameterChanged;
- (void)tfx_profileStandardAvatarWidthRegularWidthLandscapeParameterChanged;
- (void)tfx_profileStandardAvatarWidthCompactWidthLandscapeParameterChanged;
- (void)tfx_profileStandardAvatarWidthRegularHeightPortraitParameterChanged;
- (void)tfx_profileStandardAvatarWidthPortraitParameterChanged;
- (void)_t1_updateDesignatorBadgeForPosition:(unsigned long long)arg1;
- (void)_t1_updateLayoutType;
- (struct CGSize)_t1_standardAvatarSize;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (double)_t1_heightOfUnwrappedFullNameLabelForPosition:(unsigned long long)arg1;
- (double)_t1_heightOfUnwrappedFullNameAndSubtitleLabelsForPosition:(unsigned long long)arg1;
- (double)_t1_fullNameToSubtitleSpacingForPosition:(unsigned long long)arg1;
- (struct CGSize)_t1_fullNameSizeForPosition:(unsigned long long)arg1 attributedText:(id)arg2 constrainedToWidth:(double)arg3;
- (double)_t1_layoutGuidePositionForPinnedFullNameIncludingSubtitle:(_Bool)arg1;
- (void)dealloc;
- (_Bool)isAccessibilityElement;
- (void)_t1_userDataSourceDidUpdate;
- (void)setHeaderSubtitle:(id)arg1 animated:(_Bool)arg2;
- (void)_t1_updateAvatarViewStyle;
- (void)_t1_didTapFullName:(id)arg1;
- (void)_t1_didLongPressAvatar:(id)arg1;
- (void)_t1_didTapAvatar:(id)arg1;
- (struct CGRect)_t1_avatarViewFrameForContainerViewBounds:(struct CGRect)arg1;
- (struct CGRect)_t1_avatarContainerViewFrame;
- (void)_t1_layoutAvatarView;
- (double)_t1_collapsedAvatarProgress;
- (double)_t1_collapsedAvatarHeight;
- (double)_t1_fullAvatarHeight;
- (struct CGRect)_t1_contentFrameForPosition:(unsigned long long)arg1 hasSubtitle:(_Bool)arg2;
- (double)_t1_contentYOriginForPosition:(unsigned long long)arg1;
- (double)_t1_layoutElements:(id)arg1 atPosition:(unsigned long long)arg2 forSizingOnly:(_Bool)arg3;
- (void)_t1_updatePropertiesForFullNameLabel:(id)arg1 subtitleLabel:(id)arg2 atPosition:(unsigned long long)arg3;
- (id)_t1_subtitleFontForPosition:(unsigned long long)arg1;
- (id)_t1_fullNameFontForPosition:(unsigned long long)arg1;
- (long long)_t1_fullNameLineBreakModeForPosition:(unsigned long long)arg1;
- (void)_t1_addPositionedElementsForPosition:(unsigned long long)arg1;
- (void)updateFontSize;
@property(readonly, nonatomic) UIImage *currentAvatarImage;
@property(nonatomic) _Bool shouldObscureAvatar;
@property(nonatomic, getter=isProfileImageHidden) _Bool profileImageHidden;
@property(readonly, nonatomic) UIView *affiliateLabel;
@property(readonly, nonatomic) struct CGRect profileImageFrame;
- (void)updatePreferredHeight;
@property(readonly, nonatomic) double standardAvatarHeight;
- (double)minimumScrollableHeightForBounce;
- (id)accessibleNavigationBarElements;
- (id)initWithMaxPosition:(unsigned long long)arg1 supportsCompactLayout:(_Bool)arg2;

@end

