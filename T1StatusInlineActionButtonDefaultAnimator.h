//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1StatusInlineActionButtonAnimator-Protocol.h>

@class T1StatusInlineActionButton;

@interface T1StatusInlineActionButtonDefaultAnimator : NSObject <T1StatusInlineActionButtonAnimator>
{
    T1StatusInlineActionButton *_button;
}

- (void).cxx_destruct;
@property(nonatomic) __weak T1StatusInlineActionButton *button; // @synthesize button=_button;
- (void)reset;
- (void)animateToCount:(long long)arg1;

@end

