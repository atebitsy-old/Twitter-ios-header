//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1Activity.h>

@class T1ShareUsingDeeplinkConfiguration;

@interface T1ShareUsingDeeplinkActivity : T1Activity
{
    T1ShareUsingDeeplinkConfiguration *_configuration;
}

+ (id)gmailActivityWithStatus:(id)arg1;
+ (id)whatsAppActivityWithStatus:(id)arg1;
+ (id)facebookMessengerActivityWithStatus:(id)arg1;
- (void).cxx_destruct;
- (void)performActivity;
- (_Bool)isSupported;
- (id)initWithConfiguration:(id)arg1;

@end

