//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSHTTPURLResponse, NSURLSessionTask, NSURLSessionTaskMetrics, TNLTemporaryFile;

@interface TNLBackgroundRequestContext : NSObject
{
    NSURLSessionTask *_URLSessionTask;
    NSHTTPURLResponse *_URLResponse;
    NSError *_error;
    TNLTemporaryFile *_tempFile;
    NSURLSessionTaskMetrics *_taskMetrics;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURLSessionTaskMetrics *taskMetrics; // @synthesize taskMetrics=_taskMetrics;
@property(retain, nonatomic) TNLTemporaryFile *tempFile; // @synthesize tempFile=_tempFile;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSHTTPURLResponse *URLResponse; // @synthesize URLResponse=_URLResponse;
@property(retain, nonatomic) NSURLSessionTask *URLSessionTask; // @synthesize URLSessionTask=_URLSessionTask;

@end

