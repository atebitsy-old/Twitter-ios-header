//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1ComposeTypeaheadViewControllerDelegate-Protocol.h>

@class TFNTwitterAccount, UIScrollView, UITextView, UIViewController;
@protocol TFNDirectMessageConversation;

__attribute__((visibility("hidden")))
@interface _TtC9T1Twitter45DirectMessageConversationAutocompleteBehavior : NSObject <T1ComposeTypeaheadViewControllerDelegate>
{
    // Error parsing type: , name: account
    // Error parsing type: , name: textView
    // Error parsing type: , name: hostViewController
    // Error parsing type: , name: autocompleteDidBegin
    // Error parsing type: , name: scribeContext
    // Error parsing type: , name: autocompleteController
    // Error parsing type: , name: autocompleteViewController
    // Error parsing type: , name: conversation
    // Error parsing type: , name: contentScrollView
    // Error parsing type: , name: enabled
}

- (void).cxx_destruct;
- (id)init;
- (void)composeTypeaheadViewController:(id)arg1 scrollViewDidScroll:(id)arg2;
- (void)composeTypeaheadViewController:(id)arg1 didSelectItem:(id)arg2;
- (void)conversationDidUpdateMetadata:(id)arg1;
- (void)autocompleteController:(id)arg1 didReceiveResult:(id)arg2;
- (void)autocompleteControllerDidEnd:(id)arg1;
- (void)autocompleteControllerDidBegin:(id)arg1;
- (void)dealloc;
@property(nonatomic) _Bool enabled; // @synthesize enabled;
@property(nonatomic, retain) UIScrollView *contentScrollView; // @synthesize contentScrollView;
@property(nonatomic, retain) id <TFNDirectMessageConversation> conversation; // @synthesize conversation;
@property(nonatomic, copy) CDUnknownBlockType autocompleteDidBegin;
@property(nonatomic) __weak UIViewController *hostViewController; // @synthesize hostViewController;
@property(nonatomic, readonly) UITextView *textView; // @synthesize textView;
@property(nonatomic, readonly) TFNTwitterAccount *account; // @synthesize account;

@end
