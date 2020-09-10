//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterAVCoreLHLSLib/TAVCaptionSource-Protocol.h>

@class TAVCaptionStyle;
@protocol TAVCaptionSink;

@interface TAVLHLSCaptionSource : NSObject <TAVCaptionSource>
{
    _Bool _captionsEnabled;
    id <TAVCaptionSink> _captionSink;
    TAVCaptionStyle *_captionStyle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TAVCaptionStyle *captionStyle; // @synthesize captionStyle=_captionStyle;
@property(nonatomic) _Bool captionsEnabled; // @synthesize captionsEnabled=_captionsEnabled;
@property(nonatomic) __weak id <TAVCaptionSink> captionSink; // @synthesize captionSink=_captionSink;
- (void)refreshCaptionsStyle;
- (void)onCaption:(id)arg1;
- (id)init;

@end
