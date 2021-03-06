//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1ToastViewControllerDelegate-Protocol.h>
#import <T1Twitter/TFNViewControllerEventObserver-Protocol.h>

@class NSDate, NSMutableArray, NSString, T1ToastBox, T1ToastViewController, TFNTwitterScribe, TFSTimer, TIPImagePipeline, UINotificationFeedbackGenerator, UIViewController;
@protocol TFNViewControllerVisibility><T1ToasterContextDelegate;

@interface T1Toaster : NSObject <TFNViewControllerEventObserver, T1ToastViewControllerDelegate>
{
    _Bool _enabled;
    _Bool _isTimerFiring;
    TIPImagePipeline *_imagePipeline;
    TFNTwitterScribe *_scribe;
    UIViewController<TFNViewControllerVisibility><T1ToasterContextDelegate> *_contextDelegate;
    unsigned long long _state;
    NSMutableArray *_queue;
    T1ToastBox *_activeToastBox;
    TFSTimer *_timer;
    double _restoreTimeInterval;
    NSDate *_throttleNormalToastsUntilDate;
    T1ToastViewController *_toastViewController;
    UINotificationFeedbackGenerator *_notificationFeedbackGenerator;
}

+ (double)normalToastThrottleCooldownDuration;
+ (unsigned long long)normalToastQueueMaxCount;
+ (id)defaultToaster;
- (void).cxx_destruct;
@property(retain, nonatomic) UINotificationFeedbackGenerator *notificationFeedbackGenerator; // @synthesize notificationFeedbackGenerator=_notificationFeedbackGenerator;
@property(nonatomic) __weak T1ToastViewController *toastViewController; // @synthesize toastViewController=_toastViewController;
@property(retain, nonatomic) NSDate *throttleNormalToastsUntilDate; // @synthesize throttleNormalToastsUntilDate=_throttleNormalToastsUntilDate;
@property(nonatomic) double restoreTimeInterval; // @synthesize restoreTimeInterval=_restoreTimeInterval;
@property(nonatomic) _Bool isTimerFiring; // @synthesize isTimerFiring=_isTimerFiring;
@property(retain, nonatomic) TFSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) T1ToastBox *activeToastBox; // @synthesize activeToastBox=_activeToastBox;
@property(retain, nonatomic) NSMutableArray *queue; // @synthesize queue=_queue;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak UIViewController<TFNViewControllerVisibility><T1ToasterContextDelegate> *contextDelegate; // @synthesize contextDelegate=_contextDelegate;
@property(retain, nonatomic) TFNTwitterScribe *scribe; // @synthesize scribe=_scribe;
@property(retain, nonatomic) TIPImagePipeline *imagePipeline; // @synthesize imagePipeline=_imagePipeline;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (unsigned long long)priorityForToast:(id)arg1;
- (id)toastQueue;
- (id)activeToast;
- (void)scribeAction:(id)arg1 forToast:(id)arg2;
- (void)toastViewController:(id)arg1 didEndInteractingWithToast:(id)arg2;
- (void)toastViewController:(id)arg1 isInteractingWithToast:(id)arg2;
- (void)toastViewController:(id)arg1 didDismissToast:(id)arg2 withStyle:(unsigned long long)arg3 byGesture:(_Bool)arg4;
- (void)toastViewController:(id)arg1 willDismissToast:(id)arg2;
- (void)toastViewController:(id)arg1 didPresentToast:(id)arg2;
- (void)toastViewController:(id)arg1 willPresentToast:(id)arg2;
- (void)toastViewController:(id)arg1 didInvokeToastAction:(id)arg2 forToast:(id)arg3;
- (void)viewControllerViewDidFullyDisappear:(id)arg1;
- (void)viewControllerViewDidFullyAppear:(id)arg1;
- (void)_t1_applicationDidEnterBackground:(id)arg1;
- (void)_t1_timerDidFinish;
- (void)_t1_startToastTimerWithInterval:(double)arg1;
- (void)_t1_dismissCurrentToastWithStyle:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_t1_showNextToastWithStyle:(unsigned long long)arg1;
- (_Bool)_t1_throttleNormalToastsIfNeeded;
- (_Bool)_t1_isThrottlingNormalToasts;
- (id)_t1_popToastBox;
- (void)_t1_insertToastBoxIntoQueue:(id)arg1;
- (void)dequeueToastsPassingTest:(CDUnknownBlockType)arg1;
- (void)pushToast:(id)arg1 withPriority:(unsigned long long)arg2;
- (void)pushToast:(id)arg1;
- (void)registerToastViewController:(id)arg1;
- (void)resetToaster;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

