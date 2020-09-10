//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNAttributedTextViewDelegate-Protocol.h>

@class NSArray, NSString;

@interface T1PromptTextSpec : NSObject <TFNAttributedTextViewDelegate>
{
    NSArray *_boldRanges;
    long long _forcedTextAlignment;
    _Bool _shouldForceTextAlignment;
    NSString *_text;
    NSArray *_activeRanges;
    CDUnknownBlockType _handler;
    CDUnknownBlockType _fontBlock;
}

+ (id)textSpecForRichText:(id)arg1 subtaskController:(id)arg2 subtaskDataProvider:(id)arg3 textAlignment:(long long)arg4 defaultFont:(id)arg5;
+ (id)textSpecForRichText:(id)arg1 subtaskController:(id)arg2 subtaskDataProvider:(id)arg3 textAlignment:(long long)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType fontBlock; // @synthesize fontBlock=_fontBlock;
@property(readonly, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly, nonatomic) NSArray *activeRanges; // @synthesize activeRanges=_activeRanges;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
- (void)attributedTextView:(id)arg1 didTapRange:(id)arg2 rect:(struct CGRect)arg3;
- (id)attributedTextViewWithTextAlignment:(long long)arg1 color:(id)arg2 boldColor:(id)arg3 fontBlock:(CDUnknownBlockType)arg4;
- (id)attributedTextViewWithTextAlignment:(long long)arg1 color:(id)arg2 fontBlock:(CDUnknownBlockType)arg3;
- (id)initWithText:(id)arg1 boldRanges:(id)arg2 activeRanges:(id)arg3 handler:(CDUnknownBlockType)arg4 fontBlock:(CDUnknownBlockType)arg5 textAlignment:(long long)arg6;
- (id)initWithText:(id)arg1 boldRanges:(id)arg2 activeRanges:(id)arg3 handler:(CDUnknownBlockType)arg4 fontBlock:(CDUnknownBlockType)arg5;
- (id)initWithText:(id)arg1 activeRanges:(id)arg2 handler:(CDUnknownBlockType)arg3 fontBlock:(CDUnknownBlockType)arg4 textAlignment:(long long)arg5;
- (id)initWithText:(id)arg1 activeRanges:(id)arg2 handler:(CDUnknownBlockType)arg3 fontBlock:(CDUnknownBlockType)arg4;
- (id)initWithText:(id)arg1 activeRanges:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)initWithText:(id)arg1 boldRange:(struct _NSRange)arg2;
- (id)initWithText:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

