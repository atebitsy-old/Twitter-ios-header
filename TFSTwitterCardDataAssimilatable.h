//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface TFSTwitterCardDataAssimilatable : NSObject
{
    // Error parsing type: , name: bindingValues
    // Error parsing type: , name: name
    // Error parsing type: , name: url
    // Error parsing type: , name: updatedTimestamp
    // Error parsing type: , name: audienceName
    // Error parsing type: , name: audienceBucket
}

- (void).cxx_destruct;
- (id)init;
- (void)assimilateIntoModelContext:(id)arg1;
- (void)setImageColor:(id)arg1 forKey:(id)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)setImage:(id)arg1 forKey:(id)arg2;
- (void)setUserID:(long long)arg1 scribeKey:(id)arg2 forKey:(id)arg3;
- (void)setBoolean:(_Bool)arg1 forKey:(id)arg2;
- (void)setString:(id)arg1 scribeKey:(id)arg2 forKey:(id)arg3;
- (id)initWithName:(id)arg1 url:(id)arg2 updatedTimestamp:(id)arg3;
@property(nonatomic, copy) NSString *audienceBucket;
@property(nonatomic, copy) NSString *audienceName;
@property(nonatomic, readonly) NSDate *updatedTimestamp;
@property(nonatomic, readonly) NSString *url;
@property(nonatomic, readonly) NSString *name;

@end

