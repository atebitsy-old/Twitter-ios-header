//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1UserOrRecommendationTableRowAdapter.h>

@interface T1TweetDetailsUserItemTableRowAdapter : T1UserOrRecommendationTableRowAdapter
{
    CDUnknownBlockType _shouldShowSocialContextForFocalStatusBlock;
    CDUnknownBlockType _isCurrentUserConversationOwner;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType isCurrentUserConversationOwner; // @synthesize isCurrentUserConversationOwner=_isCurrentUserConversationOwner;
@property(copy, nonatomic) CDUnknownBlockType shouldShowSocialContextForFocalStatusBlock; // @synthesize shouldShowSocialContextForFocalStatusBlock=_shouldShowSocialContextForFocalStatusBlock;
- (_Bool)_hideFollowControl:(id)arg1;
- (unsigned long long)_userFollowControlType:(id)arg1;
- (id)dataViewController:(id)arg1 previewConfigurationForItem:(id)arg2 withOptions:(id)arg3 location:(struct CGPoint)arg4 inCell:(id)arg5 atIndexPath:(id)arg6;
- (id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 calculatedLayoutMetricsForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)initWithAccount:(id)arg1 scribeImpressionCache:(id)arg2;

@end

