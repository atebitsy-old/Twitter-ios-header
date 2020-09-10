//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1VoiceViewModel-Protocol.h>

@class NSArray, NSString, TFNTwitterAccount, UIColor;
@protocol T1StatusViewModel, TFSTwitterCanonicalUser;

@interface T1VoiceStatusViewModel : NSObject <T1VoiceViewModel>
{
    id <T1StatusViewModel> _statusViewModel;
    TFNTwitterAccount *_account;
    NSArray *_convertedAudiowaveValues;
}

+ (id)new;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *convertedAudiowaveValues; // @synthesize convertedAudiowaveValues=_convertedAudiowaveValues;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) id <T1StatusViewModel> statusViewModel; // @synthesize statusViewModel=_statusViewModel;
- (_Bool)isEqualToViewModel:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)playerFactoryIdentifier;
- (id)player;
@property(readonly, nonatomic) NSString *bodyText;
@property(readonly, nonatomic) NSArray *audiowaveValues;
@property(readonly, nonatomic) NSString *positionString;
@property(readonly, nonatomic) unsigned long long brightnessOffset;
@property(readonly, nonatomic) double totalDuration;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) NSString *durationString;
- (void)imageWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) id <TFSTwitterCanonicalUser> representedUser;
@property(readonly, nonatomic) UIColor *color;
@property(readonly, nonatomic) id <TFSTwitterCanonicalUser> user;
- (id)_t1_voiceInfo;
- (id)_t1_representedStatus;
- (id)initWithAccount:(id)arg1 statusViewModel:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

