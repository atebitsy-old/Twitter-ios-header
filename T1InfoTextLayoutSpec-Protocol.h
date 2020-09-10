//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSSet, NSString, UIColor, UIFont, UIImage;
@protocol T1InfoTextLayoutSpec;

@protocol T1InfoTextLayoutSpec <NSObject>
- (_Bool)isEqualToLayoutSpec:(id <T1InfoTextLayoutSpec>)arg1;
@property(nonatomic, readonly) NSString *sponsorshipScribeComponent;
@property(nonatomic, readonly) _Bool hasSponsorship;
@property(nonatomic, readonly) _Bool renderFromRight;
@property(nonatomic, readonly) _Bool isTitleMultiline;
@property(nonatomic, readonly) struct CGSize badgeSize;
@property(nonatomic, readonly) UIImage *badge;
@property(nonatomic, readonly) UIFont *font;
@property(nonatomic, readonly) UIColor *color;
@property(nonatomic, readonly) NSSet *detailsHyperlinks;
@property(nonatomic, readonly) NSSet *titleHyperlinks;
@property(nonatomic, readonly) NSString *details;
@property(nonatomic, readonly) NSString *title;
@end

