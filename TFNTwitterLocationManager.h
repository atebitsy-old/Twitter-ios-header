//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/CLLocationManagerDelegate-Protocol.h>

@class CLLocationManager, NSString;
@protocol TFNTwitterLocationManagerDelegate;

@interface TFNTwitterLocationManager : NSObject <CLLocationManagerDelegate>
{
    id <TFNTwitterLocationManagerDelegate> _delegate;
    unsigned long long _locationSubscribersCount;
    CLLocationManager *_locationManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(nonatomic) unsigned long long locationSubscribersCount; // @synthesize locationSubscribersCount=_locationSubscribersCount;
@property(nonatomic) __weak id <TFNTwitterLocationManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_tfn_appDidEnterBackground:(id)arg1;
- (void)_tfn_appWillEnterForeground:(id)arg1;
- (void)_tfn_resumeLocationServices;
- (void)_tfn_pauseLocationServices;
- (_Bool)_tfn_mayStartUpdatingLocation;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (_Bool)locationServicesAvailable;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

