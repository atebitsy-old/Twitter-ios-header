//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, PTVMergeParticipantUser;

@interface PTVGuestRoomUser : NSObject
{
    NSNumber *_twitterID;
    unsigned long long _traits;
    NSNumber *_audioLevel;
    PTVMergeParticipantUser *_participantUser;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PTVMergeParticipantUser *participantUser; // @synthesize participantUser=_participantUser;
@property(readonly, nonatomic) NSNumber *audioLevel; // @synthesize audioLevel=_audioLevel;
@property(readonly, nonatomic) unsigned long long traits; // @synthesize traits=_traits;
@property(readonly, nonatomic) NSNumber *twitterID; // @synthesize twitterID=_twitterID;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithParticipantUser:(id)arg1 twitterID:(id)arg2;

@end
