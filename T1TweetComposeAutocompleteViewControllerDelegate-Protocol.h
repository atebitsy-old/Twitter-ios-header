//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSString, T1TweetComposeAutocompleteViewController;
@protocol T1AutocompleteResultItem;

@protocol T1TweetComposeAutocompleteViewControllerDelegate <NSObject>
- (NSString *)currentPrefixForTweetComposeAutocompleteViewController:(T1TweetComposeAutocompleteViewController *)arg1;
- (void)tweetComposeAutocompleteViewControllerDidEnterFullScreen:(T1TweetComposeAutocompleteViewController *)arg1;
- (void)tweetComposeAutocompleteViewController:(T1TweetComposeAutocompleteViewController *)arg1 textDidChange:(NSString *)arg2;
- (void)tweetComposeAutocompleteViewController:(T1TweetComposeAutocompleteViewController *)arg1 didSelectItem:(id <T1AutocompleteResultItem>)arg2;
@end

