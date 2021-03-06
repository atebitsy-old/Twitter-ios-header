//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSError, NSURL, PTVAudioRecorder;

@protocol PTVAudioRecorderDelegate <NSObject>
- (void)audioRecorder:(PTVAudioRecorder *)arg1 didFailWithError:(NSError *)arg2;
- (void)audioRecorder:(PTVAudioRecorder *)arg1 didEndClipWithURL:(NSURL *)arg2 recordingWillEnd:(_Bool)arg3;
- (void)audioRecorder:(PTVAudioRecorder *)arg1 didUpdateOverallDuration:(double)arg2 clipDuration:(double)arg3 currentAudioLevel:(double)arg4;
- (void)audioRecorderDidCancelRecording:(PTVAudioRecorder *)arg1;
- (void)audioRecorderDidEndRecording:(PTVAudioRecorder *)arg1;
- (void)audioRecorderDidPauseRecording:(PTVAudioRecorder *)arg1;
- (void)audioRecorderDidStartOrResumeRecording:(PTVAudioRecorder *)arg1;
@end

