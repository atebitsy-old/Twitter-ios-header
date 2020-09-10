//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/NSCopying-Protocol.h>

@class NSDate, NSError, NSString;

@interface TFNTwitterMediaAssetPackedSegmentedUploadScribeValue : NSObject <NSCopying>
{
    float _progress;
    NSString *_mediaID;
    NSDate *_startDate;
    NSDate *_completeDate;
    unsigned long long _state;
    unsigned long long _errorPhase;
    NSError *_error;
    unsigned long long _totalBytes;
    unsigned long long _totalSegmentsUploaded;
    unsigned long long _totalInitRetries;
    unsigned long long _totalAppendRetries;
    unsigned long long _totalFinalizeRetries;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long totalFinalizeRetries; // @synthesize totalFinalizeRetries=_totalFinalizeRetries;
@property(nonatomic) unsigned long long totalAppendRetries; // @synthesize totalAppendRetries=_totalAppendRetries;
@property(nonatomic) unsigned long long totalInitRetries; // @synthesize totalInitRetries=_totalInitRetries;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(nonatomic) unsigned long long totalSegmentsUploaded; // @synthesize totalSegmentsUploaded=_totalSegmentsUploaded;
@property(nonatomic) unsigned long long totalBytes; // @synthesize totalBytes=_totalBytes;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) unsigned long long errorPhase; // @synthesize errorPhase=_errorPhase;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSDate *completeDate; // @synthesize completeDate=_completeDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(copy, nonatomic) NSString *mediaID; // @synthesize mediaID=_mediaID;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

