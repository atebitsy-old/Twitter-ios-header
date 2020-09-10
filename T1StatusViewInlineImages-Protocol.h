//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class TFSTwitterMediaInfo, UIImage, UIImageView;

@protocol T1StatusViewInlineImages <NSObject>
@property(readonly, nonatomic) long long numberOfImages;
- (long long)imageContentModeAtIndex:(long long)arg1;
- (struct CGRect)imageContentsRectAtIndex:(long long)arg1;
- (UIImageView *)imageViewAtIndex:(long long)arg1;
- (UIImage *)imageAtIndex:(long long)arg1;
- (_Bool)hasAnyVisibleImageBeenDownloaded;
- (TFSTwitterMediaInfo *)mediaInfoAtIndex:(long long)arg1;
@end

