//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterAPI/TFSTwitterAPIEndpointRequest.h>

@interface TFSTwitterAPIContactsDestroyRequest : TFSTwitterAPIEndpointRequest
{
}

+ (id)endpointPath;
+ (long long)HTTPMethodValue;
- (id)initWithContactIdentifiersJSONData:(id)arg1 isLiveSyncRequest:(_Bool)arg2 context:(id)arg3;
- (id)initWithEndpointPath:(id)arg1 parameters:(id)arg2 multipartFormData:(id)arg3 bodyData:(id)arg4 bodyFilePath:(id)arg5 headerFields:(id)arg6 context:(id)arg7 responseModelBuilder:(id)arg8 emptyResponseDataExpected:(_Bool)arg9;

@end

