//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/NSCoding-Protocol.h>
#import <T1Twitter/TFNTwitterTimelineEntryContext-Protocol.h>

@class NSString;

@interface TFNTwitterTimelineItemEntryContext : NSObject <NSCoding, TFNTwitterTimelineEntryContext>
{
    NSString *_entryID;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *entryID; // @synthesize entryID=_entryID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (id)init;
- (id)initWithEntryID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

