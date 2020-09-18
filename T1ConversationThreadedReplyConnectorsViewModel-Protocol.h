//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class TFNLayoutMetrics;

@protocol T1ConversationThreadedReplyConnectorsViewModel <NSObject>
@property(readonly, nonatomic) double ancestorConnectorViewOriginY;
@property(readonly, nonatomic) double elbowParentConnectorViewHeight;
@property(readonly, nonatomic) double elbowParentConnectorViewWidth;
@property(readonly, nonatomic) double verticalParentConnectorViewHeight;
@property(readonly, nonatomic) _Bool shouldShowElbowParentConnectorView;
@property(readonly, nonatomic) _Bool shouldShowVerticalParentConnectorView;
@property(readonly, nonatomic) _Bool connectorEmphasisInBlueEnabled;
@property(readonly, nonatomic) long long indentationLevel;
- (double)ancestorConnectorViewOffsetForLayoutMetrics:(TFNLayoutMetrics *)arg1;
- (_Bool)shouldFadeOutAncestorConnectorForLevel:(unsigned long long)arg1;
- (_Bool)shouldShowAncestorConnectorAtLevel:(unsigned long long)arg1;
- (_Bool)shouldShowAncestorHighlightingAtLevel:(unsigned long long)arg1;
- (_Bool)shouldShowParentHighlighting;
- (double)ancestorConnectorViewHeightAtLevel:(unsigned long long)arg1;
@end

