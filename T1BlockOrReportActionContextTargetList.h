//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TFSTwitterUserReference;

@interface T1BlockOrReportActionContextTargetList : NSObject
{
    long long _listID;
    TFSTwitterUserReference *_ownerUserReference;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TFSTwitterUserReference *ownerUserReference; // @synthesize ownerUserReference=_ownerUserReference;
@property(readonly, nonatomic) long long listID; // @synthesize listID=_listID;
- (id)init;
- (id)initWithListID:(long long)arg1 ownerUserReference:(id)arg2;

@end

