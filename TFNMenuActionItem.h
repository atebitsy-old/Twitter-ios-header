//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFNUI/NSCopying-Protocol.h>
#import <TFNUI/TFNMenuActionItemSwitchDelegate-Protocol.h>

@class NSString, UIImage;

@interface TFNMenuActionItem : NSObject <NSCopying, TFNMenuActionItemSwitchDelegate>
{
    _Bool _switchState;
    _Bool _cancelItem;
    _Bool _secondaryItem;
    NSString *_title;
    NSString *_subtitle;
    long long _style;
    CDUnknownBlockType _action;
    CDUnknownBlockType _switchToggleAction;
    UIImage *_image;
    NSString *_imageName;
    struct UIEdgeInsets _overrideContentEdgeInsets;
}

+ (id)roundedSecondaryMenuActionItemWithTitle:(id)arg1 action:(CDUnknownBlockType)arg2 isCancelItem:(_Bool)arg3;
+ (id)cancelMenuActionItemWithTitle:(id)arg1;
+ (id)menuActionItemWithTitle:(id)arg1 subtitle:(id)arg2 imageName:(id)arg3 style:(long long)arg4 action:(CDUnknownBlockType)arg5 isCancelItem:(_Bool)arg6;
+ (id)menuActionItemWithTitle:(id)arg1 subtitle:(id)arg2 imageName:(id)arg3 style:(long long)arg4 action:(CDUnknownBlockType)arg5;
+ (id)menuActionItemWithTitle:(id)arg1 style:(long long)arg2 action:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(nonatomic, getter=isSecondaryItem) _Bool secondaryItem; // @synthesize secondaryItem=_secondaryItem;
@property(nonatomic, getter=isCancelItem) _Bool cancelItem; // @synthesize cancelItem=_cancelItem;
@property(nonatomic) struct UIEdgeInsets overrideContentEdgeInsets; // @synthesize overrideContentEdgeInsets=_overrideContentEdgeInsets;
@property(nonatomic) _Bool switchState; // @synthesize switchState=_switchState;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) CDUnknownBlockType switchToggleAction; // @synthesize switchToggleAction=_switchToggleAction;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)menuActionItemSwitchStateDidUpdate:(_Bool)arg1;
@property(readonly, nonatomic, getter=isDestructive) _Bool destructive;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
