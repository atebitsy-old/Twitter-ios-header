//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSScribeThrift/NSCoding-Protocol.h>
#import <TFSScribeThrift/TBase-Protocol.h>

@class NSString, TFSScribeThriftClientNetworkRequest, TFSScribeThriftVersionedCommonHeader;

@interface TFSScribeThriftClientAppLogUpload : NSObject <TBase, NSCoding>
{
    _Bool _commonHeaderIsSet;
    _Bool _requestIsSet;
    _Bool _logUrlIsSet;
    _Bool _problemCategoryIsSet;
    _Bool _problemDescriptionIsSet;
    _Bool _screenNameIsSet;
    TFSScribeThriftVersionedCommonHeader *_commonHeader;
    TFSScribeThriftClientNetworkRequest *_request;
    NSString *_logUrl;
    NSString *_problemCategory;
    NSString *_problemDescription;
    NSString *_screenName;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool screenNameIsSet; // @synthesize screenNameIsSet=_screenNameIsSet;
@property(copy, nonatomic) NSString *screenName; // @synthesize screenName=_screenName;
@property(readonly, nonatomic) _Bool problemDescriptionIsSet; // @synthesize problemDescriptionIsSet=_problemDescriptionIsSet;
@property(copy, nonatomic) NSString *problemDescription; // @synthesize problemDescription=_problemDescription;
@property(readonly, nonatomic) _Bool problemCategoryIsSet; // @synthesize problemCategoryIsSet=_problemCategoryIsSet;
@property(copy, nonatomic) NSString *problemCategory; // @synthesize problemCategory=_problemCategory;
@property(readonly, nonatomic) _Bool logUrlIsSet; // @synthesize logUrlIsSet=_logUrlIsSet;
@property(copy, nonatomic) NSString *logUrl; // @synthesize logUrl=_logUrl;
@property(readonly, nonatomic) _Bool requestIsSet; // @synthesize requestIsSet=_requestIsSet;
@property(retain, nonatomic) TFSScribeThriftClientNetworkRequest *request; // @synthesize request=_request;
@property(readonly, nonatomic) _Bool commonHeaderIsSet; // @synthesize commonHeaderIsSet=_commonHeaderIsSet;
@property(retain, nonatomic) TFSScribeThriftVersionedCommonHeader *commonHeader; // @synthesize commonHeader=_commonHeader;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCommonHeader:(id)arg1 request:(id)arg2 logUrl:(id)arg3 problemCategory:(id)arg4 problemDescription:(id)arg5 screenName:(id)arg6;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

