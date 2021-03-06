//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TAVAnalyticsPresentationScribeParameters, TAVScribeContext;

@interface TAVPlayerViewConfiguration : NSObject
{
    _Bool _isMuted;
    _Bool _allowsExternalPlayback;
    _Bool _shouldFirePlayFromTapBillableEvent;
    _Bool _isPreview;
    _Bool _isFullscreen;
    _Bool _shouldAutoAdvance;
    _Bool _audioInterruptsOtherApps;
    long long _outputViewVideoGravity;
    double _preferredPeakBitrate;
    TAVScribeContext *_scribeContext;
    TAVAnalyticsPresentationScribeParameters *_presentationScribeParameters;
    long long _loopingBehavior;
    long long _attachmentPriority;
    CDStruct_3e1f3fa0 _captionRenderingOptions;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool audioInterruptsOtherApps; // @synthesize audioInterruptsOtherApps=_audioInterruptsOtherApps;
@property(nonatomic) long long attachmentPriority; // @synthesize attachmentPriority=_attachmentPriority;
@property(nonatomic) long long loopingBehavior; // @synthesize loopingBehavior=_loopingBehavior;
@property(nonatomic) _Bool shouldAutoAdvance; // @synthesize shouldAutoAdvance=_shouldAutoAdvance;
@property(nonatomic) CDStruct_3e1f3fa0 captionRenderingOptions; // @synthesize captionRenderingOptions=_captionRenderingOptions;
@property(copy, nonatomic) TAVAnalyticsPresentationScribeParameters *presentationScribeParameters; // @synthesize presentationScribeParameters=_presentationScribeParameters;
@property(copy, nonatomic) TAVScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(nonatomic) double preferredPeakBitrate; // @synthesize preferredPeakBitrate=_preferredPeakBitrate;
@property(nonatomic) _Bool isFullscreen; // @synthesize isFullscreen=_isFullscreen;
@property(nonatomic) _Bool isPreview; // @synthesize isPreview=_isPreview;
@property(nonatomic) _Bool shouldFirePlayFromTapBillableEvent; // @synthesize shouldFirePlayFromTapBillableEvent=_shouldFirePlayFromTapBillableEvent;
@property(nonatomic) _Bool allowsExternalPlayback; // @synthesize allowsExternalPlayback=_allowsExternalPlayback;
@property(nonatomic) long long outputViewVideoGravity; // @synthesize outputViewVideoGravity=_outputViewVideoGravity;
@property(nonatomic) _Bool isMuted; // @synthesize isMuted=_isMuted;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIsMuted:(_Bool)arg1 outputViewVideoGravity:(long long)arg2 allowsExternalPlayback:(_Bool)arg3 isPreview:(_Bool)arg4 isFullscreen:(_Bool)arg5 preferredPeakBitrate:(double)arg6 shouldFirePlayFromTapBillableEvent:(_Bool)arg7 scribeContext:(id)arg8 presentationScribeParameters:(id)arg9 captionRenderingOptions:(CDStruct_3e1f3fa0)arg10 shouldAutoAdvance:(_Bool)arg11 loopingBehavior:(long long)arg12 attachmentPriority:(long long)arg13 audioInterruptsOtherApps:(_Bool)arg14;
- (id)init;

@end

