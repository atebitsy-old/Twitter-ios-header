//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterCore/TFSTwitterAPICommandWithResponseModelBuilder.h>

@class NSString;

@interface TFSTwitterAPITranslatableProfileCommand : TFSTwitterAPICommandWithResponseModelBuilder
{
    long long _profileUserID;
    NSString *_apiLanguageCode;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *apiLanguageCode; // @synthesize apiLanguageCode=_apiLanguageCode;
@property(readonly, nonatomic) long long profileUserID; // @synthesize profileUserID=_profileUserID;
- (id)request;
- (id)initWithContext:(id)arg1 accountID:(id)arg2 profileUserID:(long long)arg3 apiLanguageCode:(id)arg4 source:(unsigned long long)arg5 responseModelBuilder:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;

@end

