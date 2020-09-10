//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1ProfileDisplayContentProvider.h>

@class NSString, NSURL, T1ProfileContentSubheaderEntry;

@interface T1ProfileDisplayWithheldForCountryContentProvider : T1ProfileDisplayContentProvider
{
    T1ProfileContentSubheaderEntry *_viewingOwnProfileSubheaderEntry;
    CDUnknownBlockType _activeTextActionBlock;
    NSString *_subtitleText;
    NSURL *_learnMoreURL;
    struct _NSRange _subtitleRange;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *learnMoreURL; // @synthesize learnMoreURL=_learnMoreURL;
@property(nonatomic) struct _NSRange subtitleRange; // @synthesize subtitleRange=_subtitleRange;
@property(copy, nonatomic) NSString *subtitleText; // @synthesize subtitleText=_subtitleText;
@property(copy, nonatomic) CDUnknownBlockType activeTextActionBlock; // @synthesize activeTextActionBlock=_activeTextActionBlock;
@property(retain, nonatomic) T1ProfileContentSubheaderEntry *viewingOwnProfileSubheaderEntry; // @synthesize viewingOwnProfileSubheaderEntry=_viewingOwnProfileSubheaderEntry;
- (void)_t1_generateSubtitlePropertiesIfNeeded;
- (id)contentSubheaderEntries;
- (id)generateDefaultMainViewController;
- (void)removeCachedViewControllersIfNeeded;
- (id)scribeSection;
- (_Bool)shouldShowUserImagesWhenCurrent;
- (_Bool)shouldAllowScrollingWhenCurrent;
- (_Bool)canBecomeCurrent;

@end
