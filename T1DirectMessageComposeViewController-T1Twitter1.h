//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1DirectMessageComposeViewController.h>

#import <T1Twitter/PTVAudioRecorderDelegate-Protocol.h>

@interface T1DirectMessageComposeViewController (T1Twitter1) <PTVAudioRecorderDelegate>
- (void)audioRecorder:(id)arg1 didFailWithError:(id)arg2;
- (void)audioRecorder:(id)arg1 didEndClipWithURL:(id)arg2 recordingWillEnd:(_Bool)arg3;
- (void)audioRecorder:(id)arg1 didUpdateOverallDuration:(double)arg2 clipDuration:(double)arg3 currentAudioLevel:(double)arg4;
- (void)audioRecorderDidCancelRecording:(id)arg1;
- (void)audioRecorderDidEndRecording:(id)arg1;
- (void)audioRecorderDidPauseRecording:(id)arg1;
- (void)audioRecorderDidStartOrResumeRecording:(id)arg1;
@end

