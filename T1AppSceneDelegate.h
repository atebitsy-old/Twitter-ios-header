//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/UIWindowSceneDelegate-Protocol.h>

@class NSString, UIWindow;

@interface T1AppSceneDelegate : NSObject <UIWindowSceneDelegate>
{
    UIWindow *_window;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (id)_t1_openURLOptionsForURLContext:(id)arg1;
- (id)_t1_launchOptionsForConnectionOptions:(id)arg1;
- (void)windowScene:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)scene:(id)arg1 continueUserActivity:(id)arg2;
- (void)scene:(id)arg1 openURLContexts:(id)arg2;
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

