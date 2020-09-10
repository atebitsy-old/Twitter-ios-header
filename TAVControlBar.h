//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableDictionary, NSOrderedSet, UIStackView;
@protocol TAVControlBarDelegate, TAVPlayerView;

@interface TAVControlBar : UIView
{
    NSOrderedSet *_itemIdentifiers;
    id <TAVControlBarDelegate> _delegate;
    id <TAVPlayerView> _playerView;
    NSMutableDictionary *_itemForIdentifier;
    UIStackView *_stackView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) NSMutableDictionary *itemForIdentifier; // @synthesize itemForIdentifier=_itemForIdentifier;
@property(nonatomic) __weak id <TAVPlayerView> playerView; // @synthesize playerView=_playerView;
@property(nonatomic) __weak id <TAVControlBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSOrderedSet *itemIdentifiers; // @synthesize itemIdentifiers=_itemIdentifiers;
- (void)private_updateItemLayout;
- (void)didMoveToSuperview;
- (id)private_itemForIdentifier:(id)arg1;
- (id)itemForIdentifier:(id)arg1;
@property(nonatomic) double contentSpacing;
@property(nonatomic) struct UIEdgeInsets contentLayoutMargins;
- (id)description;
- (void)private_commonInit;
- (void)prepareForInterfaceBuilder;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

