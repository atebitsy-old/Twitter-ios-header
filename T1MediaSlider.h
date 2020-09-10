//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISlider.h>

@interface T1MediaSlider : UISlider
{
    _Bool _padEndsOfTrack;
    unsigned long long _style;
    double _thumbWidth;
    double _trackHeight;
}

+ (id)tfn_trackImageWithColor:(id)arg1 height:(double)arg2 horizontalPadding:(double)arg3;
+ (id)tfn_thumbImageWithWidth:(double)arg1;
@property(readonly, nonatomic) _Bool padEndsOfTrack; // @synthesize padEndsOfTrack=_padEndsOfTrack;
@property(readonly, nonatomic) double trackHeight; // @synthesize trackHeight=_trackHeight;
@property(readonly, nonatomic) double thumbWidth; // @synthesize thumbWidth=_thumbWidth;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
- (void)private_updateImages;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (id)initWithFrame:(struct CGRect)arg1 style:(unsigned long long)arg2 thumbWidth:(double)arg3 trackHeight:(double)arg4 padEndsOfTrack:(_Bool)arg5;
- (id)initWithFrame:(struct CGRect)arg1 style:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

