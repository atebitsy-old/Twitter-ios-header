//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterAVCore/NSCopying-Protocol.h>

@class NSError, NSNumber, NSString, TAVFoundationAVPlayerItemSnapshot;

@interface TAVFoundationAVPlayerSnapshot : NSObject <NSCopying>
{
    float _rate;
    unsigned int _timeJumpCount;
    TAVFoundationAVPlayerItemSnapshot *_currentItem;
    long long _status;
    NSError *_error;
    long long _timeControlStatus;
    NSString *_reasonForWaitingToPlay;
    NSNumber *_relativePresentationOffset;
    CDStruct_1b6d18a9 _currentTime;
    CDStruct_1b6d18a9 _lastTimeJumpTime;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *relativePresentationOffset; // @synthesize relativePresentationOffset=_relativePresentationOffset;
@property(readonly, nonatomic) unsigned int timeJumpCount; // @synthesize timeJumpCount=_timeJumpCount;
@property(readonly, nonatomic) CDStruct_1b6d18a9 lastTimeJumpTime; // @synthesize lastTimeJumpTime=_lastTimeJumpTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 currentTime; // @synthesize currentTime=_currentTime;
@property(readonly, copy, nonatomic) NSString *reasonForWaitingToPlay; // @synthesize reasonForWaitingToPlay=_reasonForWaitingToPlay;
@property(readonly, nonatomic) long long timeControlStatus; // @synthesize timeControlStatus=_timeControlStatus;
@property(readonly, nonatomic) float rate; // @synthesize rate=_rate;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) TAVFoundationAVPlayerItemSnapshot *currentItem; // @synthesize currentItem=_currentItem;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)tavReasonForWaitingToPlay;
- (long long)tavTimeControlStatus;
- (id)initWithCurrentItem:(id)arg1 status:(long long)arg2 error:(id)arg3 rate:(float)arg4 currentTime:(CDStruct_1b6d18a9)arg5 lastTimeJumpTime:(CDStruct_1b6d18a9)arg6 timeJumpCount:(unsigned int)arg7 timeControlStatus:(long long)arg8 reasonForWaitingToPlay:(id)arg9 relativePresentationOffset:(id)arg10;

@end

