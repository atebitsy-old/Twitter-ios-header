//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterNetworkLayer/NSCopying-Protocol.h>
#import <TwitterNetworkLayer/NSFastEnumeration-Protocol.h>
#import <TwitterNetworkLayer/NSMutableCopying-Protocol.h>
#import <TwitterNetworkLayer/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface TNLParameterCollection : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration>
{
    NSDictionary *_parameters;
}

+ (id)stringByCombiningParameterString:(id)arg1 query:(id)arg2 fragment:(id)arg3 options:(long long)arg4;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)URLEncodedStringValueWithOptions:(long long)arg1;
- (id)encodableDictionaryValueWithOptions:(long long)arg1;
- (id)encodableDictionaryValue;
- (id)underlyingDictionaryValue;
- (id)stableURLEncodedStringValue;
- (id)URLEncodedStringValue;
- (void)enumerateParameterKeysAndValuesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateParameterKeysAndValuesUsingBlock:(CDUnknownBlockType)arg1;
- (id)allKeys;
- (id)parameterValueForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)count;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithParameterCollection:(id)arg1;
- (id)initWithURL:(id)arg1 parsingParameterTypes:(long long)arg2 options:(long long)arg3;
- (id)initWithURL:(id)arg1 parsingParameterTypes:(long long)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)initWithURLEncodedString:(id)arg1 options:(long long)arg2;
- (id)initWithURLEncodedString:(id)arg1;
- (id)initWithDirectlyAssignedDictionary:(id)arg1;
- (id)init;

@end

