//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface TFSTwitterTranslateTweetResponse : NSObject
{
    long long _statusID;
    NSString *_text;
    NSDictionary *_entitiesDic;
    NSString *_language;
    NSString *_translatedLanguage;
    NSString *_translationType;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *translationType; // @synthesize translationType=_translationType;
@property(copy, nonatomic) NSString *translatedLanguage; // @synthesize translatedLanguage=_translatedLanguage;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(copy, nonatomic) NSDictionary *entitiesDic; // @synthesize entitiesDic=_entitiesDic;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) long long statusID; // @synthesize statusID=_statusID;
- (id)init;
- (id)initWithStatusID:(long long)arg1 text:(id)arg2 entitiesDic:(id)arg3 language:(id)arg4 translatedLanguage:(id)arg5 translationType:(id)arg6;

@end

