//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1WebViewLogger-Protocol.h>
#import <T1Twitter/TFNViewControllerEventObserver-Protocol.h>

@class NSNumber, NSString, TFNTwitterAccount, TFNTwitterStatus, TFSStopwatch, TFSTimer, TFSTwitterScribeContext;

@interface T1WebViewLogger : NSObject <T1WebViewLogger, TFNViewControllerEventObserver>
{
    long long _state;
    _Bool _isForSafariViewController;
    _Bool _hasScrolled;
    double _lastStateChangeElapsedTime;
    double _sessionStartTime;
    long long _wclFunnelStage;
    TFSStopwatch *_wclStopwatch;
    NSNumber *_wclBrowserOpenTimestamp;
    NSNumber *_wclLoadStartTimestamp;
    NSNumber *_wclLastReceivedLoadFinishedTimestamp;
    _Bool _isDwellOnViewAppearanceEnabled;
    _Bool _isTimestampBasedDwellEnabled;
    _Bool _isStopDwellOnBackgroundEnabled;
    _Bool _isResumeDwellOnForegroundEnabled;
    _Bool _stopAllowingAdditionalLoadFinishedStateChanges;
    _Bool _hasEnteredLoadFinished;
    TFNTwitterAccount *_account;
    TFNTwitterStatus *_status;
    TFSTwitterScribeContext *_scribeContext;
    double _shortDwellInterval;
    double _mediumDwellInterval;
    double _longDwellInterval;
    TFSTimer *_shortDwellTimer;
    TFSTimer *_mediumDwellTimer;
    TFSTimer *_longDwellTimer;
    TFSStopwatch *_dwellStopwatch;
    double _loggedDwellDuration;
    double _dwellDurationAtLatestPause;
}

+ (_Bool)isValidStateTransitionFrom:(long long)arg1 to:(long long)arg2 allowEnterLoadedState:(_Bool)arg3;
- (void).cxx_destruct;
@property(nonatomic) double dwellDurationAtLatestPause; // @synthesize dwellDurationAtLatestPause=_dwellDurationAtLatestPause;
@property(nonatomic) double loggedDwellDuration; // @synthesize loggedDwellDuration=_loggedDwellDuration;
@property(nonatomic) _Bool hasEnteredLoadFinished; // @synthesize hasEnteredLoadFinished=_hasEnteredLoadFinished;
@property(nonatomic) _Bool stopAllowingAdditionalLoadFinishedStateChanges; // @synthesize stopAllowingAdditionalLoadFinishedStateChanges=_stopAllowingAdditionalLoadFinishedStateChanges;
@property(retain, nonatomic) TFSStopwatch *dwellStopwatch; // @synthesize dwellStopwatch=_dwellStopwatch;
@property(retain, nonatomic) TFSTimer *longDwellTimer; // @synthesize longDwellTimer=_longDwellTimer;
@property(retain, nonatomic) TFSTimer *mediumDwellTimer; // @synthesize mediumDwellTimer=_mediumDwellTimer;
@property(retain, nonatomic) TFSTimer *shortDwellTimer; // @synthesize shortDwellTimer=_shortDwellTimer;
@property(readonly, nonatomic) double longDwellInterval; // @synthesize longDwellInterval=_longDwellInterval;
@property(readonly, nonatomic) double mediumDwellInterval; // @synthesize mediumDwellInterval=_mediumDwellInterval;
@property(readonly, nonatomic) double shortDwellInterval; // @synthesize shortDwellInterval=_shortDwellInterval;
@property(readonly, nonatomic) _Bool isResumeDwellOnForegroundEnabled; // @synthesize isResumeDwellOnForegroundEnabled=_isResumeDwellOnForegroundEnabled;
@property(readonly, nonatomic) _Bool isStopDwellOnBackgroundEnabled; // @synthesize isStopDwellOnBackgroundEnabled=_isStopDwellOnBackgroundEnabled;
@property(readonly, nonatomic) _Bool isTimestampBasedDwellEnabled; // @synthesize isTimestampBasedDwellEnabled=_isTimestampBasedDwellEnabled;
@property(readonly, nonatomic) _Bool isDwellOnViewAppearanceEnabled; // @synthesize isDwellOnViewAppearanceEnabled=_isDwellOnViewAppearanceEnabled;
@property(copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(retain, nonatomic) TFNTwitterStatus *status; // @synthesize status=_status;
@property(readonly, nonatomic) __weak TFNTwitterAccount *account; // @synthesize account=_account;
- (void)_t1_wcl_viewDidAppear;
- (void)_t1_wcl_finalizeLoadIfNecessary;
- (void)_t1_wcl_loadFinishedReceived;
- (void)_t1_wcl_advanceToFunnelStage:(long long)arg1;
- (void)_t1_wcl_logIntervalIfNecessaryFromStage:(long long)arg1 toStage:(long long)arg2;
- (void)_t1_wcl_logClickWithPreviewing:(_Bool)arg1;
- (void)_t1_wcl_logIntervalWithClientEventAction:(id)arg1 duration:(double)arg2;
- (void)_t1_wcl_logAction:(id)arg1;
- (void)cleanUpTimers;
- (void)pauseTimers;
- (void)startTimers;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)_t1_logEndSession;
- (void)logDwellEventsLessThan:(double)arg1;
- (void)logDwellEvents;
- (void)logEvent:(long long)arg1;
- (void)logAction:(id)arg1 withMillis:(unsigned long long)arg2;
- (void)viewControllerViewDidAppear:(id)arg1;
- (void)setState:(long long)arg1 withMillis:(unsigned long long)arg2;
- (void)webViewRedirectsHaveEnded;
- (void)webViewProgressValueDidChange:(double)arg1 afterMillis:(unsigned long long)arg2;
- (void)webViewDidFailLoadingAfterMillis:(unsigned long long)arg1;
- (void)webViewClosedAfterMillis:(unsigned long long)arg1;
- (void)webViewDidScrollAfterMillis:(unsigned long long)arg1;
- (void)webViewWasDismissedByUserInteraction;
- (void)_startSessionTimer;
- (void)webViewBrowsingSessionDidStart:(_Bool)arg1;
- (void)webViewLongDwellFired;
- (void)webViewMediumDwellFired;
- (void)webViewShortDwellFired;
- (void)dealloc;
- (void)updateWebViewLoggerWithScribeParams:(id)arg1 currentURL:(id)arg2 rootURL:(id)arg3;
- (id)initWithAccount:(id)arg1 forSafariViewController:(_Bool)arg2 sourceStatus:(id)arg3 scribeContext:(id)arg4;
- (void)simulateTimeElapsed:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

