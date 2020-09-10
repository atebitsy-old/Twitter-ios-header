//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterAVCore/NSCopying-Protocol.h>

@interface TAVWallTime : NSObject <NSCopying>
{
    unsigned long long _machTime;
}

+ (id)wallTimeWithInterval:(double)arg1 sinceWallTime:(id)arg2;
+ (unsigned long long)tav_machTimeWithSeconds:(double)arg1;
+ (double)tav_secondsWithMachTime:(double)arg1;
+ (struct mach_timebase_info)tav_machTimebase;
@property(nonatomic) unsigned long long machTime; // @synthesize machTime=_machTime;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)intervalSinceWallTime:(id)arg1;
- (id)initWithMachTime:(unsigned long long)arg1;
- (id)init;

@end

