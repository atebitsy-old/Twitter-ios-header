//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TFSTwitterScribeContext;

@interface T1SettingsDescriptionItemCallToAction : NSObject
{
    CDUnknownBlockType _actionBlock;
    TFSTwitterScribeContext *_scribeContext;
    struct _NSRange _range;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(readonly, copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(readonly, nonatomic) struct _NSRange range; // @synthesize range=_range;
- (id)initWithRange:(struct _NSRange)arg1 scribeContext:(id)arg2 actionBlock:(CDUnknownBlockType)arg3;

@end

