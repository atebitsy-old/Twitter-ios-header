//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSTwitterCore/NSCoding-Protocol.h>
#import <TFSTwitterCore/NSCopying-Protocol.h>
#import <TFSTwitterCore/TFSEncodable-Protocol.h>

@interface TFSTwitterRect : NSObject <NSCoding, TFSEncodable, NSCopying>
{
    struct CGRect _rect;
}

+ (id)encodableName;
@property(readonly, nonatomic) struct CGRect rect; // @synthesize rect=_rect;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)JSONDictionaryValue;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithDecoder:(id)arg1;
- (void)encodeWithEncoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithRect:(struct CGRect)arg1;
- (id)init;

@end

