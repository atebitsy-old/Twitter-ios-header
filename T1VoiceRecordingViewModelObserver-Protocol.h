//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1VoiceRecordingViewModel;
@protocol T1VoiceAudiowaveViewModel;

@protocol T1VoiceRecordingViewModelObserver <NSObject>

@optional
- (void)voiceRecordingViewModelDidUpdateTimer:(T1VoiceRecordingViewModel *)arg1;
- (void)voiceRecordingViewModelDidUpdateStep:(T1VoiceRecordingViewModel *)arg1;
- (void)voiceRecordingViewModel:(T1VoiceRecordingViewModel *)arg1 didEndRecordingAudiowaveViewModel:(id <T1VoiceAudiowaveViewModel>)arg2 recordingWillEnd:(_Bool)arg3;
@end

