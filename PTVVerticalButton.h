//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@interface PTVVerticalButton : UIButton
{
    double _spacingBetweenImageAndText;
}

@property(nonatomic) double spacingBetweenImageAndText; // @synthesize spacingBetweenImageAndText=_spacingBetweenImageAndText;
- (struct CGSize)imageAndBackgroundSize;
- (struct CGRect)imageAndBackgroundRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)backgroundRectForBounds:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

