//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILongPressGestureRecognizer.h>

#import <TFNUI/TFNMenuSupport-Protocol.h>

@class NSSet, NSString, TFNMenuCompatibleControl, UIEvent, UIImpactFeedbackGenerator;

@interface TFNLongPressGestureRecognizer : UILongPressGestureRecognizer <TFNMenuSupport>
{
    TFNMenuCompatibleControl *_control;
    UIImpactFeedbackGenerator *_impactFeedbackGenerator;
    UIEvent *_tfn_event;
    NSSet *_tfn_touches;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSSet *tfn_touches; // @synthesize tfn_touches=_tfn_touches;
@property(retain, nonatomic) UIEvent *tfn_event; // @synthesize tfn_event=_tfn_event;
@property(retain, nonatomic) UIImpactFeedbackGenerator *impactFeedbackGenerator; // @synthesize impactFeedbackGenerator=_impactFeedbackGenerator;
@property(retain, nonatomic) TFNMenuCompatibleControl *control; // @synthesize control=_control;
- (void)_tfn_populateMenuWithTitle:(id)arg1 actionItems:(id)arg2;
- (void)populateMenuWithActionItems:(id)arg1;
- (void)populateMenuWithTitle:(id)arg1 actionItems:(id)arg2;
- (_Bool)isPreparedToDisplayMenuOnPrimaryAction;
- (void)prepareToDisplayMenuOnPrimaryAction;
- (void)setState:(long long)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
@property(nonatomic, getter=isHapticFeedbackEnabled) _Bool hapticFeedbackEnabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
