//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSTwitterCore/TFSModel-Protocol.h>

@class NSString;

@interface TFSTwitterFoundMediaImage : NSObject <TFSModel>
{
    NSString *_URLString;
    NSString *_stillImageURLString;
    unsigned long long _dataLength;
    struct CGSize _imageDimensions;
}

+ (id)primaryImageFromImages:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long dataLength; // @synthesize dataLength=_dataLength;
@property(readonly, nonatomic) struct CGSize imageDimensions; // @synthesize imageDimensions=_imageDimensions;
@property(readonly, copy, nonatomic) NSString *stillImageURLString; // @synthesize stillImageURLString=_stillImageURLString;
@property(readonly, copy, nonatomic) NSString *URLString; // @synthesize URLString=_URLString;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithURLString:(id)arg1 stillImageURLString:(id)arg2 imageDimensions:(struct CGSize)arg3 dataLength:(unsigned long long)arg4;
- (id)init;

@end

