//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFNUI/TFNLegacyButtonFontGroup-Protocol.h>
#import <TFNUI/TFNUIFontGroup-Protocol.h>

@class NSString, UIFont;

@interface TFNUIDefaultFontGroup : NSObject <TFNUIFontGroup, TFNLegacyButtonFontGroup>
{
}

+ (id)sharedFontGroup;
@property(readonly, nonatomic) UIFont *navSubtitleFont;
@property(readonly, nonatomic) UIFont *navTitleFont;
@property(readonly, nonatomic) UIFont *largeBoldFont;
@property(readonly, nonatomic) UIFont *largeFont;
@property(readonly, nonatomic) UIFont *smallFont;
@property(readonly, nonatomic) UIFont *normalBoldFont;
@property(readonly, nonatomic) UIFont *normalFont;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

