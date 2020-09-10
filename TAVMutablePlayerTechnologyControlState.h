//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterAVCore/TAVPlayerTechnologyControlState.h>

@class NSNumber;
@protocol TAVMediaSelectionOption;

@interface TAVMutablePlayerTechnologyControlState : TAVPlayerTechnologyControlState
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(nonatomic) _Bool allowsExternalPlayback; // @dynamic allowsExternalPlayback;
@property(nonatomic) _Bool captionsEnabled; // @dynamic captionsEnabled;
@property(nonatomic) _Bool isMuted; // @dynamic isMuted;
@property(nonatomic) _Bool isPlaybackDesired; // @dynamic isPlaybackDesired;
@property(nonatomic) double preferredForwardBufferDuration; // @dynamic preferredForwardBufferDuration;
@property(nonatomic) struct CGSize preferredMaximumResolution; // @dynamic preferredMaximumResolution;
@property(nonatomic) double preferredPeakBitrate; // @dynamic preferredPeakBitrate;
@property(nonatomic) _Bool preventSleep; // @dynamic preventSleep;
@property(copy, nonatomic) id <TAVMediaSelectionOption> selectedLegibleMediaOption; // @dynamic selectedLegibleMediaOption;
@property(nonatomic) _Bool shouldLoop; // @dynamic shouldLoop;
@property(copy, nonatomic) NSNumber *targetRelativePresentationOffset; // @dynamic targetRelativePresentationOffset;
@property(nonatomic) float volume; // @dynamic volume;

@end
