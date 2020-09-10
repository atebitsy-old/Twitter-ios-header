//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVDIAnalyticsScribe/NSCoding-Protocol.h>
#import <TVDIAnalyticsScribe/TBase-Protocol.h>

@class NSString;

@interface TVDIAnalyticsScribeError : NSObject <TBase, NSCoding>
{
    _Bool _isFatal;
    _Bool _isFatalIsSet;
    _Bool _categoryIsSet;
    _Bool _messageIsSet;
    _Bool _retryCountIsSet;
    short _retryCount;
    NSString *_category;
    NSString *_message;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool retryCountIsSet; // @synthesize retryCountIsSet=_retryCountIsSet;
@property(nonatomic) short retryCount; // @synthesize retryCount=_retryCount;
@property(readonly, nonatomic) _Bool messageIsSet; // @synthesize messageIsSet=_messageIsSet;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) _Bool categoryIsSet; // @synthesize categoryIsSet=_categoryIsSet;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(readonly, nonatomic) _Bool isFatalIsSet; // @synthesize isFatalIsSet=_isFatalIsSet;
@property(nonatomic) _Bool isFatal; // @synthesize isFatal=_isFatal;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
