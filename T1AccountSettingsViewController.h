//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

@class TFNTwitterAccount;

@interface T1AccountSettingsViewController : TFNItemsDataViewController
{
    // Error parsing type: , name: account
    // Error parsing type: , name: changeCountryPresenter
    // Error parsing type: , name: $__lazy_storage_$_countryDescriptionItem
    // Error parsing type: , name: emailAndPhoneLoader
    // Error parsing type: , name: changeUsernamePresenter
    // Error parsing type: , name: $__lazy_storage_$_changePasswordItem
    // Error parsing type: , name: $__lazy_storage_$_securityItem
    // Error parsing type: , name: $__lazy_storage_$_twitterDataItem
    // Error parsing type: , name: $__lazy_storage_$_connectedAppsItem
    // Error parsing type: , name: $__lazy_storage_$_emailAndPhoneFailedLoadNotification
}

- (void).cxx_destruct;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (void)accountChangedWithNotification:(id)arg1;
- (void)accountChanged:(id)arg1;
- (void)emailAndPhoneInfoDidUpdate:(id)arg1;
- (void)settingsDidUpdate:(id)arg1;
- (void)update:(_Bool)arg1;
- (void)applicationWillEnterForegroundFromBackground:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)reachabilityChanged:(long long)arg1;
- (void)tnl_communicationAgent:(id)arg1 didUpdateReachabilityFromPreviousFlags:(unsigned int)arg2 previousStatus:(long long)arg3 toCurrentFlags:(unsigned int)arg4 currentStatus:(long long)arg5;
- (void)tnl_communicationAgent:(id)arg1 didRegisterObserverWithInitialReachabilityFlags:(unsigned int)arg2 status:(long long)arg3 carrierInfo:(id)arg4 WWANRadioAccessTechnology:(id)arg5 captivePortalStatus:(long long)arg6;
- (id)initWithAccount:(id)arg1;
@property(nonatomic, readonly) TFNTwitterAccount *account; // @synthesize account;

@end

