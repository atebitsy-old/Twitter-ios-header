//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TFNTwitterImageCategoryVariant : NSObject
{
    long long _attributes;
    NSString *_name;
    NSArray *_formats;
    long long _requestURLFormat;
    struct CGSize _boundingDimensions;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long requestURLFormat; // @synthesize requestURLFormat=_requestURLFormat;
@property(readonly, copy, nonatomic) NSArray *formats; // @synthesize formats=_formats;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) struct CGSize boundingDimensions; // @synthesize boundingDimensions=_boundingDimensions;
@property(readonly, nonatomic) long long attributes; // @synthesize attributes=_attributes;
- (id)imageURLStringForTemplateURL:(id)arg1 formatFallback:(id)arg2;
- (id)imageURLForTemplateURL:(id)arg1 formatFallback:(id)arg2;
- (id)imageURLStringForBaseURLString:(id)arg1 format:(id)arg2;
- (id)imageURLForBaseURLString:(id)arg1 format:(id)arg2;
- (id)supportedFormatForRequestedFormat:(id)arg1;
- (id)initWithAttributes:(long long)arg1 boundingDimensions:(struct CGSize)arg2 name:(id)arg3 formats:(id)arg4 requestURLFormat:(long long)arg5;

@end

