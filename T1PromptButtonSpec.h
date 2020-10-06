//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface T1PromptButtonSpec : NSObject
{
    _Bool _shouldUseLegacyButton;
    _Bool _preferFullWidth;
    NSString *_title;
    unsigned long long _strength;
    unsigned long long _variant;
    UIColor *_tintColor;
    NSString *_imageName;
    unsigned long long _imagePosition;
    CDUnknownBlockType _action;
    long long _style;
}

+ (long long)private_styleForButtonStyle:(long long)arg1 emphasized:(_Bool)arg2;
+ (id)buttonSpecForTitle:(id)arg1 buttonStyle:(long long)arg2 iconName:(id)arg3 legacyEmphasized:(_Bool)arg4 preferFullWidth:(_Bool)arg5 action:(CDUnknownBlockType)arg6;
+ (long long)private_buttonStyleForPromptActionStyle:(unsigned long long)arg1;
+ (id)buttonSpecForNavigationLink:(id)arg1 preferFullWidth:(_Bool)arg2 style:(unsigned long long)arg3 subtaskController:(id)arg4;
+ (id)buttonSpecWithTitle:(id)arg1 preferFullWidth:(_Bool)arg2 style:(unsigned long long)arg3 action:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic) _Bool preferFullWidth; // @synthesize preferFullWidth=_preferFullWidth;
@property(readonly, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(readonly, nonatomic) unsigned long long imagePosition; // @synthesize imagePosition=_imagePosition;
@property(readonly, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(readonly, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(readonly, nonatomic) unsigned long long variant; // @synthesize variant=_variant;
@property(readonly, nonatomic) unsigned long long strength; // @synthesize strength=_strength;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void)private_buttonAction:(id)arg1;
- (id)private_buttonForSizeClass:(long long)arg1;
- (id)private_buttonForToolbarItem:(_Bool)arg1 withSize:(unsigned long long)arg2;
- (unsigned long long)private_legacyButtonSizeForSizeClass:(long long)arg1;
- (id)barButtonItem;
- (id)buttonWithSizeClass:(long long)arg1;
- (id)buttonWithSize:(unsigned long long)arg1;
- (id)initWithTitle:(id)arg1 style:(long long)arg2 tintColor:(id)arg3 imageName:(id)arg4 preferFullWidth:(_Bool)arg5 action:(CDUnknownBlockType)arg6;
- (id)initWithTitle:(id)arg1 style:(long long)arg2 tintColor:(id)arg3 action:(CDUnknownBlockType)arg4;
- (id)initWithTitle:(id)arg1 style:(long long)arg2 action:(CDUnknownBlockType)arg3;
- (id)initWithTitle:(id)arg1 strength:(unsigned long long)arg2 variant:(unsigned long long)arg3 tintColor:(id)arg4 imageName:(id)arg5 imagePosition:(unsigned long long)arg6 preferFullWidth:(_Bool)arg7 action:(CDUnknownBlockType)arg8;
- (id)initWithTitle:(id)arg1 strength:(unsigned long long)arg2 variant:(unsigned long long)arg3 tintColor:(id)arg4 preferFullWidth:(_Bool)arg5 action:(CDUnknownBlockType)arg6;
- (id)initWithTitle:(id)arg1 strength:(unsigned long long)arg2 variant:(unsigned long long)arg3 action:(CDUnknownBlockType)arg4;

@end

