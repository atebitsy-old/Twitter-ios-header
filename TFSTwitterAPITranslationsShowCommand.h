//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterCore/TFSTwitterAPICommandWithResponseModelBuilder.h>

@class NSNumber, NSString;

@interface TFSTwitterAPITranslationsShowCommand : TFSTwitterAPICommandWithResponseModelBuilder
{
    NSNumber *_statusID;
    NSString *_apiLanguageCode;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *apiLanguageCode; // @synthesize apiLanguageCode=_apiLanguageCode;
@property(retain, nonatomic) NSNumber *statusID; // @synthesize statusID=_statusID;
- (id)request;
- (id)initWithContext:(id)arg1 accountID:(id)arg2 statusID:(id)arg3 apiLanguageCode:(id)arg4 source:(unsigned long long)arg5 responseModelBuilder:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;

@end

