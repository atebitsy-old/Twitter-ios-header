//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSTwitterCore/TFSModel-Protocol.h>

@class NSString;

@interface TFSTwitterDeviceRegistration : NSObject <TFSModel>
{
    long long _userID;
    long long _deviceID;
    NSString *_phoneNumber;
    unsigned long long _state;
}

+ (id)deviceRegisterWithJSONData:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(readonly, nonatomic) long long deviceID; // @synthesize deviceID=_deviceID;
@property(readonly, nonatomic) long long userID; // @synthesize userID=_userID;
- (id)init;
- (id)initWithUserID:(long long)arg1 deviceID:(long long)arg2 phoneNumber:(id)arg3 state:(unsigned long long)arg4;

@end

