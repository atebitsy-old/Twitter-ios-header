//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1FlexibleLayoutView.h>

#import <T1Twitter/TFNAttributedTextViewDelegate-Protocol.h>

@class NSDate, NSString, T1TranslateButton, TFNAttributedTextView, TFSTwitterEntitySet, TFSTwitterEntityURL, TFSTwitterPlace, TFSTwitterTranslatedProfileBioModel, TFSTwitterUserExtendedProfile, UIButton, UILongPressGestureRecognizer;
@protocol T1ProfileUserInfoViewDelegate;

@interface T1ProfileUserInfoView : T1FlexibleLayoutView <TFNAttributedTextViewDelegate>
{
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    _Bool _isContributor;
    _Bool _viewingOwnProfile;
    _Bool _birthdayDisplayEnabled;
    _Bool _birthdayTappable;
    _Bool _structuredLocationEnabled;
    _Bool _urlDisplayEnabled;
    _Bool _urlTappable;
    _Bool _profileBioTranslatable;
    _Bool _translatedBioShown;
    _Bool _partialUser;
    id <T1ProfileUserInfoViewDelegate> _delegate;
    NSString *_bio;
    NSString *_location;
    NSDate *_createdDate;
    TFSTwitterUserExtendedProfile *_extendedProfile;
    TFSTwitterPlace *_structuredLocation;
    TFSTwitterEntityURL *_url;
    TFSTwitterTranslatedProfileBioModel *_translatedProfileBio;
    TFNAttributedTextView *_bioLabel;
    TFNAttributedTextView *_translatedBioLabel;
    UIButton *_birthdayButton;
    UIButton *_createdDateButton;
    UIButton *_locationButton;
    UIButton *_prototypeBulletpointButton;
    UIButton *_urlButton;
    TFNAttributedTextView *_contributorIndicatorView;
    TFSTwitterEntitySet *_bioEntities;
    T1TranslateButton *_translateBioButton;
    struct UIEdgeInsets _contentEdgeInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) T1TranslateButton *translateBioButton; // @synthesize translateBioButton=_translateBioButton;
@property(retain, nonatomic) TFSTwitterEntitySet *bioEntities; // @synthesize bioEntities=_bioEntities;
@property(retain, nonatomic) TFNAttributedTextView *contributorIndicatorView; // @synthesize contributorIndicatorView=_contributorIndicatorView;
@property(retain, nonatomic) UIButton *urlButton; // @synthesize urlButton=_urlButton;
@property(retain, nonatomic) UIButton *prototypeBulletpointButton; // @synthesize prototypeBulletpointButton=_prototypeBulletpointButton;
@property(retain, nonatomic) UIButton *locationButton; // @synthesize locationButton=_locationButton;
@property(retain, nonatomic) UIButton *createdDateButton; // @synthesize createdDateButton=_createdDateButton;
@property(retain, nonatomic) UIButton *birthdayButton; // @synthesize birthdayButton=_birthdayButton;
@property(retain, nonatomic) TFNAttributedTextView *translatedBioLabel; // @synthesize translatedBioLabel=_translatedBioLabel;
@property(retain, nonatomic) TFNAttributedTextView *bioLabel; // @synthesize bioLabel=_bioLabel;
@property(nonatomic, getter=isPartialUser) _Bool partialUser; // @synthesize partialUser=_partialUser;
@property(retain, nonatomic) TFSTwitterTranslatedProfileBioModel *translatedProfileBio; // @synthesize translatedProfileBio=_translatedProfileBio;
@property(nonatomic, getter=isTranslatedBioShown) _Bool translatedBioShown; // @synthesize translatedBioShown=_translatedBioShown;
@property(nonatomic, getter=isProfileBioTranslatable) _Bool profileBioTranslatable; // @synthesize profileBioTranslatable=_profileBioTranslatable;
@property(nonatomic, getter=isUrlTappable) _Bool urlTappable; // @synthesize urlTappable=_urlTappable;
@property(nonatomic, getter=isUrlDisplayEnabled) _Bool urlDisplayEnabled; // @synthesize urlDisplayEnabled=_urlDisplayEnabled;
@property(nonatomic, getter=isStructuredLocationEnabled) _Bool structuredLocationEnabled; // @synthesize structuredLocationEnabled=_structuredLocationEnabled;
@property(nonatomic, getter=isBirthdayTappable) _Bool birthdayTappable; // @synthesize birthdayTappable=_birthdayTappable;
@property(nonatomic, getter=isBirthdayDisplayEnabled) _Bool birthdayDisplayEnabled; // @synthesize birthdayDisplayEnabled=_birthdayDisplayEnabled;
@property(nonatomic, getter=isViewingOwnProfile) _Bool viewingOwnProfile; // @synthesize viewingOwnProfile=_viewingOwnProfile;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(retain, nonatomic) TFSTwitterEntityURL *url; // @synthesize url=_url;
@property(retain, nonatomic) TFSTwitterPlace *structuredLocation; // @synthesize structuredLocation=_structuredLocation;
@property(retain, nonatomic) TFSTwitterUserExtendedProfile *extendedProfile; // @synthesize extendedProfile=_extendedProfile;
@property(retain, nonatomic) NSDate *createdDate; // @synthesize createdDate=_createdDate;
@property(nonatomic) _Bool isContributor; // @synthesize isContributor=_isContributor;
@property(copy, nonatomic) NSString *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *bio; // @synthesize bio=_bio;
@property(nonatomic) __weak id <T1ProfileUserInfoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (double)_profileHeaderInfoBulletpointIconSize;
- (id)_t1_previewItemAtLocation:(struct CGPoint)arg1 outSourceRect:(out struct CGRect *)arg2 bioLabel:(id)arg3;
- (id)_buttonTitleForUrl:(id)arg1;
- (id)_buttonBackgroundImageForColor:(id)arg1;
- (void)_t1_hashflagVersionDidChange:(id)arg1;
- (void)_t1_refreshTranslateBioButton;
- (void)_t1_refreshURLButton;
- (void)_t1_refreshLocationButton;
- (void)_t1_refreshBulletpointButton:(id)arg1 withTitle:(id)arg2 image:(id)arg3 linkable:(_Bool)arg4 accessibilityFormat:(id)arg5;
- (void)_t1_refreshCreatedDateButton;
- (void)_t1_refreshBirthdayButton;
- (void)_t1_refreshBioLabel:(id)arg1 withText:(id)arg2 entities:(id)arg3;
- (id)_t1_buildTranslateBioButton;
- (id)_t1_buildContributorIndicatorView;
- (id)_t1_buildBulletpointButtonWithLineBreakMode:(long long)arg1 accessibilityIdentifier:(id)arg2 action:(SEL)arg3;
- (id)_t1_buildBioLabel;
- (id)_t1_layoutItemForContributorView:(id)arg1;
- (id)_t1_layoutItemForBulletpointButton:(id)arg1;
- (id)_t1_layoutItemForTranslateBioButton:(id)arg1;
- (id)_t1_layoutItemForBioView:(id)arg1;
- (void)_t1_didHoverOverURLButton:(id)arg1;
- (void)_t1_didTapTranslateBioButton:(id)arg1;
- (void)_didLongPressURLButton:(id)arg1;
- (void)_didTapURLButton:(id)arg1;
- (void)_didTapLocationButton:(id)arg1;
- (void)_didTapBirthdayButton:(id)arg1;
- (void)attributedTextView:(id)arg1 didTapRange:(id)arg2 rect:(struct CGRect)arg3;
- (void)setBio:(id)arg1 entities:(id)arg2;
- (void)updateFontSize;
- (id)previewItemAtLocation:(struct CGPoint)arg1 outSourceRect:(out struct CGRect *)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 isProfileBioTranslationEnabled:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

