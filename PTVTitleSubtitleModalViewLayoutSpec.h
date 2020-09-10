//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PTVTitleSubtitleModalViewLayoutSpec : NSObject
{
}

+ (struct CGRect)DismissButtonFrameWithImageSize:(struct CGSize)arg1 ModalTheme:(long long)arg2 SuperviewSize:(struct CGSize)arg3;
+ (struct CGRect)FooterFrameWithHeight:(double)arg1 SuperViewSize:(struct CGSize)arg2;
+ (id)FooterLabelAttributed:(id)arg1 ModalTheme:(long long)arg2;
+ (struct CGRect)SecondaryButtonFrameWithHeight:(double)arg1 FooterLabelHeight:(double)arg2 ModalTheme:(long long)arg3 SuperviewSize:(struct CGSize)arg4;
+ (id)AttributedSecondaryButtonTitle:(id)arg1 ModalTheme:(long long)arg2 Selected:(_Bool)arg3;
+ (struct CGRect)MainActionButtonFrameWithHeight:(double)arg1 SecondaryButtonHeight:(double)arg2 FooterLabelHeight:(double)arg3 AttributedTitle:(id)arg4 ModalTheme:(long long)arg5 SuperviewSize:(struct CGSize)arg6;
+ (double)MainButtonHeightWithModalTheme:(long long)arg1;
+ (id)AttributedMainButtonTitle:(id)arg1 ModalTheme:(long long)arg2;
+ (struct CGRect)SubtitleFrameWithSubtitleSize:(struct CGSize)arg1 TitleLabelFrame:(struct CGRect)arg2 TitleAndHeaderBackgroundVisible:(_Bool)arg3 HeaderImageSize:(struct CGSize)arg4 SuperviewSize:(struct CGSize)arg5;
+ (struct CGRect)TitleFrameWithSize:(struct CGSize)arg1 HeaderImageSize:(struct CGSize)arg2 SuperviewSize:(struct CGSize)arg3;
+ (struct CGSize)TitleLabelSize:(id)arg1 ModalTheme:(long long)arg2 SuperviewSize:(struct CGSize)arg3 TraitCollection:(id)arg4;
+ (struct CGRect)HeaderImageFrameWithImageSize:(struct CGSize)arg1 SuperviewSize:(struct CGSize)arg2;
+ (struct CGRect)HeaderBackgroundViewFrameWithTitleLabelSize:(struct CGSize)arg1 HeaderImageSize:(struct CGSize)arg2 SuperviewSize:(struct CGSize)arg3;
+ (id)FooterFont;
+ (id)SecondaryButtonTitleFont;
+ (id)MainButtonTitleFontWithModalTheme:(long long)arg1;
+ (id)SubtitleFontBoldWithModalTheme:(long long)arg1;
+ (id)SubtitleFontWithModalTheme:(long long)arg1;
+ (id)TitleFontWithModalTheme:(long long)arg1;
+ (double)SpacingBetweenMainAndSecondaryButton;
+ (double)YSpacingAboveFooterLabel;
+ (double)DismissButtonPaddingWithModalTheme:(long long)arg1;
+ (struct UIEdgeInsets)InnerContentInsets;
+ (double)ModalViewCornerRadiusWithModalTheme:(long long)arg1;
+ (struct UIEdgeInsets)TitleOuterSpacingIfNoHeaderImage;
+ (struct UIEdgeInsets)ModalMinimumOuterInsets;
+ (double)ModalContentWidthWithSuperviewSize:(struct CGSize)arg1 TraitCollection:(id)arg2;
+ (struct CGSize)MinModalSize:(struct CGSize)arg1;
+ (struct CGSize)ModalViewConstrainedSizeThatFits:(struct CGSize)arg1 BackgroundImageHeight:(double)arg2 TitleLabelHeight:(double)arg3 SubtitleLabelHeight:(double)arg4 ConfirmationButtonHeight:(double)arg5 SecondaryActionButtonHeight:(double)arg6 FooterLabelHeight:(double)arg7 TitleAndHeaderViewVisible:(_Bool)arg8 TraitCollection:(id)arg9;

@end

