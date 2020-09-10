//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class T1FoundMediaItemAttributionView, TFNTwitterMediaAsset;

@interface T1MediaAttachmentAttributionView : UIView
{
    TFNTwitterMediaAsset *_attachment;
    T1FoundMediaItemAttributionView *_foundMediaItemAttributionView;
}

+ (struct CGSize)sizeForAttachment:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) T1FoundMediaItemAttributionView *foundMediaItemAttributionView; // @synthesize foundMediaItemAttributionView=_foundMediaItemAttributionView;
@property(retain, nonatomic) TFNTwitterMediaAsset *attachment; // @synthesize attachment=_attachment;
- (void)_updateAttachment;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

