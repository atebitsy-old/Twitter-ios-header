//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1CardViewLayoutDelegate.h>

@interface T1AuthenticatedWebViewCardViewLayoutDelegate : T1CardViewLayoutDelegate
{
}

+ (id)viewModelWithCardContext:(id)arg1;
+ (id)sharedLayoutDelegate;
- (struct CGSize)_fullSizeForString:(id)arg1 font:(id)arg2 width:(double)arg3 lines:(double)arg4;
- (void)layoutSubviewsForCardView:(id)arg1 withState:(id)arg2;
- (id)layoutForViewModel:(id)arg1 layoutMetrics:(id)arg2;
- (struct CGSize)targetImageSizeForViewModel:(id)arg1 layoutMetrics:(id)arg2;

@end

