//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PTVPreBroadcastViewLayoutSpec : NSObject
{
}

+ (struct CGRect)ExitButtonFrameWithImageSize:(struct CGSize)arg1 SuperViewSize:(struct CGSize)arg2;
+ (id)StatusTextViewFont;
+ (struct UIEdgeInsets)HeaderEdgeInsets;
+ (struct UIEdgeInsets)MainEdgeInsets;
+ (CDStruct_d74dc97c)LayoutPreBroadcastViewInRect:(struct CGRect)arg1 withTraits:(id)arg2 headerViewSize:(struct CGSize)arg3 audienceSelectorSize:(struct CGSize)arg4 controlsSize:(struct CGSize)arg5 connectionStatusSize:(struct CGSize)arg6 isControlsViewHidden:(_Bool)arg7;
+ (_Bool)ShouldRenderControlsOnSameLine:(id)arg1;

@end

