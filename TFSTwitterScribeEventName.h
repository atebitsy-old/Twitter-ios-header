//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSScribe/NSCopying-Protocol.h>

@class NSString;

@interface TFSTwitterScribeEventName : NSObject <NSCopying>
{
    NSString *_action;
    NSString *_page;
    NSString *_section;
    NSString *_component;
    NSString *_element;
}

+ (id)eventNameStringForClient:(id)arg1 eventName:(id)arg2;
+ (id)eventNameWithAction:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *element; // @synthesize element=_element;
@property(copy, nonatomic) NSString *component; // @synthesize component=_component;
@property(copy, nonatomic) NSString *section; // @synthesize section=_section;
@property(copy, nonatomic) NSString *page; // @synthesize page=_page;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)eventNamespaceDictionaryForClient:(id)arg1;
- (id)eventNameStringForClient:(id)arg1;
- (id)eventNameString;
- (id)initWithEventName:(id)arg1;
- (id)initWithAction:(id)arg1;

@end

