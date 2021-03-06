//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1NativesqueSingleWebViewController.h>

#import <T1Twitter/WKNavigationDelegate-Protocol.h>

@class NSString;

@interface T1PasswordResetViewController : T1NativesqueSingleWebViewController <WKNavigationDelegate>
{
    NSString *_webviewUrl;
    NSString *_appRestartSuppressToken;
}

+ (_Bool)isShowing;
+ (void)presentPasswordResetFromViewController:(id)arg1 withUsername:(id)arg2 urlString:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
- (void)_resumeAppRestartsWithToken;
- (void)_cancel;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (_Bool)shouldStartLoadWithRequest:(id)arg1 navigationType:(long long)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithAccount:(id)arg1;
- (id)initWithWebViewURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

