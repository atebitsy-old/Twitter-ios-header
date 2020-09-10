//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath;

@interface TFNItemsChangeInstruction : NSObject
{
    NSIndexPath *_indexPath;
    unsigned long long _changeType;
    id _item;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id item; // @synthesize item=_item;
@property(nonatomic) unsigned long long changeType; // @synthesize changeType=_changeType;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (id)_changeTypeString;
- (id)_descriptionForItem:(id)arg1;
- (_Bool)isSectionInstruction;
- (_Bool)isValidSectionInstruction;
- (_Bool)isValidItemInstruction;
- (id)description;
- (id)initWithIndexPath:(id)arg1 changeType:(unsigned long long)arg2 item:(id)arg3;

@end

