//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ZipUtilities/NSCopying-Protocol.h>
#import <ZipUtilities/NSObject-Protocol.h>

@class NSString;

@protocol NOZZipEntry <NSObject, NSCopying>
- (id)copy;
- (unsigned short)compressionMethod;
- (float)compressionLevel;
- (NSString *)comment;
- (NSString *)name;
@end

